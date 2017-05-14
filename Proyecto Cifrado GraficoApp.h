//---------------------------------------------------------------------------
//
// Name:        Proyecto Cifrado GraficoApp.h
// Author:      LuisMiguel
// Created:     09/05/2017 18:30:46
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __PROYECTO_CIFRADO_GRAFICOFRMApp_h__
#define __PROYECTO_CIFRADO_GRAFICOFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class Proyecto_Cifrado_GraficoFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
