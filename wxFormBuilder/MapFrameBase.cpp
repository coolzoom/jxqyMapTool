///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MapFrameBase.h"

///////////////////////////////////////////////////////////////////////////

MapFrameBase::MapFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	m_toolBar1 = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxTB_HORIZONTAL ); 
	m_tool7 = m_toolBar1->AddTool( ID_OPENMAP, wxT("tool"), wxICON( OPENFILE ), wxNullBitmap, wxITEM_NORMAL, wxT("打开地图..."), wxT("CTRL+O"), NULL ); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_Layer1 = new wxCheckBox( m_toolBar1, wxID_ANY, wxT("图层1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Layer1->SetValue(true); 
	m_toolBar1->AddControl( m_Layer1 );
	m_Layer2 = new wxCheckBox( m_toolBar1, wxID_ANY, wxT("图层2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Layer2->SetValue(true); 
	m_toolBar1->AddControl( m_Layer2 );
	m_Layer3 = new wxCheckBox( m_toolBar1, wxID_ANY, wxT("图层3"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Layer3->SetValue(true); 
	m_toolBar1->AddControl( m_Layer3 );
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_Trap = new wxCheckBox( m_toolBar1, wxID_ANY, wxT("陷阱"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar1->AddControl( m_Trap );
	m_Barrer = new wxCheckBox( m_toolBar1, wxID_ANY, wxT("障碍"), wxDefaultPosition, wxDefaultSize, 0 );
	m_toolBar1->AddControl( m_Barrer );
	m_toolBar1->AddSeparator(); 
	
	m_toolBar1->AddSeparator(); 
	
	m_LayerTransparent = new wxCheckBox( m_toolBar1, wxID_ANY, wxT("图层透明"), wxDefaultPosition, wxDefaultSize, 0 );
	m_LayerTransparent->SetToolTip( wxT("使图层透明的地方透明，而不是黑色") );
	
	m_toolBar1->AddControl( m_LayerTransparent );
	m_toolBar1->Realize(); 
	
	bSizer2->Add( m_toolBar1, 1, wxEXPAND, 5 );
	
	m_ToolBarEdit = new wxToolBar( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxTB_HORIZONTAL ); 
	m_tool5 = m_ToolBarEdit->AddTool( ID_NPCMODE, wxT("tool"), wxICON( NPC ), wxNullBitmap, wxITEM_CHECK, wxT("人物编辑模式"), wxEmptyString, NULL ); 
	
	m_tool6 = m_ToolBarEdit->AddTool( ID_OBJMODE, wxT("tool"), wxICON( OBJ ), wxNullBitmap, wxITEM_CHECK, wxT("物品编辑模式"), wxEmptyString, NULL ); 
	
	m_ToolBarEdit->AddSeparator(); 
	
	m_ToolPlace = m_ToolBarEdit->AddTool( ID_TOOLPLACE, wxT("tool"), wxICON( PLACE ), wxNullBitmap, wxITEM_CHECK, wxT("放置模式"), wxEmptyString, NULL ); 
	
	m_ToolDelete = m_ToolBarEdit->AddTool( ID_TOOLDELETE, wxT("tool"), wxICON( DELETE ), wxNullBitmap, wxITEM_CHECK, wxT("删除模式"), wxEmptyString, NULL ); 
	
	m_ToolEditAttribute = m_ToolBarEdit->AddTool( ID_EDITATTRIBUTE, wxT("tool"), wxICON( ATTRIBUTE ), wxNullBitmap, wxITEM_CHECK, wxT("属性设置模式"), wxEmptyString, NULL ); 
	
	m_tool4 = m_ToolBarEdit->AddTool( ID_TOOLMOVE, wxT("tool"), wxICON( MOVE ), wxNullBitmap, wxITEM_CHECK, wxT("移动模式"), wxEmptyString, NULL ); 
	
	m_ToolBarEdit->AddSeparator(); 
	
	m_tool8 = m_ToolBarEdit->AddTool( ID_SHOWNPC, wxT("tool"), wxICON( VIEWNPC ), wxNullBitmap, wxITEM_CHECK, wxT("显示人物"), wxEmptyString, NULL ); 
	
	m_tool9 = m_ToolBarEdit->AddTool( ID_SHOWOBJ, wxT("tool"), wxICON( VIEWOBJ ), wxNullBitmap, wxITEM_CHECK, wxT("显示物品"), wxEmptyString, NULL ); 
	
	m_ToolBarEdit->Realize(); 
	
	bSizer2->Add( m_ToolBarEdit, 0, wxEXPAND, 5 );
	
	
	bSizer1->Add( bSizer2, 0, wxEXPAND, 5 );
	
	m_splitter2 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
	m_splitter2->SetSashGravity( 1 );
	m_splitter2->Connect( wxEVT_IDLE, wxIdleEventHandler( MapFrameBase::m_splitter2OnIdle ), NULL, this );
	m_splitter2->SetMinimumPaneSize( 1 );
	
	m_MapView = new wxPanel( m_splitter2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel10 = new wxPanel( m_splitter2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	m_splitter4 = new wxSplitterWindow( m_panel10, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
	m_splitter4->Connect( wxEVT_IDLE, wxIdleEventHandler( MapFrameBase::m_splitter4OnIdle ), NULL, this );
	m_splitter4->SetMinimumPaneSize( 1 );
	
	m_MapControl = new wxPanel( m_splitter4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel12 = new wxPanel( m_splitter4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );
	
	m_notebook1 = new wxNotebook( m_panel12, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel5 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxVERTICAL );
	
	m_NpcList = new wxListCtrl( m_panel5, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT|wxLC_SINGLE_SEL );
	bSizer20->Add( m_NpcList, 1, wxALL|wxEXPAND, 5 );
	
	
	m_panel5->SetSizer( bSizer20 );
	m_panel5->Layout();
	bSizer20->Fit( m_panel5 );
	m_notebook1->AddPage( m_panel5, wxT("NPC"), true );
	m_panel6 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );
	
	m_ObjList = new wxListCtrl( m_panel6, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT|wxLC_SINGLE_SEL );
	bSizer21->Add( m_ObjList, 1, wxALL|wxEXPAND, 5 );
	
	
	m_panel6->SetSizer( bSizer21 );
	m_panel6->Layout();
	bSizer21->Fit( m_panel6 );
	m_notebook1->AddPage( m_panel6, wxT("OBJ"), false );
	
	bSizer19->Add( m_notebook1, 1, wxEXPAND | wxALL, 5 );
	
	
	m_panel12->SetSizer( bSizer19 );
	m_panel12->Layout();
	bSizer19->Fit( m_panel12 );
	m_splitter4->SplitHorizontally( m_MapControl, m_panel12, 100 );
	bSizer6->Add( m_splitter4, 1, wxEXPAND, 5 );
	
	
	m_panel10->SetSizer( bSizer6 );
	m_panel10->Layout();
	bSizer6->Fit( m_panel10 );
	m_splitter2->SplitVertically( m_MapView, m_panel10, -200 );
	bSizer1->Add( m_splitter2, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	m_StatusBar = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	m_menubar3 = new wxMenuBar( 0 );
	m_MenuFile = new wxMenu();
	wxMenuItem* m_menuItemOpenMap;
	m_menuItemOpenMap = new wxMenuItem( m_MenuFile, wxID_ANY, wxString( wxT("打开地图...") ) + wxT('\t') + wxT("CTRL+O"), wxEmptyString, wxITEM_NORMAL );
	m_MenuFile->Append( m_menuItemOpenMap );
	
	wxMenuItem* m_menuItemSavePng;
	m_menuItemSavePng = new wxMenuItem( m_MenuFile, wxID_ANY, wxString( wxT("存为PNG...") ) , wxEmptyString, wxITEM_NORMAL );
	m_MenuFile->Append( m_menuItemSavePng );
	
	m_MenuFile->AppendSeparator();
	
	wxMenuItem* m_menuItemUP;
	m_menuItemUP = new wxMenuItem( m_MenuFile, ID_MAPUP, wxString( wxT("地图上移\tUp") ) , wxEmptyString, wxITEM_NORMAL );
	m_MenuFile->Append( m_menuItemUP );
	
	wxMenuItem* m_menuItemDOWN;
	m_menuItemDOWN = new wxMenuItem( m_MenuFile, ID_MAPDOWN, wxString( wxT("地图下移\tDown") ) , wxEmptyString, wxITEM_NORMAL );
	m_MenuFile->Append( m_menuItemDOWN );
	
	wxMenuItem* m_menuItemLeft;
	m_menuItemLeft = new wxMenuItem( m_MenuFile, ID_MAPLEFT, wxString( wxT("地图左移\tLeft") ) , wxEmptyString, wxITEM_NORMAL );
	m_MenuFile->Append( m_menuItemLeft );
	
	wxMenuItem* m_menuItemRIGHT;
	m_menuItemRIGHT = new wxMenuItem( m_MenuFile, ID_MAPRIGHT, wxString( wxT("地图右移\tRight") ) , wxEmptyString, wxITEM_NORMAL );
	m_MenuFile->Append( m_menuItemRIGHT );
	
	m_menubar3->Append( m_MenuFile, wxT("地图(MAP)") ); 
	
	m_MenuCharacter = new wxMenu();
	wxMenuItem* m_menuItem5;
	m_menuItem5 = new wxMenuItem( m_MenuCharacter, wxID_ANY, wxString( wxT("加载人物") ) + wxT('\t') + wxT("CTRL+R"), wxT("加载一个人物等待放置"), wxITEM_NORMAL );
	m_MenuCharacter->Append( m_menuItem5 );
	
	wxMenuItem* m_menuItem6;
	m_menuItem6 = new wxMenuItem( m_MenuCharacter, ID_DIRECTION, wxString( wxT("下一方向") ) + wxT('\t') + wxT("Space"), wxT("人物的方向(Dir)"), wxITEM_NORMAL );
	m_MenuCharacter->Append( m_menuItem6 );
	
	m_MenuCharacter->AppendSeparator();
	
	wxMenuItem* m_menuItem8;
	m_menuItem8 = new wxMenuItem( m_MenuCharacter, wxID_ANY, wxString( wxT("导入NPC文件") ) + wxT('\t') + wxT("CTRL+I"), wxEmptyString, wxITEM_NORMAL );
	m_MenuCharacter->Append( m_menuItem8 );
	
	wxMenuItem* m_menuItem7;
	m_menuItem7 = new wxMenuItem( m_MenuCharacter, wxID_ANY, wxString( wxT("导出NPC文件") ) + wxT('\t') + wxT("CTRL+N"), wxEmptyString, wxITEM_NORMAL );
	m_MenuCharacter->Append( m_menuItem7 );
	
	m_MenuCharacter->AppendSeparator();
	
	wxMenuItem* m_menuItem9;
	m_menuItem9 = new wxMenuItem( m_MenuCharacter, wxID_ANY, wxString( wxT("人物数量") ) , wxEmptyString, wxITEM_NORMAL );
	m_MenuCharacter->Append( m_menuItem9 );
	
	wxMenuItem* m_menuItem10;
	m_menuItem10 = new wxMenuItem( m_MenuCharacter, wxID_ANY, wxString( wxT("清空人物") ) , wxT("清空地图上所有NPC"), wxITEM_NORMAL );
	m_MenuCharacter->Append( m_menuItem10 );
	
	m_menubar3->Append( m_MenuCharacter, wxT("人物( NPC )") ); 
	
	m_menu3 = new wxMenu();
	wxMenuItem* m_menuItem11;
	m_menuItem11 = new wxMenuItem( m_menu3, wxID_ANY, wxString( wxT("加载物品") ) + wxT('\t') + wxT("CTRL+W"), wxT("加载一个物品等待放置"), wxITEM_NORMAL );
	m_menu3->Append( m_menuItem11 );
	
	wxMenuItem* m_menuItem12;
	m_menuItem12 = new wxMenuItem( m_menu3, wxID_ANY, wxString( wxT("下一方向") ) + wxT('\t') + wxT("Space"), wxT("物品的方向(Dir)"), wxITEM_NORMAL );
	m_menu3->Append( m_menuItem12 );
	
	m_menu3->AppendSeparator();
	
	wxMenuItem* m_menuItem13;
	m_menuItem13 = new wxMenuItem( m_menu3, wxID_ANY, wxString( wxT("导入OBJ文件") ) + wxT('\t') + wxT("CTRL+L"), wxEmptyString, wxITEM_NORMAL );
	m_menu3->Append( m_menuItem13 );
	
	wxMenuItem* m_menuItem14;
	m_menuItem14 = new wxMenuItem( m_menu3, wxID_ANY, wxString( wxT("导出OBJ文件") ) + wxT('\t') + wxT("CTRL+B"), wxEmptyString, wxITEM_NORMAL );
	m_menu3->Append( m_menuItem14 );
	
	m_menu3->AppendSeparator();
	
	wxMenuItem* m_menuItem15;
	m_menuItem15 = new wxMenuItem( m_menu3, wxID_ANY, wxString( wxT("物品数量") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu3->Append( m_menuItem15 );
	
	wxMenuItem* m_menuItem16;
	m_menuItem16 = new wxMenuItem( m_menu3, wxID_ANY, wxString( wxT("清空物品") ) , wxT("清空地图上所有OBJ"), wxITEM_NORMAL );
	m_menu3->Append( m_menuItem16 );
	
	m_menubar3->Append( m_menu3, wxT("物品(OBJ)") ); 
	
	this->SetMenuBar( m_menubar3 );
	
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( m_tool7->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OpenMap ) );
	m_Layer1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MapFrameBase::OnLayer1 ), NULL, this );
	m_Layer2->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MapFrameBase::OnLayer2 ), NULL, this );
	m_Layer3->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MapFrameBase::OnLayer3 ), NULL, this );
	m_Trap->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MapFrameBase::OnTrap ), NULL, this );
	m_Barrer->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MapFrameBase::OnBarrer ), NULL, this );
	m_LayerTransparent->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MapFrameBase::OnLayerTransparent ), NULL, this );
	this->Connect( m_tool5->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnNpcMode ) );
	this->Connect( m_tool6->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnObjMode ) );
	this->Connect( m_ToolPlace->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnPlaceMode ) );
	this->Connect( m_ToolDelete->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnDeleteMode ) );
	this->Connect( m_ToolEditAttribute->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnEditAttributeMode ) );
	this->Connect( m_tool4->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnMoveMode ) );
	this->Connect( m_tool8->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnShowNpcCheck ) );
	this->Connect( m_tool9->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnShowObjCheck ) );
	m_MapView->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( MapFrameBase::OnMapViewMouseLeftDown ), NULL, this );
	m_MapView->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( MapFrameBase::OnMapViewMouseLeftUp ), NULL, this );
	m_MapView->Connect( wxEVT_MOTION, wxMouseEventHandler( MapFrameBase::OnMouseMove ), NULL, this );
	m_MapView->Connect( wxEVT_PAINT, wxPaintEventHandler( MapFrameBase::OnMapDraw ), NULL, this );
	m_MapControl->Connect( wxEVT_MOTION, wxMouseEventHandler( MapFrameBase::OnMapCtrlMouseMotion ), NULL, this );
	m_MapControl->Connect( wxEVT_PAINT, wxPaintEventHandler( MapFrameBase::OnDrawMapControl ), NULL, this );
	this->Connect( m_menuItemOpenMap->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OpenMap ) );
	this->Connect( m_menuItemSavePng->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::SaveToPNG ) );
	this->Connect( m_menuItemUP->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnMapUp ) );
	this->Connect( m_menuItemDOWN->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnMapDown ) );
	this->Connect( m_menuItemLeft->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnMapLeft ) );
	this->Connect( m_menuItemRIGHT->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnMapRight ) );
	this->Connect( m_menuItem5->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnLoadCharater ) );
	this->Connect( m_menuItem6->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnCharacterDirection ) );
	this->Connect( m_menuItem8->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnImportNpcFile ) );
	this->Connect( m_menuItem7->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnOutputNpcFile ) );
	this->Connect( m_menuItem9->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnShowNpcCounts ) );
	this->Connect( m_menuItem10->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnClearNpc ) );
	this->Connect( m_menuItem11->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnLoadObject ) );
	this->Connect( m_menuItem12->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnObjectDirection ) );
	this->Connect( m_menuItem13->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnImportObjFile ) );
	this->Connect( m_menuItem14->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnOutputObjFile ) );
	this->Connect( m_menuItem15->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnShowObjCount ) );
	this->Connect( m_menuItem16->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnClearObj ) );
}

