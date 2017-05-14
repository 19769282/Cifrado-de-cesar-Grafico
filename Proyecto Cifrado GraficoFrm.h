///-----------------------------------------------------------------
///
/// @file      Proyecto Cifrado GraficoFrm.h
/// @author    LuisMiguel
/// Created:   09/05/2017 18:30:47
/// @section   DESCRIPTION
///            Proyecto_Cifrado_GraficoFrm class declaration
///
///------------------------------------------------------------------

#ifndef __PROYECTO_CIFRADO_GRAFICOFRM_H__
#define __PROYECTO_CIFRADO_GRAFICOFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/filedlg.h>
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/panel.h>
#include <wx/textfile.h>
////Header Include End

////Dialog Style Start
#undef Proyecto_Cifrado_GraficoFrm_STYLE
#define Proyecto_Cifrado_GraficoFrm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class Proyecto_Cifrado_GraficoFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		Proyecto_Cifrado_GraficoFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Proyecto Cifrado Grafico"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Proyecto_Cifrado_GraficoFrm_STYLE);
		virtual ~Proyecto_Cifrado_GraficoFrm();
		void WxopenClick(wxCommandEvent& event);
		void WxnewClick(wxCommandEvent& event);
		void WxsaveClick(wxCommandEvent& event);
		void Mnuguardarcomo1018Click(wxCommandEvent& event);
		void WxsaveasClick(wxCommandEvent& event);
		void WxopenClick0(wxCommandEvent& event);
		void WxsaveasClick0(wxCommandEvent& event);
		void WxexitClick(wxCommandEvent& event);
		void WxButton1Click(wxCommandEvent& event);
		void WxCheckBox1Click(wxCommandEvent& event);
		void WxCheckBox2Click(wxCommandEvent& event);
		
		
        void codifica(long n) { 
        		
            for (int i = 0; i < Texto.length(); i++) { 
                caracter=Texto[i];
                if (caracter >= 'a' && caracter <= 'z') { 
                    if (caracter + n > 'z') { 
                        caracter = 'a' - 'z' + caracter + n - 1; 
                    } else if (caracter + n < 'a') { 
                        caracter = 'z' - 'a' + caracter + n + 1; 
                    } else { 
                        caracter += n; 
                    } 
                } else if (caracter >= 'A' && caracter <= 'Z') { 
                    if (caracter + n > 'Z') { 
                        caracter = 'A' - 'Z' + caracter + n - 1; 
                    } else if (caracter + n < 'A') { 
                        caracter = 'Z' - 'A' + caracter + n + 1; 
                    } else { 
                        caracter += n; 
                    } 
                } 
            Texto[i]=caracter;   
            } 
        } 
		
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxFileDialog *WxSaveFileDialog1;
		wxFileDialog *WxOpenFileDialog1;
		wxMenuBar *WxMenuBar1;
		wxStaticText *WxStaticText4;
		wxStaticText *WxStaticText3;
		wxStaticText *WxStaticText2;
		wxStaticText *WxStaticText1;
		wxTextCtrl *WxMemo2;
		wxTextCtrl *WxMemo1;
		wxButton *WxButton1;
		wxTextCtrl *WxEdit1;
		wxCheckBox *WxCheckBox2;
		wxCheckBox *WxCheckBox1;
		wxPanel *WxPanel1;
		////GUI Control Declaration End
		wxString Texto,Numero;
		long numero;
		char caracter;
		int nro;
		wxTextFile archivotexto;
		wxString Codigo,temp,Nombre;
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXSTATICTEXT4 = 1020,
			ID_WXSTATICTEXT3 = 1013,
			ID_WXSTATICTEXT2 = 1010,
			ID_WXSTATICTEXT1 = 1009,
			ID_WXMEMO2 = 1008,
			ID_WXMEMO1 = 1007,
			ID_WXBUTTON1 = 1006,
			ID_WXEDIT1 = 1004,
			ID_WXCHECKBOX2 = 1003,
			ID_WXCHECKBOX1 = 1002,
			ID_WXPANEL1 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
