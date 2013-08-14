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
// JELOC BUTTON
//-------------------------------------------------------
void CCalcDlg::jelocButton_click( ) 
{
	starterHelp = FALSE;

	//if jelocButton has not been pushed, jeloc all
	if( selectAllJeloc == FALSE ) 
	{
		if( lvl < 36 ) { lvl = 36; }
		
		//take action if sixth has not already been selected
		if( JELOC == FALSE ) { m_sixthJeloc.SetCheck( TRUE ); CCalcDlg::OnsixthJeloc( ); }
		
		//jelocButton = pushed
		selectAllJeloc = TRUE;
	}
	//if jelocButton has been pushed already, un-jeloc all
	else if( selectAllJeloc == TRUE )
	{
		//if sixth is selected, unselect all jeloc shrines, enable all jeloc shrines, and take action
		if( JELOC == TRUE )
		{
			m_sixthJeloc.SetCheck( FALSE );
			m_strengthJeloc.SetCheck( FALSE ); m_strengthJeloc.EnableWindow( TRUE );
			m_agilityJeloc.SetCheck( FALSE ); m_agilityJeloc.EnableWindow( TRUE );
			m_constitutionJeloc.SetCheck( FALSE ); m_constitutionJeloc.EnableWindow( TRUE );
			m_intelligenceJeloc.SetCheck( FALSE ); m_intelligenceJeloc.EnableWindow( TRUE );
			m_wisdomJeloc.SetCheck( FALSE ); m_wisdomJeloc.EnableWindow( TRUE );
			
			JELOC = FALSE;
			
			CCalcDlg::OnsixthJeloc(); CCalcDlg::OnstrengthJeloc();
			CCalcDlg::OnagilityJeloc(); CCalcDlg::OnconstitutionJeloc();
			CCalcDlg::OnintelligenceJeloc(); CCalcDlg::OnwisdomJeloc();
		}
		//jelocButton = not pushed
		selectAllJeloc = FALSE;
	}
	CCalcDlg::redo( );
}


//-------------------------------------------------------
// SIXTH JELOC (MONITOR AND CHANGE)
//-------------------------------------------------------
void CCalcDlg::OnsixthJeloc() 
{	
	//if selected
	if (m_sixthJeloc.GetCheck( ) == TRUE)
	{
		statArray[0]+=5; shrineArray[0]+=5;
		statArray[1]+=5; shrineArray[1]+=5;
		statArray[2]+=5; shrineArray[2]+=5;
		statArray[3]+=5; shrineArray[3]+=5;
		statArray[4]+=5; shrineArray[4]+=5;
		
		//select the remaining jeloc shrines that are not already selected
		if( m_strengthJeloc.GetCheck() == FALSE ) { m_strengthJeloc.SetCheck( TRUE ); CCalcDlg::OnstrengthJeloc(); }  
		if( m_agilityJeloc.GetCheck() == FALSE ) { m_agilityJeloc.SetCheck( TRUE ); CCalcDlg::OnagilityJeloc(); }
		if( m_constitutionJeloc.GetCheck() == FALSE ) { m_constitutionJeloc.SetCheck( TRUE ); CCalcDlg::OnconstitutionJeloc(); }
		if( m_intelligenceJeloc.GetCheck() == FALSE ) { m_intelligenceJeloc.SetCheck( TRUE ); CCalcDlg::OnintelligenceJeloc(); }
		if( m_wisdomJeloc.GetCheck() == FALSE ) { m_wisdomJeloc.SetCheck( TRUE ); CCalcDlg::OnwisdomJeloc(); }
		
		//disable the other jeloc shrines while sixth is enabled
		m_strengthJeloc.EnableWindow( FALSE ); m_agilityJeloc.EnableWindow( FALSE );
		m_constitutionJeloc.EnableWindow( FALSE ); m_intelligenceJeloc.EnableWindow( FALSE );
		m_wisdomJeloc.EnableWindow( FALSE ); JELOC = TRUE;
	}
	//if de-selected
	else
	{	
		statArray[0]-=5; shrineArray[0]-=5;
		statArray[1]-=5; shrineArray[1]-=5;
		statArray[2]-=5; shrineArray[2]-=5;
		statArray[3]-=5; shrineArray[3]-=5;
		statArray[4]-=5; shrineArray[4]-=5;
		
		//enable the other jeloc shrines
		m_strengthJeloc.EnableWindow( TRUE ); m_agilityJeloc.EnableWindow( TRUE );
		m_constitutionJeloc.EnableWindow( TRUE ); m_intelligenceJeloc.EnableWindow( TRUE );
		m_wisdomJeloc.EnableWindow( TRUE ); JELOC = false;
	}
	
	CCalcDlg::redo();
}


//-------------------------------------------------------
// JELOC SHRINES (MONITOR AND CHANGE)
//-------------------------------------------------------
//STRENGTH
void CCalcDlg::OnstrengthJeloc() {
	//if selected
	if ( m_strengthJeloc.GetCheck() == TRUE )
	{
		statArray[0]+=2; shrineArray[0]+=2;
	}
	//if de-selected
	else
	{
		statArray[0]-=2; shrineArray[0]-=2;
	}
	
	CCalcDlg::redo( );
}


//AGILITY
void CCalcDlg::OnagilityJeloc() {
	//if selected
	if ( m_agilityJeloc.GetCheck() == TRUE )
	{
		statArray[1]+=2; shrineArray[1]+=2;
	}
	//if de-selected
	else
	{
		statArray[1]-=2; shrineArray[1]-=2;
	}
	
	CCalcDlg::redo( );
}


//CONSTITUTION
void CCalcDlg::OnconstitutionJeloc() {
	//if selected
	if ( m_constitutionJeloc.GetCheck() == TRUE )
	{
		statArray[2]+=2; shrineArray[2]+=2;
	}
	//if de-selected
	else
	{
		statArray[2]-=2; shrineArray[2]-=2;
	}
	
	CCalcDlg::redo( );
}


//INTELLIGENCE
void CCalcDlg::OnintelligenceJeloc() {
	//if selected
	if ( m_intelligenceJeloc.GetCheck() == TRUE )
	{
		statArray[3]+=2; shrineArray[3]+=2;
	}
	//if de-selected
	else
	{
		statArray[3]-=2; shrineArray[3]-=2;
	}
	
	CCalcDlg::redo( );
}


//WISDOM
void CCalcDlg::OnwisdomJeloc() {
	//if selected
	if ( m_wisdomJeloc.GetCheck() == TRUE )
	{
		statArray[4]+=2; shrineArray[4]+=2;
	}
	//if de-selected
	else
	{
		statArray[4]-=2; shrineArray[4]-=2;
	}
	
	CCalcDlg::redo( );
}
