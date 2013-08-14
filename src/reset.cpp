/************************************************************************/
/** CPlusPlus Stat Calculator
/** Xenimus Open Source Group
/**
/** Additons to this file:
/** -[insert name]
/** --[insert additions descriptions]
/**
/** -Halloween (08/25/05)
/** --Reset the saveIn input
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
// CLEAR / RESET
//-------------------------------------------------------
void CCalcDlg::Onreset() 
{
	//unckeck all regular shrines
	m_strengthShrine.SetCheck( FALSE );
	m_agilityShrine.SetCheck( FALSE );
	m_constitutionShrine.SetCheck( FALSE );
	m_intelligenceShrine.SetCheck( FALSE );
	m_wisdomShrine.SetCheck( FALSE );
	m_ghShrine.SetCheck( FALSE );
	
	//unckeck all jeloc shrines
	m_sixthJeloc.SetCheck( FALSE );;
	m_strengthJeloc.SetCheck( FALSE );
	m_agilityJeloc.SetCheck( FALSE );
	m_constitutionJeloc.SetCheck( FALSE );
	m_intelligenceJeloc.SetCheck( FALSE );
	m_wisdomJeloc.SetCheck( FALSE );
	
	//disable all jeloc shrines
	m_sixthJeloc.EnableWindow( FALSE );
	m_strengthJeloc.EnableWindow( FALSE );
	m_agilityJeloc.EnableWindow( FALSE );
	m_constitutionJeloc.EnableWindow( FALSE );
	m_intelligenceJeloc.EnableWindow( FALSE );
	m_wisdomJeloc.EnableWindow( FALSE );
	
	selectAllShrines = FALSE;
	JELOC = FALSE;
	selectAllJeloc = FALSE;
	
	//reset everything to its initial values
	classNumber = 0;
	lvl = 1;
	statArray[0] = 10;  shrineArray[0] = 0;
	statArray[1] = 10;  shrineArray[1] = 0;
	statArray[2] = 10;  shrineArray[2] = 0;
	statArray[3] = 10;  shrineArray[3] = 0;
	statArray[4] = 10;  shrineArray[4] = 0;
	
	m_neutralButton.SetCheck( TRUE );
	m_fullButton.SetCheck( FALSE );
	
	m_saveIn.SetWindowText( "Character Name" );
	
	CCalcDlg::redo();
}
