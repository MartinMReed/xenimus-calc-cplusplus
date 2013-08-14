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
// EXIT
//-------------------------------------------------------
void CCalcDlg::OnFileExit()
{
	exit(0);
}


//-------------------------------------------------------
// ALIGNMENT - NEUTRAL
//-------------------------------------------------------
void CCalcDlg::OnneutralButton() 
{
	CCalcDlg::redo();
}


//-------------------------------------------------------
// ALIGNMENT - FULL
//-------------------------------------------------------
void CCalcDlg::OnfullButton() 
{
	//only clerics can use this feature
	if (classNumber != 3)
	{
		m_neutralButton.SetCheck( TRUE );
		m_fullButton.SetCheck( FALSE );
	}
		
	CCalcDlg::redo();
}


//-------------------------------------------------------
// STATS (MONITOR)
//-------------------------------------------------------
void CCalcDlg::OnstrMinus() { statMinus(0); }
void CCalcDlg::OnagilMinus() { statMinus(1); }
void CCalcDlg::OnconsMinus() { statMinus(2); }
void CCalcDlg::OnintelMinus() { statMinus(3); }
void CCalcDlg::OnwisMinus() { statMinus(4); }

void CCalcDlg::OnstrPlus() { statPlus(0); }
void CCalcDlg::OnagilPlus() { statPlus(1); }
void CCalcDlg::OnconsPlus() { statPlus(2); }
void CCalcDlg::OnintelPlus() { statPlus(3); }
void CCalcDlg::OnwisPlus() { statPlus(4); }


//-------------------------------------------------------
// STATS (CHANGE)
//-------------------------------------------------------
//MINUS
void CCalcDlg::statMinus(int i)
{
	if (starterHelp == FALSE)
	{
		if(statArray[i]-shrineArray[i] > 10)
		{
			statArray[i]--;
		}
	}
	else
	{
		if(statArray[i]-shrineArray[i] > starterMin[i])
		{
			statArray[i]--;
		}
	}
		
	CCalcDlg::redo();
}

//PLUS
void CCalcDlg::statPlus(int i)
{
	if (starterHelp == FALSE)
	{
		statArray[i]++;
	}
	else
	{
		if(statArray[i]-shrineArray[i] < starterMax[i])
		{
			statArray[i]++;
		}
	}
		
	CCalcDlg::redo();
}


//-------------------------------------------------------
// LEVEL (MINUS)
//-------------------------------------------------------
void CCalcDlg::OnlevelMinus() 
{
	if( lvl > 1 )
	{
		lvl--;
		CCalcDlg::redo();
	}
}


//-------------------------------------------------------
// LEVEL (PLUS)
//-------------------------------------------------------
void CCalcDlg::OnlevelPlus() 
{
	starterHelp = FALSE;
	lvl++;
	CCalcDlg::redo();
}


//-------------------------------------------------------
// CLASS (MINUS)
//-------------------------------------------------------
void CCalcDlg::OnclassMinus() 
{
	//reset alignment
	m_neutralButton.SetCheck(TRUE);
	m_fullButton.SetCheck(FALSE);
		
	//change class
	if (classNumber == 0)
	{
		classNumber = 8;
	}
	else
	{
		classNumber--;
	}
		
	CCalcDlg::redo(); 
}


//-------------------------------------------------------
// CLASS (PLUS)
//-------------------------------------------------------
void CCalcDlg::OnclassPlus() 
{
	//reset alginment
	m_neutralButton.SetCheck(TRUE);
	m_fullButton.SetCheck(FALSE);
		
	//change class
	if (classNumber == 8)
	{
		classNumber = 0;
	}
	else
	{
		classNumber++;
	}
		
	CCalcDlg::redo();
}


//-------------------------------------------------------
// LEVEL INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocuslvlIn() 
{
	CString str;
	m_lvlIn.GetWindowText(str);
	int strlen = str.GetLength();
	lvl = atoi(str.GetBuffer(strlen));

	//Failsafe incase user inputs a number too small
	if(lvl < 1){ lvl = 1; }
	CCalcDlg::redo(); 
}


//-------------------------------------------------------
// STRENGTH INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocusstrIn() 
{
	CString str;
	m_strIn.GetWindowText(str);
	int strlen = str.GetLength();
	statArray[0] = atoi(str.GetBuffer(strlen));

	//Failsafe incase user inputs a number too small
	if(statArray[0] < starterMin[0] + shrineArray[0]){ statArray[0] = starterMin[0] + shrineArray[0]; }
	CCalcDlg::redo(); 
}


//-------------------------------------------------------
// AGILITY INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocusagilIn() 
{
	CString str;
	m_agilIn.GetWindowText(str);
	int strlen = str.GetLength();
	statArray[1] = atoi(str.GetBuffer(strlen));

	//Failsafe incase user inputs a number too small
	if(statArray[1] < starterMin[1] + shrineArray[1]){ statArray[1] = starterMin[1] + shrineArray[1]; }
	CCalcDlg::redo(); 
}


//-------------------------------------------------------
// CONSTITUTION INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocusconsIn() 
{
	CString str;
	m_consIn.GetWindowText(str);
	int strlen = str.GetLength();
	statArray[2] = atoi(str.GetBuffer(strlen));

	//Failsafe incase user inputs a number too small
	if(statArray[2] < starterMin[2] + shrineArray[2]){ statArray[2] = starterMin[2] + shrineArray[2]; }
	CCalcDlg::redo(); 
}


//-------------------------------------------------------
// INTELLIGENCE INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocusintelIn() 
{
	CString str;
	m_intelIn.GetWindowText(str);
	int strlen = str.GetLength();
	statArray[3] = atoi(str.GetBuffer(strlen));

	//Failsafe incase user inputs a number too small
	if(statArray[3] < starterMin[3] + shrineArray[3]){ statArray[3] = starterMin[3] + shrineArray[3]; }
	CCalcDlg::redo(); 
}


//-------------------------------------------------------
// WISDOM INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocuswisIn() 
{
	CString str;
	m_wisIn.GetWindowText(str);
	int strlen = str.GetLength();
	statArray[4] = atoi(str.GetBuffer(strlen));

	//Failsafe incase user inputs a number too small
	if(statArray[4] < starterMin[4] + shrineArray[4]){ statArray[4] = starterMin[4] + shrineArray[4]; }
	CCalcDlg::redo();
}
