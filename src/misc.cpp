/************************************************************************/
/** CPlusPlus Stat Calculator
/** Xenimus Open Source Group
/**
/** Additons to this file:
/** -[insert name]
/** --[insert additions descriptions]
/**
/** -Halloween (08/30/05)
/** --Enable full alignment radio for paladins
/**
/** -Halloween (08/25/05)
/** --Display bonus bitmaps
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
void CCalcDlg::OnFileExit( )
{
	exit( 0 );
}


//-------------------------------------------------------
// ALIGNMENT - NEUTRAL
//-------------------------------------------------------
void CCalcDlg::OnneutralButton( ) 
{
	CCalcDlg::redo( );
}


//-------------------------------------------------------
// ALIGNMENT - FULL
//-------------------------------------------------------
void CCalcDlg::OnfullButton( ) 
{
	//only clerics and paladins can use this feature
	if ( classNumber != 3 && classNumber != 2 )
	{
		m_neutralButton.SetCheck( TRUE );
		m_fullButton.SetCheck( FALSE );
	}
	
	CCalcDlg::redo( );
}


//-------------------------------------------------------
// STATS (MONITOR)
//-------------------------------------------------------
void CCalcDlg::OnstrMinus( ) { statMinus( 0 ); }
void CCalcDlg::OnagilMinus( ) { statMinus( 1 ); }
void CCalcDlg::OnconsMinus( ) { statMinus( 2 ); }
void CCalcDlg::OnintelMinus( ) { statMinus( 3 ); }
void CCalcDlg::OnwisMinus( ) { statMinus( 4 ); }

void CCalcDlg::OnstrPlus( ) { statPlus( 0 ); }
void CCalcDlg::OnagilPlus( ) { statPlus( 1 ); }
void CCalcDlg::OnconsPlus( ) { statPlus( 2 ); }
void CCalcDlg::OnintelPlus() { statPlus( 3 ); }
void CCalcDlg::OnwisPlus( ) { statPlus( 4 ); }


//-------------------------------------------------------
// STATS (CHANGE)
//-------------------------------------------------------
//MINUS
void CCalcDlg::statMinus( int i )
{
	
	if ( statArray[i]-shrineArray[i] > 10 )
	{
		statArray[i]--;
	}
	
	CCalcDlg::redo( );
}

//PLUS
void CCalcDlg::statPlus( int i )
{
	statArray[i]++;
	
	CCalcDlg::redo( );
}


//-------------------------------------------------------
// LEVEL (MINUS)
//-------------------------------------------------------
void CCalcDlg::OnlevelMinus( ) 
{
	if ( lvl > 1 )
	{
		lvl--;
		CCalcDlg::redo( );
	}
}


//-------------------------------------------------------
// LEVEL (PLUS)
//-------------------------------------------------------
void CCalcDlg::OnlevelPlus( ) 
{
	lvl++;
	CCalcDlg::redo( );
}


//-------------------------------------------------------
// CLASS (MINUS)
//-------------------------------------------------------
void CCalcDlg::OnclassMinus( ) 
{
	//reset alignment
	m_neutralButton.SetCheck( TRUE );
	m_fullButton.SetCheck( FALSE );
	
	//change class
	if ( classNumber == 0 )
	{
		classNumber = 8;
	}
	else
	{
		classNumber--;
	}
	
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// CLASS (PLUS)
//-------------------------------------------------------
void CCalcDlg::OnclassPlus( ) 
{
	//reset alginment
	m_neutralButton.SetCheck( TRUE );
	m_fullButton.SetCheck( FALSE );
	
	//change class
	if ( classNumber == 8 )
	{
		classNumber = 0;
	}
	else
	{
		classNumber++;
	}
	
	CCalcDlg::redo( );
}


//-------------------------------------------------------
// LEVEL INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocuslvlIn( ) 
{
	CString str;
	m_lvlIn.GetWindowText( str );
	int strlen = str.GetLength( );
	lvl = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( lvl < 1 ){ lvl = 1; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// STRENGTH INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocusstrIn( ) 
{
	CString str;
	m_strIn.GetWindowText( str );
	int strlen = str.GetLength( );
	statArray[0] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( statArray[0] < 10 + shrineArray[0] ){ statArray[0] = 10 + shrineArray[0]; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// AGILITY INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocusagilIn( ) 
{
	CString str;
	m_agilIn.GetWindowText( str );
	int strlen = str.GetLength( );
	statArray[1] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( statArray[1] < 10 + shrineArray[1] ){ statArray[1] = 10 + shrineArray[1]; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// CONSTITUTION INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocusconsIn( ) 
{
	CString str;
	m_consIn.GetWindowText( str );
	int strlen = str.GetLength( );
	statArray[2] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( statArray[2] < 10 + shrineArray[2] ){ statArray[2] = 10 + shrineArray[2]; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// INTELLIGENCE INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocusintelIn( ) 
{
	CString str;
	m_intelIn.GetWindowText( str );
	int strlen = str.GetLength( );
	statArray[3] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( statArray[3] < 10 + shrineArray[3] ){ statArray[3] = 10 + shrineArray[3]; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// WISDOM INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocuswisIn( ) 
{
	CString str;
	m_wisIn.GetWindowText( str );
	int strlen = str.GetLength( );
	statArray[4] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( statArray[4] < 10 + shrineArray[4] ){ statArray[4] = 10 + shrineArray[4]; }
	CCalcDlg::redo();
}


//-------------------------------------------------------
// SHOW THE BONUS BMPs
//-------------------------------------------------------
void CCalcDlg::showBonus( ) 
{
	//
	//str bonus bmp -- NOT 100% POSITIVE --
	//
	if ( statArray[0] == 21 || statArray[0] == 25 || statArray[0] == 29 ||
		statArray[0] == 34 || statArray[0] == 39 || statArray[0] == 45 ||
		statArray[0] == 51 || statArray[0] == 61 )
	{ m_strBMP.ShowWindow( TRUE ); }
	else { m_strBMP.ShowWindow( FALSE ); }
	
	
	//
	//agil bonus bmp -- NOT 100% POSITIVE --
	//
	if ( classNumber == 0 || classNumber == 2 )
	{
		//fighter, paladin
		if ( statArray[1] == 39 || statArray[1] == 45 )
		{ m_agilBMP.ShowWindow( TRUE ); }
		else { m_agilBMP.ShowWindow( FALSE ); }
	}
	else if ( classNumber == 1 || classNumber == 7 || classNumber == 8 )
	{
		//ranger, darkwar, barbarian
		if ( statArray[1] == 29 || statArray[1] == 39 || statArray[1] == 45 )
		{ m_agilBMP.ShowWindow( TRUE ); }
		else { m_agilBMP.ShowWindow( FALSE ); }
	}
	else if ( classNumber == 3 )
	{
		//cleric
	}
	else if ( classNumber == 4 || classNumber == 5 )
	{
		//warlock, wizard
		if ( statArray[1] == 61 )
		{ m_agilBMP.ShowWindow( TRUE ); }
		else { m_agilBMP.ShowWindow( FALSE ); }
	}
	else if ( classNumber == 6 )
	{
		//druid
		if ( statArray[1] == 50 )
		{ m_agilBMP.ShowWindow( TRUE ); }
		else { m_agilBMP.ShowWindow( FALSE ); }
	}
	
	
	//
	//cons bonus bmp -- uses isBonus()
	//
	if ( isBonus( statArray[2] ) == 1 )
	{ m_consBMP.ShowWindow( TRUE ); }
	else { m_consBMP.ShowWindow( FALSE ); }
	
	
	//
	//wis-intel bonus bmp -- uses isBonus()
	//
	if ( classNumber == 2 || classNumber == 3 || classNumber == 6 )
	{
		//cleric, druid, paladin
		if ( isBonus( statArray[4] ) == 1 )
		{ m_wisBMP.ShowWindow( TRUE ); }
		else { m_wisBMP.ShowWindow( FALSE ); }
	}
	else
	{
		//everyone else
		if ( isBonus( statArray[3] ) == 1 )
		{ m_intelBMP.ShowWindow( TRUE ); }
		else { m_intelBMP.ShowWindow( FALSE ); }
	}
}


//-------------------------------------------------------
// SEE IF IT IS A BONUS
//-------------------------------------------------------
int CCalcDlg::isBonus( int n ) 
{
	//ej confirmed
	if ( n == 15 || n == 17 || n == 19 || n == 21 || n == 25 ||
		n == 29 || n == 34 || n == 39 || n == 45 || n == 50 )
	{
		//yes-> return 1
		return 1;
	}
	
	//halloween added
	int cycle = 61;
	while ( cycle <= n )
	{
		if ( cycle == n )
		{
			//yes-> return 1
			return 1;
		}
		
		cycle+=10;
	}
	
	//no-> return 0
	return 0;
}
