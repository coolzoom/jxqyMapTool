#ifndef MAPTOOL_H
#define MAPTOOL_H

#include <MapFrameBase.h>
#include "Map.h"
#include "Npc.hpp"
#include "AsfDecode.hpp"

#include "wx/dcbuffer.h"
#include "wx/filedlg.h"
#include "wx/stdpaths.h"
#include "wx/msgdlg.h"

class MapTool : public MapFrameBase
{
public:
    MapTool(wxWindow* parent);
    virtual ~MapTool();
protected:
private:
    void OpenMap(wxCommandEvent& event);
    void SaveToPNG(wxCommandEvent& event);
    void OnLayer1( wxCommandEvent& event ) ;
    void OnLayer2( wxCommandEvent& event );
    void OnLayer3( wxCommandEvent& event );
    void OnTrap( wxCommandEvent& event ) ;
    void OnBarrer( wxCommandEvent& event ) ;
    void OnMapDraw( wxPaintEvent& event ) ;
    void OnLayerTransparent( wxCommandEvent& event );

    void OnMapUp( wxCommandEvent& event ) ;
    void OnMapDown( wxCommandEvent& event ) ;
    void OnMapLeft( wxCommandEvent& event ) ;
    void OnMapRight( wxCommandEvent& event ) ;
    void OnMapViewMouseLeftDown( wxMouseEvent& event );
    void OnMapViewMouseLeftUp( wxMouseEvent& event );

    void OnMouseMove( wxMouseEvent& event );

    void OnDrawMapControl( wxPaintEvent& event );
    void OnMapCtrlMouseMotion( wxMouseEvent& event );

    void OnNpcMode( wxCommandEvent& event )
    {
        m_isNpc = true;
        m_isObj = false;
        m_ToolBarEdit->ToggleTool(ID_NPCMODE, true);
        m_ToolBarEdit->ToggleTool(ID_OBJMODE, false);
    }
    void OnObjMode( wxCommandEvent& event )
    {
        m_isNpc = false;
        m_isObj = true;
        m_ToolBarEdit->ToggleTool(ID_NPCMODE, false);
        m_ToolBarEdit->ToggleTool(ID_OBJMODE, true);
    }

    //NPC
    void OnLoadCharater( wxCommandEvent& event );
    void OnPlaceMode( wxCommandEvent& event ) ;
    void OnCharacterDirection( wxCommandEvent& event );
    void OnImportNpcFile( wxCommandEvent& event );
    void OnOutputNpcFile( wxCommandEvent& event );
    void OnShowNpcCounts( wxCommandEvent& event )
    {
        wxMessageBox(wxString::Format(wxT("NPC 数量：Count = %d"), m_NpcList.getCounts()),
                     wxT("消息"));
    }
    void OnClearNpc( wxCommandEvent& event )
    {
        m_NpcList.Clear();
        FreeAsfImgList(m_NpcAsfImgList);
    }


    //OBJ
    void OnLoadObject( wxCommandEvent& event );
    void OnObjectDirection( wxCommandEvent& event )
    {
        OnCharacterDirection(event);
    }
    void OnImportObjFile( wxCommandEvent& event );
    void OnOutputObjFile( wxCommandEvent& event );
    void OnShowObjCount( wxCommandEvent& event )
    {
        wxMessageBox(wxString::Format(wxT("OBJ 数量：Count = %d"), m_ObjList.getCounts()),
                     wxT("消息"));
    }
    void OnClearObj( wxCommandEvent& event )
    {
        m_ObjList.Clear();
        FreeAsfImgList(m_ObjAsfImgList);
    }


    void OnDeleteMode( wxCommandEvent& event );

    void OnMoveMode( wxCommandEvent& event );

    void OnEditAttributeMode( wxCommandEvent& event );

    void DrawRectangle(long col, long row, wxBufferedPaintDC &dc);
    void DrawTile(long col, long row, wxBufferedPaintDC &dc, NpcItem *npcitem, ObjItem *objitem = NULL);
    void DrawObjsNpcs(wxBufferedPaintDC &dc);

    //if getImg is true return an image, else return NULL
    wxImage* ReadMap(bool getImg = false);
    void RedrawMapView();
    void CheckMapViewBeginPosition();

    wxBitmap m_MapBitmap;
    Map map;
    int m_ViewBeginx, m_ViewBeginy;
    //Current tile under mouse
    int m_CurTileX, m_CurTileY;
    wxString exepath, m_MapFileName;
    char m_NpcCurrentDir;
    bool m_isPlaceMode, m_isDeleteMode, m_isEditAttribute, m_isMoveMode;

