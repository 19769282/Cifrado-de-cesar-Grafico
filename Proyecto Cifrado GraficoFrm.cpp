///-----------------------------------------------------------------
///
/// @file      Proyecto Cifrado GraficoFrm.cpp
/// @author    LuisMiguel
/// Created:   09/05/2017 18:30:47
/// @section   DESCRIPTION
///            Proyecto_Cifrado_GraficoFrm class implementation
///
///------------------------------------------------------------------

#include "Proyecto Cifrado GraficoFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Proyecto_Cifrado_GraficoFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Proyecto_Cifrado_GraficoFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(Proyecto_Cifrado_GraficoFrm::OnClose)
	EVT_MENU(wxID_NEW, Proyecto_Cifrado_GraficoFrm::WxnewClick)
	EVT_MENU(wxID_OPEN, Proyecto_Cifrado_GraficoFrm::WxopenClick)
	EVT_MENU(wxID_SAVE, Proyecto_Cifrado_GraficoFrm::WxsaveClick)
	EVT_MENU(wxID_SAVEAS, Proyecto_Cifrado_GraficoFrm::WxsaveasClick)
	EVT_MENU(wxID_EXIT, Proyecto_Cifrado_GraficoFrm::WxexitClick)
	EVT_BUTTON(ID_WXBUTTON1,Proyecto_Cifrado_GraficoFrm::WxButton1Click)
	EVT_CHECKBOX(ID_WXCHECKBOX2,Proyecto_Cifrado_GraficoFrm::WxCheckBox2Click)
	EVT_CHECKBOX(ID_WXCHECKBOX1,Proyecto_Cifrado_GraficoFrm::WxCheckBox1Click)
END_EVENT_TABLE()
////Event Table End

Proyecto_Cifrado_GraficoFrm::Proyecto_Cifrado_GraficoFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

Proyecto_Cifrado_GraficoFrm::~Proyecto_Cifrado_GraficoFrm()
{
}

void Proyecto_Cifrado_GraficoFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(-10, 0), wxSize(552, 378));
	WxPanel1->SetBackgroundColour(wxColour(128,255,128));

	WxCheckBox1 = new wxCheckBox(WxPanel1, ID_WXCHECKBOX1, _("Codificar"), wxPoint(22, 91), wxSize(97, 17), 0, wxDefaultValidator, _("WxCheckBox1"));

	WxCheckBox2 = new wxCheckBox(WxPanel1, ID_WXCHECKBOX2, _("Decodificar"), wxPoint(149, 88), wxSize(97, 17), 0, wxDefaultValidator, _("WxCheckBox2"));

	WxEdit1 = new wxTextCtrl(WxPanel1, ID_WXEDIT1, _(""), wxPoint(122, 57), wxSize(121, 19), 0, wxTextValidator(wxFILTER_NUMERIC, NULL), _("WxEdit1"));

	WxButton1 = new wxButton(WxPanel1, ID_WXBUTTON1, _("Accion"), wxPoint(319, 33), wxSize(108, 50), 0, wxDefaultValidator, _("WxButton1"));
	WxButton1->Enable(false);

	WxMemo1 = new wxTextCtrl(WxPanel1, ID_WXMEMO1, wxEmptyString, wxPoint(34, 166), wxSize(166, 175), wxTE_MULTILINE, wxDefaultValidator, _("WxMemo1"));
	WxMemo1->SetMaxLength(0);
	WxMemo1->SetFocus();
	WxMemo1->SetInsertionPointEnd();

	WxMemo2 = new wxTextCtrl(WxPanel1, ID_WXMEMO2, wxEmptyString, wxPoint(239, 167), wxSize(166, 175), wxTE_MULTILINE, wxDefaultValidator, _("WxMemo2"));
	WxMemo2->SetMaxLength(0);
	WxMemo2->SetFocus();
	WxMemo2->SetInsertionPointEnd();

	WxStaticText1 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT1, _("Nro de Cifrado:"), wxPoint(28, 57), wxDefaultSize, 0, _("WxStaticText1"));

	WxStaticText2 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT2, _("Entrada De Texto a Codificar"), wxPoint(31, 136), wxDefaultSize, 0, _("WxStaticText2"));

	WxStaticText3 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT3, _("Entrada de Texto a Decodificar"), wxPoint(244, 136), wxDefaultSize, 0, _("WxStaticText3"));

	WxStaticText4 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT4, _("Codigo Cesar"), wxPoint(172, 15), wxDefaultSize, 0, _("WxStaticText4"));
	WxStaticText4->SetFont(wxFont(14, wxSWISS, wxNORMAL, wxNORMAL, false));

	WxMenuBar1 = new wxMenuBar();
	wxMenu *wxID_FILE_Mnu_Obj = new wxMenu();
	wxID_FILE_Mnu_Obj->Append(wxID_NEW, _("Nuevo"), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_OPEN, _("Abrir"), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_SAVE, _("Guardar"), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_SAVEAS, _("Guardar Como"), _(""), wxITEM_NORMAL);
	wxID_FILE_Mnu_Obj->Append(wxID_EXIT, _("Salir"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(wxID_FILE_Mnu_Obj, _("Archivo"));
	SetMenuBar(WxMenuBar1);

	WxOpenFileDialog1 =  new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_OPEN);

	WxSaveFileDialog1 =  new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_SAVE);

	SetTitle(_("Proyecto Cifrado Grafico"));
	SetIcon(wxNullIcon);
	SetSize(8,8,457,395);
	Center();
	
	////GUI Items Creation End
}

