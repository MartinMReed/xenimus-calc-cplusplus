/************************************************************************/
/** CPlusPlus Stat Calculator
/** Xenimus Open Source Group
/**
/** Additons to this file:
/** -[insert name]
/** --[insert additions descriptions]
/**
/** -Halloween (08/30/05)
/** --Paladin full alignment formula
/** --Enable full alignment radio for paladins
/**
/** -Halloween (08/25/05)
/** --Display bonus bitmaps
/** --Disable full alignment radio for non-clerics
/**
/** Original copy by:
/** Halloween (06/15/05)
/**
/** All previous names must stay included when making additions.
/************************************************************************/

#include "stdafx.h"
#include "calc.h"
#include "calcDlg.h"
#include "calculator.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


//-------------------------------------------------------
// redo
//-------------------------------------------------------
void CCalcDlg::redo() 
{	
	//show full alignment radio
	m_fullButton.EnableWindow( FALSE );
	if ( classNumber == 3 || classNumber == 2 ) { m_fullButton.EnableWindow( TRUE ); }
	
	//write class name to label
	if ( classNumber == 0 ){ m_classShow.SetWindowText( "Fighter" ); }
	if ( classNumber == 1 ){ m_classShow.SetWindowText( "Ranger" ); }
	if ( classNumber == 2 ){ m_classShow.SetWindowText( "Paladin" ); }
	if ( classNumber == 3 ){ m_classShow.SetWindowText( "Cleric" ); }
	if ( classNumber == 4 ){ m_classShow.SetWindowText( "Wizard" ); }
	if ( classNumber == 5 ){ m_classShow.SetWindowText( "Warlock" ); }
	if ( classNumber == 6 ){ m_classShow.SetWindowText( "Druid" ); }
	if ( classNumber == 7 ){ m_classShow.SetWindowText( "Darkwar" ); }
	if ( classNumber == 8 ){ m_classShow.SetWindowText( "Barbarian" ); }
	
	//enable jeloc shrines after turning level 36+
	//but not if sixth shrine is selected
	if ( lvl >= 36 && JELOC == FALSE )
	{
		m_sixthJeloc.EnableWindow( TRUE );
		m_strengthJeloc.EnableWindow( TRUE );
		m_agilityJeloc.EnableWindow( TRUE );
		m_constitutionJeloc.EnableWindow( TRUE );
		m_intelligenceJeloc.EnableWindow( TRUE );
		m_wisdomJeloc.EnableWindow( TRUE );
	}
	
	//write statArray to text boxes (needed when using -/+ buttons)
	m_lvlIn.SetWindowText( itoa( lvl,buffer,10) );
	m_strIn.SetWindowText( itoa( statArray[0], buffer, 10 ) );
	m_agilIn.SetWindowText( itoa( statArray[1], buffer, 10 ) );
	m_consIn.SetWindowText( itoa( statArray[2], buffer, 10 ) );
	m_intelIn.SetWindowText( itoa( statArray[3], buffer, 10 ) );
	m_wisIn.SetWindowText( itoa( statArray[4], buffer, 10 ) );
	
	//determine points actual/used/remaining, and write to labels
	actualPoints = 75+(lvl-1);
	usedPoints = ( statArray[0]+statArray[1]+statArray[2]+statArray[3]+statArray[4] )-( shrineArray[0]+shrineArray[1]+shrineArray[2]+shrineArray[3]+shrineArray[4] );
	remainingPoints = actualPoints-usedPoints;
	m_actual.SetWindowText( itoa( actualPoints, buffer, 10 ) );
	m_used.SetWindowText( itoa( usedPoints, buffer, 10 ) );
	m_remain.SetWindowText( itoa( remainingPoints, buffer, 10 ) );
	
	calculator * calcN;
	double clericFull = 1.624;
	double paladinFull = 1.624;
	
	//calculate health and mana for 0 bases
	calcN = new calculator( classNumber,lvl,0,0,statArray[0],statArray[1],statArray[2],statArray[3],statArray[4] );
	m_hpbase.SetWindowText( itoa( calcN->getHealth( ), buffer, 10 ) );
	if ( m_fullButton.GetCheck( ) == TRUE ) {
		if ( classNumber == 3 ){ m_mpbase.SetWindowText( itoa( ( int )( calcN->getMana( ) * clericFull ), buffer, 10 ) ); }
		else if ( classNumber == 2 ){ m_mpbase.SetWindowText( itoa( ( int )( calcN->getMana( ) * paladinFull ), buffer, 10 ) ); }
	} else { m_mpbase.SetWindowText( itoa( calcN->getMana(), buffer, 10 ) ); }
	
	//calculate health and mana for +1 bases
	calcN = new calculator( classNumber,lvl,1,1,statArray[0],statArray[1],statArray[2],statArray[3],statArray[4] );
	m_hpone.SetWindowText( itoa( calcN->getHealth( ), buffer, 10 ) );
	if ( m_fullButton.GetCheck( ) == TRUE ) {
		if ( classNumber == 3 ){ m_mpone.SetWindowText( itoa( ( int )( calcN->getMana( ) * clericFull ), buffer, 10 ) ); }
		else if ( classNumber == 2 ){ m_mpone.SetWindowText( itoa( ( int )( calcN->getMana( ) *  paladinFull ), buffer, 10 ) ); }
	} else { m_mpone.SetWindowText( itoa( calcN->getMana( ), buffer, 10 ) ); }
	
	//calculate health and mana for +2 bases
	calcN = new calculator( classNumber,lvl,2,2,statArray[0],statArray[1],statArray[2],statArray[3],statArray[4] );
	m_hptwo.SetWindowText( itoa( calcN->getHealth( ), buffer, 10 ) );
	if ( m_fullButton.GetCheck( ) == TRUE ) {
		if ( classNumber == 3 ){ m_mptwo.SetWindowText( itoa( ( int )( calcN->getMana( ) * clericFull ), buffer, 10 ) ); }
		else if ( classNumber == 2 ){ m_mptwo.SetWindowText( itoa( ( int )( calcN->getMana( ) *  paladinFull ), buffer, 10 ) ); }
	} else { m_mptwo.SetWindowText( itoa( calcN->getMana( ), buffer, 10 ) ); }
	
	//calculate health and mana for +3 bases
	calcN = new calculator( classNumber,lvl,3,3,statArray[0],statArray[1],statArray[2],statArray[3],statArray[4] );
	m_hpthree.SetWindowText( itoa( calcN->getHealth( ), buffer, 10 ) );
	if ( m_fullButton.GetCheck( ) == TRUE ) {
		if ( classNumber == 3 ){ m_mpthree.SetWindowText( itoa( ( int )( calcN->getMana( ) * clericFull ), buffer, 10 ) ); }
		else if ( classNumber == 2 ){ m_mpthree.SetWindowText( itoa( ( int )( calcN->getMana( ) *  paladinFull ), buffer, 10 ) ); }
	} else { m_mpthree.SetWindowText( itoa( calcN->getMana( ), buffer, 10 ) ); }
		  
	//calculate health and mana for +4 bases
	calcN = new calculator( classNumber,lvl,4,4,statArray[0],statArray[1],statArray[2],statArray[3],statArray[4] );
	m_hpfour.SetWindowText( itoa( calcN->getHealth( ), buffer, 10 ) );
	if ( m_fullButton.GetCheck( ) == TRUE ) {
		if ( classNumber == 3 ){ m_mpfour.SetWindowText( itoa( ( int )( calcN->getMana( ) * clericFull ), buffer, 10 ) ); }
		else if ( classNumber == 2 ){ m_mpfour.SetWindowText( itoa( ( int )( calcN->getMana( ) *  paladinFull ), buffer, 10 ) ); }
	} else { m_mpfour.SetWindowText( itoa( calcN->getMana( ), buffer, 10 ) ); }
		  
	//calculate health and mana for +5 bases
	calcN = new calculator( classNumber,lvl,5,5,statArray[0],statArray[1],statArray[2],statArray[3],statArray[4] );
	m_hpfive.SetWindowText( itoa( calcN->getHealth( ), buffer, 10 ) );
	if ( m_fullButton.GetCheck( ) == TRUE ) {
		if ( classNumber == 3 ){ m_mpfive.SetWindowText( itoa( ( int )( calcN->getMana( ) * clericFull ), buffer, 10 ) ); }
		else if ( classNumber == 2 ){ m_mpfive.SetWindowText( itoa( ( int )( calcN->getMana( ) *  paladinFull ), buffer, 10 ) ); }
	} else { m_mpfive.SetWindowText( itoa( calcN->getMana( ), buffer, 10 ) ); }
		  
	//calculate health and mana for +6 bases
	calcN = new calculator( classNumber,lvl,6,6,statArray[0],statArray[1],statArray[2],statArray[3],statArray[4] );
	m_hpsix.SetWindowText( itoa( calcN->getHealth( ), buffer, 10 ) );
	if ( m_fullButton.GetCheck( ) == TRUE ) {
		if ( classNumber == 3 ){ m_mpsix.SetWindowText( itoa( ( int )( calcN->getMana( ) * clericFull ), buffer, 10 ) ); }
		else if ( classNumber == 2 ){ m_mpsix.SetWindowText( itoa( ( int )( calcN->getMana( ) *  paladinFull ), buffer, 10 ) ); }
	} else { m_mpsix.SetWindowText( itoa( calcN->getMana( ), buffer, 10 ) ); }
		  
	//calculate health and mana for +7 bases
	calcN = new calculator( classNumber,lvl,7,7,statArray[0],statArray[1],statArray[2],statArray[3],statArray[4] );
	m_hpseven.SetWindowText( itoa( calcN->getHealth( ), buffer, 10 ) );
	if ( m_fullButton.GetCheck( ) == TRUE ) {
		if ( classNumber == 3 ){ m_mpseven.SetWindowText( itoa( ( int )( calcN->getMana( ) * clericFull ), buffer, 10 ) ); }
		else if ( classNumber == 2 ){ m_mpseven.SetWindowText( itoa( ( int )( calcN->getMana( ) *  paladinFull ), buffer, 10 ) ); }
	} else { m_mpseven.SetWindowText( itoa( calcN->getMana( ), buffer, 10 ) ); }
		  
	//calculate health and mana for +8 bases
	calcN = new calculator( classNumber,lvl,8,8,statArray[0],statArray[1],statArray[2],statArray[3],statArray[4] );
	m_hpeight.SetWindowText( itoa( calcN->getHealth( ), buffer, 10 ) );
	if ( m_fullButton.GetCheck( ) == TRUE ) {
		if ( classNumber == 3 ){ m_mpeight.SetWindowText( itoa( ( int )( calcN->getMana( ) * clericFull ) , buffer, 10 ) ); }
		else if ( classNumber == 2 ){ m_mpeight.SetWindowText( itoa( ( int )( calcN->getMana( ) *  paladinFull ), buffer, 10 ) ); }
	} else { m_mpeight.SetWindowText( itoa( calcN->getMana( ), buffer, 10 ) ); }
	
	//display the spells for the current level
	CCalcDlg::spells( classNumber,lvl );
	
	//display the experience needed to get to the current level
	m_experienceShow.SetWindowText( CCalcDlg::exp( lvl ) );	
	
	//reset bonus bmps
	m_strBMP.ShowWindow( FALSE );
	m_agilBMP.ShowWindow( FALSE );
	m_consBMP.ShowWindow( FALSE );
	m_intelBMP.ShowWindow( FALSE );
	m_wisBMP.ShowWindow( FALSE );
	CCalcDlg::showBonus( );
}