    //Npc obj list
    NpcItem m_PlaceNpcData, *m_MoveNpcItem;
    ObjItem m_PlaceObjData, *m_MoveObjItem;
    NpcList m_NpcList;
    ObjList m_ObjList;
    AsfImgList *m_NpcAsfImgList, *m_ObjAsfImgList;
    wxString m_NpcIniFilePath, m_ObjIniFilePath;
    bool m_isObj, m_isNpc;

    DECLARE_EVENT_TABLE()
};

class NpcItemEditDialog: public NpcItemEditDialogBase
{
public:
    NpcItemEditDialog(wxWindow *parent,
                      const wxString mapname,
                      AsfImgList *list,
                      NpcItem *item)
        :NpcItemEditDialogBase(parent)
    {
        exepath = wxStandardPaths::Get().GetExecutablePath();
        exepath = wxFileName::FileName(exepath).GetPath(wxPATH_GET_VOLUME | wxPATH_GET_SEPARATOR);
        m_mapName = mapname;
        m_NpcAsfImgList = list;
        m_item = item;

        INI_MASK = wxT("INI文件(*.ini)|*.ini");
        TXT_MASK = wxT("TXT文件(*.txt)|*.txt");
        INI_MESSGEG = wxT("选择一个INI文件");
        STYLE = wxFD_OPEN;
    }
    virtual ~NpcItemEditDialog() {}
    void InitFromNpcItem(NpcItem *item);
    void AssignToNpcItem(NpcItem *item);
private:

    void OnOk( wxCommandEvent& event )
    {
        EndModal(wxID_OK);
    }
    void OnCancle( wxCommandEvent& event )
    {
        EndModal(wxID_CANCEL);
    }

    void OnNpcIni( wxCommandEvent& event )
    {
        wxFileDialog filedlg(this,
                             INI_MESSGEG,
                             exepath + wxT("ini\\npcres\\"),
                             wxT(""),
                             INI_MASK,
                             STYLE);

        if(filedlg.ShowModal() == wxID_OK)
        {
            m_NpcIni->SetLabel(filedlg.GetFilename());
            m_NpcIni->SetToolTip(filedlg.GetFilename());
        }
    }
    void OnNpcIniEdit( wxCommandEvent& event )
    {
        wxString path = m_NpcIni->GetLabel();
        if(!path.IsEmpty()) path = wxT("ini\\npcres\\") + path;
        OpenFile(path);
    }
    void OnBodyIni( wxCommandEvent& event )
    {
        wxFileDialog filedlg(this,
                             INI_MESSGEG,
                             exepath + wxT("ini\\obj\\"),
                             wxT(""),
                             INI_MASK,
                             STYLE);

        if(filedlg.ShowModal() == wxID_OK)
        {
            m_BodyIni->SetLabel(filedlg.GetFilename());
            m_BodyIni->SetToolTip(filedlg.GetFilename());
        }
    }
    void OnBodyIniEdit( wxCommandEvent& event )
    {
        wxString path = m_BodyIni->GetLabel();
        if(!path.IsEmpty()) path = wxT("ini\\obj\\") + path;
        OpenFile(path);
    }
    void OnFlyIni( wxCommandEvent& event )
    {
        wxFileDialog filedlg(this,
                             INI_MESSGEG,
                             exepath + wxT("ini\\magic\\"),
                             wxT(""),
                             INI_MASK,
                             STYLE);

        if(filedlg.ShowModal() == wxID_OK)
        {
            m_FlyIni->SetLabel(filedlg.GetFilename());
            m_FlyIni->SetToolTip(filedlg.GetFilename());
        }
    }
    void OnFlyIniEdit( wxCommandEvent& event )
    {
        wxString path = m_FlyIni->GetLabel();
        if(!path.IsEmpty()) path = wxT("ini\\magic\\") + path;
        OpenFile(path);
    }
    void OnFlyIni2( wxCommandEvent& event )
    {
        wxFileDialog filedlg(this,
                             INI_MESSGEG,
                             exepath + wxT("ini\\magic\\"),
                             wxT(""),
                             INI_MASK,
                             STYLE);

        if(filedlg.ShowModal() == wxID_OK)
        {
            m_FlyIni2->SetLabel(filedlg.GetFilename());
            m_FlyIni2->SetToolTip(filedlg.GetFilename());
        }
    }
    void OnFlyIni2Edit( wxCommandEvent& event )
    {
        wxString path = m_FlyIni2->GetLabel();
        if(!path.IsEmpty()) path = wxT("ini\\magic\\") + path;
        OpenFile(path);
    }
    void OnScriptFile( wxCommandEvent& event )
    {
        wxFileDialog filedlg(this,
                             wxT("选择一个脚本文件"),
                             exepath + wxT("script\\map\\") + m_mapName + wxT("\\"),
                             wxT(""),
                             TXT_MASK,
                             STYLE);

        if(filedlg.ShowModal() == wxID_OK)
        {
            m_ScriptFile->SetLabel(filedlg.GetFilename());
            m_ScriptFile->SetToolTip(filedlg.GetFilename());
        }
    }
    void OnScriptFileEdit( wxCommandEvent& event )
    {
        wxString path = m_ScriptFile->GetLabel();
        if(!path.IsEmpty()) path = wxT("script\\map\\") + m_mapName + wxT("\\")+ path;
        OpenFile(path);
    }
    void OnDeathScript( wxCommandEvent& event )
    {
        wxFileDialog filedlg(this,
                             wxT("选择一个脚本文件"),
                             exepath + wxT("script\\map\\") + m_mapName + wxT("\\"),
                             wxT(""),
                             TXT_MASK,
                             STYLE);

        if(filedlg.ShowModal() == wxID_OK)
        {
            m_DeathScript->SetLabel(filedlg.GetFilename());
            m_DeathScript->SetToolTip(filedlg.GetFilename());
        }
    }
    void OnDeathScriptEdit( wxCommandEvent& event )
    {
        wxString path = m_DeathScript->GetLabel();
        if(!path.IsEmpty()) path = wxT("script\\map\\") + m_mapName + wxT("\\")+ path;
        OpenFile(path);
    }