void Proyecto_Cifrado_GraficoFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * WxnewClick
 */
void Proyecto_Cifrado_GraficoFrm::WxnewClick(wxCommandEvent& event)
{
	WxMemo2->SetValue("");
    WxEdit1->SetValue("");
	
    WxMemo1->SetValue("");
    
    archivotexto.Close();
    // insert your code here
}

/*
 * WxopenClick
 */
void Proyecto_Cifrado_GraficoFrm::WxopenClick(wxCommandEvent& event)
{
	if(WxOpenFileDialog1->ShowModal() != wxID_OK){
        return ;
    }else if (WxOpenFileDialog1->ShowModal() == wxID_OK){
        WxMemo2->SetValue("");
        
        Nombre=WxOpenFileDialog1->GetPath();
        archivotexto.Open(Nombre);
        Codigo = archivotexto.GetFirstLine();
        Codigo +='\n';
        WxMemo2->SetValue(Codigo);
        while(!archivotexto.Eof()){
            Codigo +=archivotexto.GetNextLine();
            Codigo +='\n';
            WxMemo2->SetValue(Codigo); 
        }
    }
    	// insert your code here
}
    
    
    // insert your code here


/*
 * WxsaveClick
 */
void Proyecto_Cifrado_GraficoFrm::WxsaveClick(wxCommandEvent& event)
{
    int guardarcomo=1;
	if(archivotexto.IsOpened() != false){
        wxString LMensaje;
        int n=WxMemo2->GetNumberOfLines();
        archivotexto.Clear();
        for(int x=0; x<n;x++){
            LMensaje=WxMemo2->GetLineText(x);
            archivotexto.AddLine( wxT(Mensaje) );
        }
        archivotexto.Write();
    }else if(guardarcomo==1){
        if (WxSaveFileDialog1->ShowModal() == wxID_CANCEL){
            return;
        }else{
            
            wxString directorio=WxSaveFileDialog1->GetPath();
            wxString LCodigo;
            nro=WxMemo2->GetNumberOfLines(); 
            wxTextFile Guardar(directorio);
            
            Guardar.Create();
            Guardar.Open();
            Guardar.Clear();
            for(int i=0; i<nro;i++){
                LCodigo=WxMemo2->GetLineText(i);
                Guardar.AddLine( wxT(Codigo) );
            }
     
            Guardar.Write();
            Guardar.Close();
        }
    }
    
    // insert your code here
}

/*
 * Mnuguardarcomo1018Click
 */
void Proyecto_Cifrado_GraficoFrm::Mnuguardarcomo1018Click(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxsaveasClick
 */
void Proyecto_Cifrado_GraficoFrm::WxsaveasClick(wxCommandEvent& event)
{
	if (WxSaveFileDialog1->ShowModal() == wxID_CANCEL){
        return;
    }else{
        
        wxString ruta=WxSaveFileDialog1->GetPath();
        wxString LMensaje;
        int n=WxMemo2->GetNumberOfLines(); 
        wxTextFile archivoGuardar(ruta);
        
        archivoGuardar.Create();
        archivoGuardar.Open();
        archivoGuardar.Clear();
        for(int x=0; x<n;x++){
            LMensaje=WxMemo2->GetLineText(x);
            archivoGuardar.AddLine( wxT(Mensaje) );
        }
 
        archivoGuardar.Write();
        archivoGuardar.Close();
    }
    
    // insert your code here
}

/*
 * WxopenClick0
 */
void Proyecto_Cifrado_GraficoFrm::WxopenClick0(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxsaveasClick0
 */
void Proyecto_Cifrado_GraficoFrm::WxsaveasClick0(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxexitClick
 */
void Proyecto_Cifrado_GraficoFrm::WxexitClick(wxCommandEvent& event)
{
	Close();
    // insert your code here
}

/*
 * WxButton1Click
 */
void Proyecto_Cifrado_GraficoFrm::WxButton1Click(wxCommandEvent& event)
{
	Numero=WxEdit1->GetValue();
    if(!Numero.ToLong(&numero)){}
    
    if(WxCheckBox1->GetValue()==true){
        Texto=WxMemo1->GetValue();
        numero=numero*(-1);   
        codifica(numero);    
        WxMemo2->SetValue(Texto);
    }else if(WxCheckBox2->GetValue()==true){
        Texto=WxMemo2->GetValue();
        codifica(numero);    
        WxMemo1->SetValue(Texto);
    }    
    
    // insert your code here
}

/*
 * WxCheckBox1Click
 */
void Proyecto_Cifrado_GraficoFrm::WxCheckBox1Click(wxCommandEvent& event)
{
	 if (WxCheckBox1->GetValue()==true){
         WxCheckBox2->SetValue(false);
         WxButton1->Enable(true);
     }
    // insert your code here
}

/*
 * WxCheckBox2Click
 */
void Proyecto_Cifrado_GraficoFrm::WxCheckBox2Click(wxCommandEvent& event)
{
	if (WxCheckBox2->GetValue()==true){
         WxCheckBox1->SetValue(false);
         WxButton1->Enable(true);
     }
    // insert your code here
}
