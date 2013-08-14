/************************************************************************/
/** CPlusPlus Stat Calculator
/** Xenimus Open Source Group
/**
/** Additons to this file:
/** -[insert name]
/** --[insert additions descriptions]
/**
/** Original copy by:
/** Halloween (06/15/05)
/**
/** All previous names must stay included when making additions.
/************************************************************************/

#include "stdafx.h"
#include "calc.h"
#include "calcDlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


//-------------------------------------------------------
// DREG STARTER HELP
//-------------------------------------------------------
void CCalcDlg::OnDregStarter() 
{
	CCalcDlg::Onreset();
	
	statArray[0] = 17;	
	statArray[1] = 10;	
	statArray[2] = 15;	
	statArray[3] = 10;	
	statArray[4] = 10;	
	
	starterMin[0] = 17;	starterMax[0] = 22;
	starterMin[1] = 10;	starterMax[1] = 18;
	starterMin[2] = 15;	starterMax[2] = 21;
	starterMin[3] = 10;	starterMax[3] = 15;
	starterMin[4] = 10;	starterMax[4] = 14;
	
	starterHelp = TRUE;
	
	CCalcDlg::redo();
}


//-------------------------------------------------------
// ELF STARTER HELP
//-------------------------------------------------------
void CCalcDlg::OnElfStarter() 
{
	CCalcDlg::Onreset();
	
	statArray[0] = 10;	
	statArray[1] = 15;	
	statArray[2] = 10;	
	statArray[3] = 12;	
	statArray[4] = 12;	
	
	starterMin[0] = 10;	starterMax[0] = 16;
	starterMin[1] = 15;	starterMax[1] = 22;
	starterMin[2] = 10;	starterMax[2] = 16;
	starterMin[3] = 12;	starterMax[3] = 18;
	starterMin[4] = 12;	starterMax[4] = 18;
	
	starterHelp = TRUE;
	
	CCalcDlg::redo();
}


//-------------------------------------------------------
// GNOME STARTER HELP
//-------------------------------------------------------
void CCalcDlg::OnGnomeStarter() 
{
	CCalcDlg::Onreset();
	
	statArray[0] = 10;	
	statArray[1] = 10;	
	statArray[2] = 10;	
	statArray[3] = 12;	
	statArray[4] = 15;	
	
	starterMin[0] = 10;	starterMax[0] = 18;
	starterMin[1] = 10;	starterMax[1] = 16;
	starterMin[2] = 10;	starterMax[2] = 16;
	starterMin[3] = 12;	starterMax[3] = 18;
	starterMin[4] = 15;	starterMax[4] = 22;
	
	starterHelp = TRUE;
	
	CCalcDlg::redo();
}


//-------------------------------------------------------
// SCALLION STARTER HELP
//-------------------------------------------------------
void CCalcDlg::OnScallionStarter() 
{
	CCalcDlg::Onreset();
	
	statArray[0] = 12;	
	statArray[1] = 10;	
	statArray[2] = 10;	
	statArray[3] = 16;	
	statArray[4] = 10;	
	
	starterMin[0] = 12;	starterMax[0] = 20;
	starterMin[1] = 10;	starterMax[1] = 16;
	starterMin[2] = 10;	starterMax[2] = 16;
	starterMin[3] = 16;	starterMax[3] = 22;
	starterMin[4] = 10;	starterMax[4] = 18;
	
	starterHelp = TRUE;
	
	CCalcDlg::redo();
}


//-------------------------------------------------------
// HUMAN STARTER HELP
//-------------------------------------------------------
void CCalcDlg::OnHumanStarter() 
{
	CCalcDlg::Onreset();
	
	statArray[0] = 12;	
	statArray[1] = 12;	
	statArray[2] = 12;	
	statArray[3] = 10;	
	statArray[4] = 10;	
	
	starterMin[0] = 12;	starterMax[0] = 18;
	starterMin[1] = 12;	starterMax[1] = 18;
	starterMin[2] = 12;	starterMax[2] = 18;
	starterMin[3] = 10;	starterMax[3] = 18;
	starterMin[4] = 10;	starterMax[4] = 18;
	
	starterHelp = TRUE;
	
	CCalcDlg::redo();
}


//-------------------------------------------------------
// BEHOCK STARTER HELP
//-------------------------------------------------------
void CCalcDlg::OnBehockStarter() 
{
	CCalcDlg::Onreset();
	
	statArray[0] = 15;	
	statArray[1] = 10;	
	statArray[2] = 17;	
	statArray[3] = 10;	
	statArray[4] = 10;	
	
	starterMin[0] = 15;	starterMax[0] = 21;
	starterMin[1] = 10;	starterMax[1] = 18;
	starterMin[2] = 17;	starterMax[2] = 22;
	starterMin[3] = 10;	starterMax[3] = 14;
	starterMin[4] = 10;	starterMax[4] = 15;
	
	starterHelp = TRUE;
	
	CCalcDlg::redo();
}
