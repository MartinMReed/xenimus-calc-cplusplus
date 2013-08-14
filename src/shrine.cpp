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
// SHRINE BUTTON
//-------------------------------------------------------
void CCalcDlg::OnshrineButton() 
{
	//if shrineButton button has not been pushed, select all shrines not already selected
	if (selectAllShrines == false)
	{
		if(m_strengthShrine.GetCheck() == FALSE) { m_strengthShrine.SetCheck( TRUE ); CCalcDlg::OnstrengthShrine(); }
		if(m_agilityShrine.GetCheck() == FALSE) { m_agilityShrine.SetCheck( TRUE ); CCalcDlg::OnagilityShrine(); }
		if(m_constitutionShrine.GetCheck() == FALSE) { m_constitutionShrine.SetCheck( TRUE ); CCalcDlg::OnconstitutionShrine(); }
		if(m_intelligenceShrine.GetCheck() == FALSE) { m_intelligenceShrine.SetCheck( TRUE ); CCalcDlg::OnintelligenceShrine(); }
		if(m_wisdomShrine.GetCheck() == FALSE) { m_wisdomShrine.SetCheck( TRUE ); CCalcDlg::OnwisdomShrine(); }
		if(m_ghShrine.GetCheck() == FALSE) { m_ghShrine.SetCheck( TRUE ); CCalcDlg::OnghShrine(); }
		
		//shrineButton = pushed
		selectAllShrines = TRUE;
	}
	//if shrineButton has been pushed already, unselect all shrines not already unselected
	else if (selectAllShrines == true)
	{
		if(m_strengthShrine.GetCheck() == TRUE) { m_strengthShrine.SetCheck( FALSE ); CCalcDlg::OnstrengthShrine(); }
		if(m_agilityShrine.GetCheck() == TRUE) { m_agilityShrine.SetCheck( FALSE ); CCalcDlg::OnagilityShrine(); }
		if(m_constitutionShrine.GetCheck() == TRUE) { m_constitutionShrine.SetCheck( FALSE ); CCalcDlg::OnconstitutionShrine(); }
		if(m_intelligenceShrine.GetCheck() == TRUE) { m_intelligenceShrine.SetCheck( FALSE ); CCalcDlg::OnintelligenceShrine(); }
		if(m_wisdomShrine.GetCheck() == TRUE) { m_wisdomShrine.SetCheck( FALSE ); CCalcDlg::OnwisdomShrine(); }
		if(m_ghShrine.GetCheck() == TRUE) { m_ghShrine.SetCheck( FALSE ); CCalcDlg::OnghShrine(); }
		
		//shrineButton = not pushed
		selectAllShrines = FALSE;
	}
	CCalcDlg::redo();
}


//-------------------------------------------------------
// GREAT HALL (MONITOR AND CHANGE)
//-------------------------------------------------------
void CCalcDlg::OnghShrine() 
{
	//if selected
	if ( m_ghShrine.GetCheck() == TRUE )
	{	
		//if less then 13 wisdom
		if (statArray[4]<13){ statArray[4]=13; }
		
		//add 1 more to each stat
		statArray[0]++; shrineArray[0]++;
		statArray[1]++; shrineArray[1]++;
		statArray[2]++; shrineArray[2]++;
		statArray[3]++; shrineArray[3]++;
		statArray[4]++; shrineArray[4]++;
	}
	//if de-selected
	else
	{	
		statArray[0]--; shrineArray[0]--;
		statArray[1]--; shrineArray[1]--;
		statArray[2]--; shrineArray[2]--;
		statArray[3]--; shrineArray[3]--;
		statArray[4]--; shrineArray[4]--;
	}
	CCalcDlg::redo();
}



//-------------------------------------------------------
// SHRINES (MONITOR AND CHANGE)
//-------------------------------------------------------
//STRENGTH
void CCalcDlg::OnstrengthShrine() 
{
	//if selected
	if ( m_strengthShrine.GetCheck() == TRUE )
	{
		if (statArray[4]<13){ statArray[4]=13; }
		statArray[0]++; shrineArray[0]++;
	}
	//if de-selected
	else
	{
		statArray[0]--; shrineArray[0]--;
	}
	CCalcDlg::redo();
}


//AGILITY
void CCalcDlg::OnagilityShrine() 
{
	//if selected
	if ( m_agilityShrine.GetCheck() == TRUE )
	{
		if (statArray[4]<13){ statArray[4]=13; }
		statArray[1]++; shrineArray[1]++;
	}
	//if de-selected
	else
	{
		statArray[1]--; shrineArray[1]--;
	}
	CCalcDlg::redo();
}


//CONSTITUTION
void CCalcDlg::OnconstitutionShrine() 
{
	//if selected
	if ( m_constitutionShrine.GetCheck() == TRUE )
	{
		if (statArray[4]<13){ statArray[4]=13; }
		statArray[2]++; shrineArray[2]++;
	}
	//if de-selected
	else
	{
		statArray[2]--; shrineArray[2]--;
	}
	CCalcDlg::redo();
}


//INTELLIGENCE
void CCalcDlg::OnintelligenceShrine() 
{
	//if selected
	if ( m_intelligenceShrine.GetCheck() == TRUE )
	{
		if (statArray[4]<13){ statArray[4]=13; }
		statArray[3]++; shrineArray[3]++;
	}
	//if de-selected
	else
	{
		statArray[3]--; shrineArray[3]--;
	}
	CCalcDlg::redo();
}


//WISDOM
void CCalcDlg::OnwisdomShrine() 
{
	//if selected
	if ( m_wisdomShrine.GetCheck() == TRUE )
	{
		if (statArray[4]<13){ statArray[4]=13; }
		statArray[4]++; shrineArray[4]++;
	}
	//if de-selected
	else
	{
		statArray[4]--; shrineArray[4]--;
	}
	CCalcDlg::redo();	
}