MapFrameBase::~MapFrameBase()
{
	// Disconnect Events
	this->Disconnect( m_tool7->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OpenMap ) );
	m_Layer1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MapFrameBase::OnLayer1 ), NULL, this );
	m_Layer2->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MapFrameBase::OnLayer2 ), NULL, this );
	m_Layer3->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MapFrameBase::OnLayer3 ), NULL, this );
	m_Trap->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MapFrameBase::OnTrap ), NULL, this );
	m_Barrer->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MapFrameBase::OnBarrer ), NULL, this );
	m_LayerTransparent->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MapFrameBase::OnLayerTransparent ), NULL, this );
	this->Disconnect( m_tool5->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnNpcMode ) );
	this->Disconnect( m_tool6->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnObjMode ) );
	this->Disconnect( m_ToolPlace->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnPlaceMode ) );
	this->Disconnect( m_ToolDelete->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnDeleteMode ) );
	this->Disconnect( m_ToolEditAttribute->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnEditAttributeMode ) );
	this->Disconnect( m_tool4->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnMoveMode ) );
	this->Disconnect( m_tool8->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnShowNpcCheck ) );
	this->Disconnect( m_tool9->GetId(), wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler( MapFrameBase::OnShowObjCheck ) );
	m_MapView->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( MapFrameBase::OnMapViewMouseLeftDown ), NULL, this );
	m_MapView->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( MapFrameBase::OnMapViewMouseLeftUp ), NULL, this );
	m_MapView->Disconnect( wxEVT_MOTION, wxMouseEventHandler( MapFrameBase::OnMouseMove ), NULL, this );
	m_MapView->Disconnect( wxEVT_PAINT, wxPaintEventHandler( MapFrameBase::OnMapDraw ), NULL, this );
	m_MapControl->Disconnect( wxEVT_MOTION, wxMouseEventHandler( MapFrameBase::OnMapCtrlMouseMotion ), NULL, this );
	m_MapControl->Disconnect( wxEVT_PAINT, wxPaintEventHandler( MapFrameBase::OnDrawMapControl ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OpenMap ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::SaveToPNG ) );
	this->Disconnect( ID_MAPUP, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnMapUp ) );
	this->Disconnect( ID_MAPDOWN, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnMapDown ) );
	this->Disconnect( ID_MAPLEFT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnMapLeft ) );
	this->Disconnect( ID_MAPRIGHT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnMapRight ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnLoadCharater ) );
	this->Disconnect( ID_DIRECTION, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnCharacterDirection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnImportNpcFile ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnOutputNpcFile ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnShowNpcCounts ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnClearNpc ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnLoadObject ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnObjectDirection ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnImportObjFile ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnOutputObjFile ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnShowObjCount ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( MapFrameBase::OnClearObj ) );
	
}