    void OnBodyIniClear( wxMouseEvent& event )
    {
        m_BodyIni->SetLabel(wxT(""));
        m_BodyIni->SetToolTip(wxT("左键选择，右键清除"));
    }
    void OnFlyIniClear( wxMouseEvent& event )
    {
        m_FlyIni->SetLabel(wxT(""));
        m_FlyIni->SetToolTip(wxT("左键选择，右键清除"));
    }
    void OnFlyIni2Clear( wxMouseEvent& event )
    {
        m_FlyIni2->SetLabel(wxT(""));
        m_FlyIni2->SetToolTip(wxT("左键选择，右键清除"));
    }
    void OnScriptFileClear( wxMouseEvent& event )
    {
        m_ScriptFile->SetLabel(wxT(""));
        m_ScriptFile->SetToolTip(wxT("左键选择，右键清除"));
    }
    void OnDeathScriptClear( wxMouseEvent& event )
    {
        m_DeathScript->SetLabel(wxT(""));
        m_DeathScript->SetToolTip(wxT("左键选择，右键清除"));
    }


    void OnSaveNpcIniFile( wxCommandEvent& event )
    {
        wxFileDialog filedlg(this,
                             wxT("保存INI"),
                             exepath + wxT("ini\\npc\\"),
                             wxT(""),
                             INI_MASK,
                             wxFD_SAVE | wxFD_OVERWRITE_PROMPT);

        if(filedlg.ShowModal() == wxID_OK)
        {
            NpcItem item;
            InitNpcItem(&item);
            AssignToNpcItem(&item);
            item.MapX = m_item->MapX;
            item.MapY = m_item->MapY;
            SaveIni(filedlg.GetPath(), &item);
        }
    }



    void OpenFile(wxString relatePath)
    {
        if(relatePath.IsEmpty())
        {
            wxMessageBox(wxT("请先选择文件"), wxT("消息"));
            return;
        }
        if(wxFileName::FileExists(exepath + relatePath))
        {
            wxExecute(wxT("explorer \"") + exepath + relatePath + wxT("\""));
        }
        else
        {
            wxMessageBox(relatePath + wxT("  文件不存在"), wxT("消息"));
            return;
        }
    }



    wxString INI_MASK,INI_MESSGEG, TXT_MASK;
    long STYLE;
    wxString exepath, m_mapName;
    AsfImgList *m_NpcAsfImgList;
    NpcItem *m_item;
};

class ObjItemEditDialog: public ObjItemEditDialogBase
{
public:

    ObjItemEditDialog(wxWindow *parent,
                      const wxString mapname,
                      AsfImgList *list,
                      ObjItem *objitem)
        :ObjItemEditDialogBase(parent)
    {
        exepath = wxStandardPaths::Get().GetExecutablePath();
        exepath = wxFileName::FileName(exepath).GetPath(wxPATH_GET_VOLUME | wxPATH_GET_SEPARATOR);
        m_mapName = mapname;
        m_ObjAsfImgList = list;
        m_item = objitem;
    }
    virtual ~ObjItemEditDialog() {}
    void InitFromObjItem(ObjItem *item);
    void AssignToObjItem(ObjItem *item);
private:

