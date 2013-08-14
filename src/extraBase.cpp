/************************************************************************/
/** CPlusPlus Stat Calculator
/** Xenimus Open Source Group
/**
/** Additons to this file:
/** -[insert name]
/** --[insert additions descriptions]
/**
/** Original copy by:
/** Halloween (10/16/05)
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
// HP HELMET INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocushphelmIn() 
{
	CString str;
	m_hphelmIn.GetWindowText( str );
	int strlen = str.GetLength( );
	hpBaseArray[0] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( hpBaseArray[0] < 0 ){ hpBaseArray[0] = 0; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// HP ARMOR INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocushparmorIn() 
{
	CString str;
	m_hparmorIn.GetWindowText( str );
	int strlen = str.GetLength( );
	hpBaseArray[1] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( hpBaseArray[1] < 0 ){ hpBaseArray[1] = 0; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// HP GLOVES INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocushpgloveIn() 
{
	CString str;
	m_hpgloveIn.GetWindowText( str );
	int strlen = str.GetLength( );
	hpBaseArray[2] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( hpBaseArray[2] < 0 ){ hpBaseArray[2] = 0; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// HP WEAPON INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocushpweapIn() 
{
	CString str;
	m_hpweapIn.GetWindowText( str );
	int strlen = str.GetLength( );
	hpBaseArray[3] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( hpBaseArray[3] < 0 ){ hpBaseArray[3] = 0; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// HP RINGS INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocushpringIn() 
{
	CString str;
	m_hpringIn.GetWindowText( str );
	int strlen = str.GetLength( );
	hpBaseArray[4] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( hpBaseArray[4] < 0 ){ hpBaseArray[4] = 0; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// MP HELMET INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocusmphelmIn() 
{
	CString str;
	m_mphelmIn.GetWindowText( str );
	int strlen = str.GetLength( );
	mpBaseArray[0] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( mpBaseArray[0] < 0 ){ mpBaseArray[0] = 0; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// MP ARMOR INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocusmparmorIn() 
{
	CString str;
	m_mparmorIn.GetWindowText( str );
	int strlen = str.GetLength( );
	mpBaseArray[1] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( mpBaseArray[1] < 0 ){ mpBaseArray[1] = 0; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// MP GLOVES INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocusmpgloveIn() 
{
	CString str;
	m_mpgloveIn.GetWindowText( str );
	int strlen = str.GetLength( );
	mpBaseArray[2] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( mpBaseArray[2] < 0 ){ mpBaseArray[2] = 0; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// MP WEAPON INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocusmpweapIn() 
{
	CString str;
	m_mpweapIn.GetWindowText( str );
	int strlen = str.GetLength( );
	mpBaseArray[3] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( mpBaseArray[3] < 0 ){ mpBaseArray[3] = 0; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// MP RINGS INPUT BOX
//-------------------------------------------------------
void CCalcDlg::OnKillfocusmpringIn() 
{
	CString str;
	m_mpringIn.GetWindowText( str );
	int strlen = str.GetLength( );
	mpBaseArray[4] = atoi( str.GetBuffer( strlen ) );
	
	//failsafe incase user inputs a number too small
	if ( mpBaseArray[4] < 0 ){ mpBaseArray[4] = 0; }
	CCalcDlg::redo( ); 
}


//-------------------------------------------------------
// HUMAN HP SKILL
//-------------------------------------------------------
void CCalcDlg::Onhphuman() 
{
	m_mphuman.SetCheck( 0 );
	CCalcDlg::redo( );
}


//-------------------------------------------------------
// HUMAN MP SKILL
//-------------------------------------------------------
void CCalcDlg::Onmphuman() 
{
	m_hphuman.SetCheck( 0 );
	CCalcDlg::redo( );
}