NpcItemEditDialogBase::NpcItemEditDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizerTop;
	bSizerTop = new wxBoxSizer( wxHORIZONTAL );
	
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 20, 4, 0, 0 );
	
	m_staticText1 = new wxStaticText( this, wxID_ANY, wxT("姓名------Name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	gSizer1->Add( m_staticText1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Name = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_Name->SetMinSize( wxSize( 110,-1 ) );
	m_Name->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Name, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("闪避------Evade"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	gSizer1->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Evade = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_Evade->SetMinSize( wxSize( 110,-1 ) );
	m_Evade->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Evade, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("类型------Kind"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	gSizer1->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Kind = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	m_Kind->Append( wxT("普通类") );
	m_Kind->Append( wxT("战斗类") );
	m_Kind->Append( wxT("事件类") );
	m_Kind->Append( wxT("地上动物类") );
	m_Kind->Append( wxT("怕人动物类") );
	m_Kind->Append( wxT("飞翔动物类") );
	m_Kind->SetMinSize( wxSize( 110,-1 ) );
	m_Kind->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Kind, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("攻击力----Attack "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	gSizer1->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Attack = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_Attack->SetMinSize( wxSize( 110,-1 ) );
	m_Attack->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Attack, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("关系------Relation"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	gSizer1->Add( m_staticText5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Relation = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	m_Relation->Append( wxT("友好") );
	m_Relation->Append( wxT("敌对") );
	m_Relation->Append( wxT("中立") );
	m_Relation->SetMinSize( wxSize( 110,-1 ) );
	m_Relation->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Relation, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("攻击等级--AttackLevel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	gSizer1->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_AttackLevel = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_AttackLevel->Append( wxT("1") );
	m_AttackLevel->Append( wxT("2") );
	m_AttackLevel->Append( wxT("3") );
	m_AttackLevel->Append( wxT("4") );
	m_AttackLevel->Append( wxT("5") );
	m_AttackLevel->Append( wxT("6") );
	m_AttackLevel->Append( wxT("7") );
	m_AttackLevel->Append( wxT("8") );
	m_AttackLevel->Append( wxT("9") );
	m_AttackLevel->Append( wxT("10") );
	m_AttackLevel->SetMinSize( wxSize( 110,-1 ) );
	m_AttackLevel->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_AttackLevel, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("寻路------PathFinder"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	gSizer1->Add( m_staticText7, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_PathFinder = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_PathFinder->Append( wxT("0") );
	m_PathFinder->Append( wxT("1") );
	m_PathFinder->SetMinSize( wxSize( 110,-1 ) );
	m_PathFinder->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_PathFinder, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("防御------Defend"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	gSizer1->Add( m_staticText8, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Defend = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_Defend->SetMinSize( wxSize( 110,-1 ) );
	m_Defend->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Defend, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("状态------State"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	gSizer1->Add( m_staticText9, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_State = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_State->Append( wxT("0") );
	m_State->SetMinSize( wxSize( 110,-1 ) );
	m_State->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_State, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	m_staticText10->Hide();
	
	gSizer1->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_comboBox10 = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_comboBox10->Hide();
	
	gSizer1->Add( m_comboBox10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("（新剑）--ShowName"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	m_staticText11->SetToolTip( wxT("月影传说中没有，新剑侠情缘中有") );
	
	gSizer1->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_ShowName = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_ShowName->SetMinSize( wxSize( 110,-1 ) );
	m_ShowName->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_ShowName, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("经验------Exp "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	gSizer1->Add( m_staticText12, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Exp = new wxBitmapComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_Exp->SetMinSize( wxSize( 110,-1 ) );
	m_Exp->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Exp, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("视野半径--VisionRadius"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	gSizer1->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_VisionRadius = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_VisionRadius->Append( wxT("10") );
	m_VisionRadius->Append( wxT("15") );
	m_VisionRadius->Append( wxT("20") );
	m_VisionRadius->Append( wxT("25") );
	m_VisionRadius->SetMinSize( wxSize( 110,-1 ) );
	m_VisionRadius->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_VisionRadius, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("升级经验--LevelUpExp"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	gSizer1->Add( m_staticText14, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_LevelUpExp = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_LevelUpExp->Append( wxT("0") );
	m_LevelUpExp->Append( wxT("50") );
	m_LevelUpExp->Append( wxT("100") );
	m_LevelUpExp->Append( wxT("150") );
	m_LevelUpExp->Append( wxT("200") );
	m_LevelUpExp->SetMinSize( wxSize( 110,-1 ) );
	m_LevelUpExp->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_LevelUpExp, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("对话半径--DialogRadius"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	gSizer1->Add( m_staticText15, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_DialogRadius = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_DialogRadius->Append( wxT("1") );
	m_DialogRadius->Append( wxT("2") );
	m_DialogRadius->Append( wxT("3") );
	m_DialogRadius->Append( wxT("4") );
	m_DialogRadius->Append( wxT("5") );
	m_DialogRadius->SetMinSize( wxSize( 110,-1 ) );
	m_DialogRadius->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_DialogRadius, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("等级------Level"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	gSizer1->Add( m_staticText16, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Level = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_Level->Append( wxT("10") );
	m_Level->Append( wxT("20") );
	m_Level->Append( wxT("30") );
	m_Level->Append( wxT("40") );
	m_Level->Append( wxT("50") );
	m_Level->Append( wxT("60") );
	m_Level->Append( wxT("70") );
	m_Level->SetMinSize( wxSize( 110,-1 ) );
	m_Level->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Level, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText17 = new wxStaticText( this, wxID_ANY, wxT("攻击半径--AttackRadius"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	gSizer1->Add( m_staticText17, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_AttackRadius = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_AttackRadius->Append( wxT("1") );
	m_AttackRadius->Append( wxT("5") );
	m_AttackRadius->Append( wxT("10") );
	m_AttackRadius->Append( wxT("15") );
	m_AttackRadius->Append( wxT("20") );
	m_AttackRadius->SetMinSize( wxSize( 110,-1 ) );
	m_AttackRadius->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_AttackRadius, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText18 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18->Wrap( -1 );
	m_staticText18->Hide();
	
	gSizer1->Add( m_staticText18, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_comboBox17 = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_comboBox17->Hide();
	
	gSizer1->Add( m_comboBox17, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("方向------Dir "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	gSizer1->Add( m_staticText19, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Dir = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	m_Dir->Append( wxT("0") );
	m_Dir->Append( wxT("1") );
	m_Dir->Append( wxT("2") );
	m_Dir->Append( wxT("3") );
	m_Dir->Append( wxT("4") );
	m_Dir->Append( wxT("5") );
	m_Dir->Append( wxT("6") );
	m_Dir->Append( wxT("7") );
	m_Dir->SetMinSize( wxSize( 110,-1 ) );
	m_Dir->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Dir, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("生命------Life"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	gSizer1->Add( m_staticText20, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Life = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_Life->SetMinSize( wxSize( 110,-1 ) );
	m_Life->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Life, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("亮度------Lum"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	gSizer1->Add( m_staticText21, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Lum = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_Lum->SetMinSize( wxSize( 110,-1 ) );
	m_Lum->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Lum, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText22 = new wxStaticText( this, wxID_ANY, wxT("最大生命--LifeMax"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	gSizer1->Add( m_staticText22, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_LifeMax = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_LifeMax->SetMinSize( wxSize( 110,-1 ) );
	m_LifeMax->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_LifeMax, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("动作------Action"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	gSizer1->Add( m_staticText23, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Action = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	m_Action->Append( wxT("站立") );
	m_Action->Append( wxT("走动（随机）") );
	m_Action->Append( wxT("走动（循环）") );
	m_Action->SetMinSize( wxSize( 110,-1 ) );
	m_Action->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Action, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText24 = new wxStaticText( this, wxID_ANY, wxT("体力------Thew"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	gSizer1->Add( m_staticText24, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Thew = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_Thew->SetMinSize( wxSize( 110,-1 ) );
	m_Thew->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Thew, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("行走速度--WalkSpeed"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	gSizer1->Add( m_staticText25, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_WalkSpeed = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_WalkSpeed->Append( wxT("1") );
	m_WalkSpeed->Append( wxT("2") );
	m_WalkSpeed->Append( wxT("3") );
	m_WalkSpeed->Append( wxT("4") );
	m_WalkSpeed->Append( wxT("5") );
	m_WalkSpeed->SetMinSize( wxSize( 110,-1 ) );
	m_WalkSpeed->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_WalkSpeed, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText26 = new wxStaticText( this, wxID_ANY, wxT("最大体力--ThewMax"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	gSizer1->Add( m_staticText26, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_ThewMax = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_ThewMax->SetMinSize( wxSize( 110,-1 ) );
	m_ThewMax->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_ThewMax, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText27 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	m_staticText27->Hide();
	
	gSizer1->Add( m_staticText27, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_comboBox26 = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_comboBox26->Hide();
	
	gSizer1->Add( m_comboBox26, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText28 = new wxStaticText( this, wxID_ANY, wxT("内力------Mana"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	gSizer1->Add( m_staticText28, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Mana = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_Mana->SetMinSize( wxSize( 110,-1 ) );
	m_Mana->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Mana, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText29 = new wxStaticText( this, wxID_ANY, wxT("人物图像--NpcIni"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	gSizer1->Add( m_staticText29, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	m_NpcIni = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_NpcIni->SetToolTip( wxT("选择...") );
	
	bSizer5->Add( m_NpcIni, 2, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_NpcIniEdit = new wxButton( this, wxID_ANY, wxT("打开"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer5->Add( m_NpcIniEdit, 0, wxALL, 5 );
	
	
	gSizer1->Add( bSizer5, 1, wxEXPAND, 5 );
	
	m_staticText30 = new wxStaticText( this, wxID_ANY, wxT("最大内力--ManaMax"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	gSizer1->Add( m_staticText30, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_ManaMax = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_ManaMax->SetMinSize( wxSize( 110,-1 ) );
	m_ManaMax->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_ManaMax, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText31 = new wxStaticText( this, wxID_ANY, wxT("尸体图像--BodyIni"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	gSizer1->Add( m_staticText31, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_BodyIni = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_BodyIni->SetToolTip( wxT("左键选择，右键清除") );
	
	bSizer6->Add( m_BodyIni, 2, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_BodyIniEdit = new wxButton( this, wxID_ANY, wxT("打开"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer6->Add( m_BodyIniEdit, 0, wxALL, 5 );
	
	
	gSizer1->Add( bSizer6, 1, wxEXPAND, 5 );
	
	m_staticText32 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	m_staticText32->Hide();
	
	gSizer1->Add( m_staticText32, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_comboBox31 = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_comboBox31->Hide();
	
	gSizer1->Add( m_comboBox31, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText33 = new wxStaticText( this, wxID_ANY, wxT("攻击------FlyIni"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	gSizer1->Add( m_staticText33, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	m_FlyIni = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_FlyIni->SetToolTip( wxT("左键选择，右键清除") );
	
	bSizer7->Add( m_FlyIni, 2, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_FlyIniEdit = new wxButton( this, wxID_ANY, wxT("打开"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer7->Add( m_FlyIniEdit, 0, wxALL, 5 );
	
	
	gSizer1->Add( bSizer7, 1, wxEXPAND, 5 );
	
	m_staticText34 = new wxStaticText( this, wxID_ANY, wxT("ExpBonus"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText34->Wrap( -1 );
	gSizer1->Add( m_staticText34, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_ExpBonus = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_ExpBonus->SetMinSize( wxSize( 110,-1 ) );
	m_ExpBonus->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_ExpBonus, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("攻击2-----FlyIni2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	gSizer1->Add( m_staticText35, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	m_FlyIni2 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_FlyIni2->SetToolTip( wxT("左键选择，右键清除") );
	
	bSizer8->Add( m_FlyIni2, 2, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_FlyIni2Edit = new wxButton( this, wxID_ANY, wxT("打开"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer8->Add( m_FlyIni2Edit, 0, wxALL, 5 );
	
	
	gSizer1->Add( bSizer8, 1, wxEXPAND, 5 );
	
	m_staticText36 = new wxStaticText( this, wxID_ANY, wxT("Idle"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText36->Wrap( -1 );
	gSizer1->Add( m_staticText36, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Idle = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_Idle->SetMinSize( wxSize( 110,-1 ) );
	m_Idle->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_Idle, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText41 = new wxStaticText( this, wxID_ANY, wxT("对话脚本--ScriptFile"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	gSizer1->Add( m_staticText41, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	m_ScriptFile = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_ScriptFile->SetToolTip( wxT("左键选择，右键清除") );
	
	bSizer9->Add( m_ScriptFile, 2, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_ScriptFileEdit = new wxButton( this, wxID_ANY, wxT("打开"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer9->Add( m_ScriptFileEdit, 0, wxALL, 5 );
	
	
	gSizer1->Add( bSizer9, 1, wxEXPAND, 5 );
	
	m_staticText42 = new wxStaticText( this, wxID_ANY, wxT("FixedPos"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText42->Wrap( -1 );
	gSizer1->Add( m_staticText42, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_FixedPos = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_FixedPos->SetMinSize( wxSize( 110,-1 ) );
	m_FixedPos->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer1->Add( m_FixedPos, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText43 = new wxStaticText( this, wxID_ANY, wxT("死亡脚本--DeathScript"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43->Wrap( -1 );
	gSizer1->Add( m_staticText43, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	m_DeathScript = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_DeathScript->SetToolTip( wxT("左键选择，右键清除") );
	
	bSizer10->Add( m_DeathScript, 2, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_DeathScriptEdit = new wxButton( this, wxID_ANY, wxT("打开"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer10->Add( m_DeathScriptEdit, 0, wxALL, 5 );
	
	
	gSizer1->Add( bSizer10, 1, wxEXPAND, 5 );
	
	
	bSizerTop->Add( gSizer1, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	m_button26 = new wxButton( this, wxID_ANY, wxT("保存..."), wxDefaultPosition, wxDefaultSize, 0 );
	m_button26->SetToolTip( wxT("存为INI文件") );
	
	bSizer11->Add( m_button26, 0, wxALL, 5 );
	
	
	bSizer11->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_OK = new wxButton( this, wxID_ANY, wxT("确定"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_OK, 0, wxALL, 5 );
	
	m_Cancle = new wxButton( this, wxID_ANY, wxT("取消"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_Cancle, 0, wxALL, 5 );
	
	
	bSizerTop->Add( bSizer11, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizerTop );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_NpcIni->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnNpcIni ), NULL, this );
	m_NpcIniEdit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnNpcIniEdit ), NULL, this );
	m_BodyIni->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnBodyIni ), NULL, this );
	m_BodyIni->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( NpcItemEditDialogBase::OnBodyIniClear ), NULL, this );
	m_BodyIniEdit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnBodyIniEdit ), NULL, this );
	m_FlyIni->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnFlyIni ), NULL, this );
	m_FlyIni->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( NpcItemEditDialogBase::OnFlyIniClear ), NULL, this );
	m_FlyIniEdit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnFlyIniEdit ), NULL, this );
	m_FlyIni2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnFlyIni2 ), NULL, this );
	m_FlyIni2->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( NpcItemEditDialogBase::OnFlyIni2Clear ), NULL, this );
	m_FlyIni2Edit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnFlyIni2Edit ), NULL, this );
	m_ScriptFile->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnScriptFile ), NULL, this );
	m_ScriptFile->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( NpcItemEditDialogBase::OnScriptFileClear ), NULL, this );
	m_ScriptFileEdit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnScriptFileEdit ), NULL, this );
	m_DeathScript->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnDeathScript ), NULL, this );
	m_DeathScript->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( NpcItemEditDialogBase::OnDeathScriptClear ), NULL, this );
	m_DeathScriptEdit->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnDeathScriptEdit ), NULL, this );
	m_button26->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnSaveNpcIniFile ), NULL, this );
	m_OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnOk ), NULL, this );
	m_Cancle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnCancle ), NULL, this );
}

NpcItemEditDialogBase::~NpcItemEditDialogBase()
{
	// Disconnect Events
	m_NpcIni->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnNpcIni ), NULL, this );
	m_NpcIniEdit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnNpcIniEdit ), NULL, this );
	m_BodyIni->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnBodyIni ), NULL, this );
	m_BodyIni->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( NpcItemEditDialogBase::OnBodyIniClear ), NULL, this );
	m_BodyIniEdit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnBodyIniEdit ), NULL, this );
	m_FlyIni->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnFlyIni ), NULL, this );
	m_FlyIni->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( NpcItemEditDialogBase::OnFlyIniClear ), NULL, this );
	m_FlyIniEdit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnFlyIniEdit ), NULL, this );
	m_FlyIni2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnFlyIni2 ), NULL, this );
	m_FlyIni2->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( NpcItemEditDialogBase::OnFlyIni2Clear ), NULL, this );
	m_FlyIni2Edit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnFlyIni2Edit ), NULL, this );
	m_ScriptFile->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnScriptFile ), NULL, this );
	m_ScriptFile->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( NpcItemEditDialogBase::OnScriptFileClear ), NULL, this );
	m_ScriptFileEdit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnScriptFileEdit ), NULL, this );
	m_DeathScript->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnDeathScript ), NULL, this );
	m_DeathScript->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( NpcItemEditDialogBase::OnDeathScriptClear ), NULL, this );
	m_DeathScriptEdit->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnDeathScriptEdit ), NULL, this );
	m_button26->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnSaveNpcIniFile ), NULL, this );
	m_OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnOk ), NULL, this );
	m_Cancle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( NpcItemEditDialogBase::OnCancle ), NULL, this );
	
}

ObjItemEditDialogBase::ObjItemEditDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );
	
	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 0, 2, 0, 0 );
	
	m_staticText40 = new wxStaticText( this, wxID_ANY, wxT("名称--------ObjName"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText40->Wrap( -1 );
	gSizer2->Add( m_staticText40, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_ObjName = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_ObjName->SetMinSize( wxSize( 110,-1 ) );
	m_ObjName->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer2->Add( m_ObjName, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText41 = new wxStaticText( this, wxID_ANY, wxT("类型--------Kind"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41->Wrap( -1 );
	gSizer2->Add( m_staticText41, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Kind = new wxComboBox( this, wxID_ANY, wxT("植物和装饰类（新剑仅装饰类）"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	m_Kind->Append( wxT("植物和装饰类（新剑仅装饰类）") );
	m_Kind->Append( wxT("宝箱和动画类（新剑还包括植物类）") );
	m_Kind->Append( wxT("尸体类") );
	m_Kind->Append( wxT("循环音效") );
	m_Kind->Append( wxT("随机音效") );
	m_Kind->Append( wxT("门类") );
	m_Kind->SetToolTip( wxT("0-植物和装饰类（新剑仅装饰类）\n1-宝箱和动画类（新剑还包括植物类）\n2-尸体类\n3-循环音效\n4-随机音效\n5-门类") );
	m_Kind->SetMinSize( wxSize( 110,-1 ) );
	m_Kind->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer2->Add( m_Kind, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText42 = new wxStaticText( this, wxID_ANY, wxT("方向--------Dir"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText42->Wrap( -1 );
	gSizer2->Add( m_staticText42, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Dir = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	m_Dir->Append( wxT("0") );
	m_Dir->Append( wxT("1") );
	m_Dir->Append( wxT("2") );
	m_Dir->Append( wxT("3") );
	m_Dir->Append( wxT("4") );
	m_Dir->Append( wxT("5") );
	m_Dir->Append( wxT("6") );
	m_Dir->Append( wxT("7") );
	m_Dir->SetMinSize( wxSize( 110,-1 ) );
	m_Dir->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer2->Add( m_Dir, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText43 = new wxStaticText( this, wxID_ANY, wxT("伤害--------Damage"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43->Wrap( -1 );
	gSizer2->Add( m_staticText43, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Damage = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_Damage->SetMinSize( wxSize( 110,-1 ) );
	m_Damage->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer2->Add( m_Damage, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText44 = new wxStaticText( this, wxID_ANY, wxT("帧----------Frame"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText44->Wrap( -1 );
	gSizer2->Add( m_staticText44, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Frame = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_Frame->SetMinSize( wxSize( 110,-1 ) );
	m_Frame->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer2->Add( m_Frame, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText45 = new wxStaticText( this, wxID_ANY, wxT("高----------Height"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText45->Wrap( -1 );
	gSizer2->Add( m_staticText45, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Height = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_Height->SetMinSize( wxSize( 110,-1 ) );
	m_Height->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer2->Add( m_Height, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText52 = new wxStaticText( this, wxID_ANY, wxT("亮度--------Lum"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText52->Wrap( -1 );
	gSizer2->Add( m_staticText52, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Lum = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_Lum->SetMinSize( wxSize( 110,-1 ) );
	m_Lum->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer2->Add( m_Lum, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer13->Add( gSizer2, 1, wxEXPAND, 5 );
	
	
	bSizer12->Add( bSizer13, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );
	
	wxGridSizer* gSizer3;
	gSizer3 = new wxGridSizer( 0, 2, 0, 0 );
	
	m_staticText46 = new wxStaticText( this, wxID_ANY, wxT("物体图像----ObjFile"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText46->Wrap( -1 );
	gSizer3->Add( m_staticText46, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );
	
	m_ObjFile = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_ObjFile->SetToolTip( wxT("选择...") );
	
	bSizer17->Add( m_ObjFile, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_button22 = new wxButton( this, wxID_ANY, wxT("打开"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer17->Add( m_button22, 0, wxALL, 5 );
	
	
	gSizer3->Add( bSizer17, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText47 = new wxStaticText( this, wxID_ANY, wxT("脚本文件----ScriptFile"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	gSizer3->Add( m_staticText47, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );
	
	m_ScriptFile = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_ScriptFile->SetToolTip( wxT("左键选择，右键清除") );
	
	bSizer18->Add( m_ScriptFile, 1, wxALL, 5 );
	
	m_button23 = new wxButton( this, wxID_ANY, wxT("打开"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer18->Add( m_button23, 0, wxALL, 5 );
	
	
	gSizer3->Add( bSizer18, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText48 = new wxStaticText( this, wxID_ANY, wxT("声音文件----WavFile"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText48->Wrap( -1 );
	gSizer3->Add( m_staticText48, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );
	
	m_WavFile = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_WavFile->SetToolTip( wxT("左键选择，右键清除") );
	
	bSizer19->Add( m_WavFile, 1, wxALL, 5 );
	
	m_button24 = new wxButton( this, wxID_ANY, wxT("打开"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer19->Add( m_button24, 0, wxALL, 5 );
	
	
	gSizer3->Add( bSizer19, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText49 = new wxStaticText( this, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	m_staticText49->Hide();
	
	gSizer3->Add( m_staticText49, 0, wxALL, 5 );
	
	m_comboBox41 = new wxComboBox( this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_comboBox41->Hide();
	
	gSizer3->Add( m_comboBox41, 0, wxALL, 5 );
	
	m_staticText50 = new wxStaticText( this, wxID_ANY, wxT("右偏移------OffX"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText50->Wrap( -1 );
	gSizer3->Add( m_staticText50, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_OffX = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_OffX->SetMinSize( wxSize( 110,-1 ) );
	m_OffX->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer3->Add( m_OffX, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText51 = new wxStaticText( this, wxID_ANY, wxT("下偏移------OffY"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText51->Wrap( -1 );
	gSizer3->Add( m_staticText51, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_OffY = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	m_OffY->SetMinSize( wxSize( 110,-1 ) );
	m_OffY->SetMaxSize( wxSize( 110,-1 ) );
	
	gSizer3->Add( m_OffY, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer15->Add( gSizer3, 1, wxEXPAND, 5 );
	
	
	bSizer12->Add( bSizer15, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );
	
	m_button25 = new wxButton( this, wxID_ANY, wxT("保存..."), wxDefaultPosition, wxDefaultSize, 0 );
	m_button25->SetToolTip( wxT("存为INI文件") );
	
	bSizer16->Add( m_button25, 0, wxALL, 5 );
	
	
	bSizer16->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_OK = new wxButton( this, wxID_ANY, wxT("确定"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( m_OK, 0, wxALL, 5 );
	
	m_Cancel = new wxButton( this, wxID_ANY, wxT("取消"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer16->Add( m_Cancel, 0, wxALL, 5 );
	
	
	bSizer12->Add( bSizer16, 0, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer12 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_ObjFile->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnObjFile ), NULL, this );
	m_button22->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnEditObjFile ), NULL, this );
	m_ScriptFile->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnScriptFile ), NULL, this );
	m_ScriptFile->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ObjItemEditDialogBase::OnClearScriptFile ), NULL, this );
	m_button23->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnEditScriptFile ), NULL, this );
	m_WavFile->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnWavFile ), NULL, this );
	m_WavFile->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ObjItemEditDialogBase::OnClearWavFile ), NULL, this );
	m_button24->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnOpenWavFile ), NULL, this );
	m_button25->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnSaveObjIniFile ), NULL, this );
	m_OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnOk ), NULL, this );
	m_Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnCancle ), NULL, this );
}

ObjItemEditDialogBase::~ObjItemEditDialogBase()
{
	// Disconnect Events
	m_ObjFile->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnObjFile ), NULL, this );
	m_button22->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnEditObjFile ), NULL, this );
	m_ScriptFile->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnScriptFile ), NULL, this );
	m_ScriptFile->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ObjItemEditDialogBase::OnClearScriptFile ), NULL, this );
	m_button23->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnEditScriptFile ), NULL, this );
	m_WavFile->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnWavFile ), NULL, this );
	m_WavFile->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ObjItemEditDialogBase::OnClearWavFile ), NULL, this );
	m_button24->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnOpenWavFile ), NULL, this );
	m_button25->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnSaveObjIniFile ), NULL, this );
	m_OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnOk ), NULL, this );
	m_Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ObjItemEditDialogBase::OnCancle ), NULL, this );
	
}