    void OnObjFile( wxCommandEvent& event )
    {
        wxFileDialog filedlg(this,
                             wxT("选择一个INI文件"),
                             exepath + wxT("ini\\objres\\"),
                             wxT(""),
                             wxT("INI文件(*.ini)|*.ini"),
                             wxFD_OPEN | wxFD_FILE_MUST_EXIST);

        if(filedlg.ShowModal() == wxID_OK)
        {
            m_ObjFile->SetLabel(filedlg.GetFilename());
            m_ObjFile->SetToolTip(filedlg.GetFilename());
        }
    }
    void OnEditObjFile( wxCommandEvent& event )
    {
        wxString path = m_ObjFile->GetLabel();
        if(!path.IsEmpty()) path = wxT("ini\\objres\\") + path;
        OpenFile(path);
    }
    void OnScriptFile( wxCommandEvent& event )
    {
         wxFileDialog filedlg(this,
                             wxT("选择一个脚本文件"),
                             exepath + wxT("script\\common\\"),
                             wxT(""),
                             wxT("TXT文件(*.txt)|*.txt"),
                             wxFD_OPEN | wxFD_FILE_MUST_EXIST);

        if(filedlg.ShowModal() == wxID_OK)
        {
            m_ScriptFile->SetLabel(filedlg.GetFilename());
            m_ScriptFile->SetToolTip(filedlg.GetFilename());
        }
    }
    void OnClearScriptFile( wxMouseEvent& event )
    {
        m_ScriptFile->SetLabel(wxT(""));
        m_ScriptFile->SetToolTip(wxT("左键选择，右键清除"));
    }
    void OnEditScriptFile( wxCommandEvent& event )
    {
        wxString path = m_ScriptFile->GetLabel();
        if(!path.IsEmpty()) path = wxT("script\\common\\") + path;
        OpenFile(path);
    }
    void OnWavFile( wxCommandEvent& event )
    {
        wxFileDialog filedlg(this,
                             wxT("选择声音文件"),
                             exepath + wxT("sound\\"),
                             wxT(""),
                             wxT("WAV文件(*.wav)|*.wav"),
                             wxFD_OPEN | wxFD_FILE_MUST_EXIST);

        if(filedlg.ShowModal() == wxID_OK)
        {
            m_WavFile->SetLabel(filedlg.GetFilename());
            m_WavFile->SetToolTip(filedlg.GetFilename());
        }
    }
    void OnClearWavFile( wxMouseEvent& event )
    {
        m_WavFile->SetLabel(wxT(""));
        m_WavFile->SetToolTip(wxT("左键选择，右键清除"));
    }
    void OnOpenWavFile( wxCommandEvent& event )
    {
        wxString path = m_WavFile->GetLabel();
        if(!path.IsEmpty()) path = wxT("sound\\") + path;
        OpenFile(path);
    }
    void OnOk( wxCommandEvent& event )
    {
        EndModal(wxID_OK);
    }
    void OnCancle( wxCommandEvent& event )
    {
        EndModal(wxID_CANCEL);
    }
    void OnSaveObjIniFile( wxCommandEvent& event )
    {
        wxFileDialog filedlg(this,
                             wxT("保存INI"),
                             exepath + wxT("ini\\obj\\"),
                             wxT(""),
                             wxT("INI文件(*.ini)|*.ini"),
                             wxFD_SAVE | wxFD_OVERWRITE_PROMPT);

        if(filedlg.ShowModal() == wxID_OK)
        {
            ObjItem item;
            InitObjItem(&item);
            AssignToObjItem(&item);
            item.MapX = m_item->MapX;
            item.MapY = m_item->MapY;
            SaveIni(filedlg.GetPath(), NULL, &item);
        }
    }

    void OpenFile(wxString relatePath)
    {
        if(relatePath.IsEmpty())
        {
            wxMessageBox(wxT("请先选择文件"), wxT("消息"));
            return;
        }
        if(wxFileName::FileExists(exepath + relatePath))
        {
            wxExecute(wxT("explorer \"") + exepath + relatePath + wxT("\""));
        }
        else
        {
            wxMessageBox(relatePath + wxT("  文件不存在"), wxT("消息"));
            return;
        }
    }

    wxString exepath, m_mapName;
    AsfImgList *m_ObjAsfImgList;
    ObjItem *m_item;
};

#endif // MAPTOOL_H
