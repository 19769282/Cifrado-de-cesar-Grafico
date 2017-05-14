//---------------------------------------------------------------------------
//
// Name:        Proyecto Cifrado GraficoApp.cpp
// Author:      LuisMiguel
// Created:     09/05/2017 18:30:46
// Description: 
//
//---------------------------------------------------------------------------

#include "Proyecto Cifrado GraficoApp.h"
#include "Proyecto Cifrado GraficoFrm.h"

IMPLEMENT_APP(Proyecto_Cifrado_GraficoFrmApp)

bool Proyecto_Cifrado_GraficoFrmApp::OnInit()
{
    Proyecto_Cifrado_GraficoFrm* frame = new Proyecto_Cifrado_GraficoFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int Proyecto_Cifrado_GraficoFrmApp::OnExit()
{
	return 0;
}
