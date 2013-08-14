/************************************************************************/
/** CPlusPlus Stat Calculator
/** Xenimus Open Source Group
/**
/** Additons to this file:
/** -[insert name]
/** --[insert additions descriptions]
/**
/** -Halloween (10/16/05)
/** --Save +%bases to account for Xenimus 1.83 update
/**
/** Original copy by:
/** Halloween (08/25/05)
/**
/** All previous names must stay included when making additions.
/************************************************************************/

#include "stdafx.h"
#include "calc.h"
#include "calcDlg.h"

#include <shlobj.h>


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


//-------------------------------------------------------
// LOOK FOR DAT FILES
//-------------------------------------------------------
void CCalcDlg::ReadDATs( ) 
{  
	//clear the list box
	m_loadList.ResetContent( );
	
	//declare all needed handles     
    WIN32_FIND_DATA FindFileData;     
    HANDLE hFind;            
	
	//find dat files
	hFind = FindFirstFile ( "*.dat", &FindFileData );
	
    //use a do/while so we process whatever FindFirstFile returned     
    do     
    {         
        //is it valid?         
        if ( hFind != INVALID_HANDLE_VALUE )         
        {             
            //Is it a . or .. directory? If it is, skip, or we'll go forever.             
            if ( ! ( strcmp( FindFileData.cFileName, "." ) ) || 
                ! ( strcmp( FindFileData.cFileName, ".." ) ) )             
            {                 
                continue;             
            }
			
			//if SetCurrentDirectory Succeeds, then it is a folder
			if ( !SetCurrentDirectory( FindFileData.cFileName ) )             
			{
				//add the file name to the loadList
				CString beforeStr;
				beforeStr = FindFileData.cFileName;
				CString afterStr;
				
				for ( int i = 0; i < beforeStr.GetLength( )-4; i++)
				{
					afterStr += beforeStr[i];
				}
				
				m_loadList.AddString( afterStr );            
			} 
		}
	}
    while ( FindNextFile ( hFind, &FindFileData ) 
        && hFind != INVALID_HANDLE_VALUE );
    FindClose ( hFind );
}


//-------------------------------------------------------
// LOAD SAVED STATS
//-------------------------------------------------------
void CCalcDlg::OnloadButton( ) 
{
	CCalcDlg::Onreset( );
	
	//which position in the list box the user click on
	int sel = m_loadList.GetCurSel( );
	
	CString str;
	int n;
	
	//convert the string in the list box to a CString
	n = m_loadList.GetTextLen( sel );
    m_loadList.GetText( sel, str.GetBuffer( n ) );
    str.ReleaseBuffer( );
	
	//change the save input to the file name to be loaded
	m_saveIn.SetWindowText( str );
	
	FILE* in;
	in = fopen( str+".dat", "r" );
	
	if ( in != NULL )
	{
		int s[6];
		int j[6];
		
		//read the .dat file and save the info
		fscanf( in, "%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i",
			&classNumber, &lvl, &statArray[0], &statArray[1], &statArray[2], &statArray[3],
			&statArray[4], &shrineArray[0], &shrineArray[1], &shrineArray[2], &shrineArray[3],
			&shrineArray[4], &s[0], &s[1], &s[2], &s[3], &s[4], &s[5], &j[0], &j[1], &j[2],
			&j[3], &j[4], &j[5], &hpBaseArray[0], &hpBaseArray[1], &hpBaseArray[2], &hpBaseArray[3],
			&hpBaseArray[4], &hpBaseArray[5], &mpBaseArray[0], &mpBaseArray[1], &mpBaseArray[2],
			&mpBaseArray[3], &mpBaseArray[4], &mpBaseArray[5] );

		//human skills
		if ( mpBaseArray[5] == 6 ) { m_mphuman.SetCheck( 1 ); }
		if ( hpBaseArray[5] == 6 ) { m_hphuman.SetCheck( 1 ); }
		
		//check the shrines
		m_ghShrine.SetCheck( s[0] );
		m_strengthShrine.SetCheck( s[1] );
		m_agilityShrine.SetCheck( s[2] );
		m_constitutionShrine.SetCheck( s[3] );
		m_intelligenceShrine.SetCheck( s[4] );
		m_wisdomShrine.SetCheck( s[5] );
		
		//check and call the jeloc functions
		if ( j[0] == TRUE )
		{
			//sixth is checked, so check all the jeloc shrines too
			m_sixthJeloc.SetCheck( TRUE );
			CCalcDlg::OnsixthJeloc( );
			
			//calling the 6th jeloc function will add an extra 7 points not needed
			statArray[0]-=7; shrineArray[0]-=7;
			statArray[1]-=7; shrineArray[1]-=7;
			statArray[2]-=7; shrineArray[2]-=7;
			statArray[3]-=7; shrineArray[3]-=7;
			statArray[4]-=7; shrineArray[4]-=7;
		}
		else
		{
			//sixth was not checked, so only check the ones that were
			m_strengthJeloc.SetCheck( j[1] );
			m_agilityJeloc.SetCheck( j[2] );
			m_constitutionJeloc.SetCheck( j[3] );
			m_intelligenceJeloc.SetCheck( j[4] );
			m_wisdomJeloc.SetCheck( j[5] );
		}
		
		
		fclose( in );
		CCalcDlg::redo( );
	}
}


//-------------------------------------------------------
// SAVE STATS
//-------------------------------------------------------
void CCalcDlg::OnsaveButton( ) 
{
	//take the name out of the save input
	CString sve;
	m_saveIn.GetWindowText( sve );
	
	FILE *out;
	out = fopen( sve+".dat", "w" );
	
	if ( out != NULL )
	{
		//write the info to a dat file
		fprintf( out, "%i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i %i",
			classNumber,
			lvl,
			statArray[0],
			statArray[1],
			statArray[2],
			statArray[3],
			statArray[4],
			shrineArray[0],
			shrineArray[1],
			shrineArray[2],
			shrineArray[3],
			shrineArray[4],
			m_ghShrine.GetCheck( ),
			m_strengthShrine.GetCheck( ),
			m_agilityShrine.GetCheck( ),
			m_constitutionShrine.GetCheck( ),
			m_intelligenceShrine.GetCheck( ),
			m_wisdomShrine.GetCheck( ),
			m_sixthJeloc.GetCheck( ), 
			m_strengthJeloc.GetCheck( ),
			m_agilityJeloc.GetCheck( ), 
			m_constitutionJeloc.GetCheck( ),
			m_intelligenceJeloc.GetCheck( ), 
			m_wisdomJeloc.GetCheck( ),
			hpBaseArray[0],
			hpBaseArray[1],
			hpBaseArray[2],
			hpBaseArray[3],
			hpBaseArray[4],
			hpBaseArray[5],
			mpBaseArray[0],
			mpBaseArray[1],
			mpBaseArray[2],
			mpBaseArray[3],
			mpBaseArray[4],
			mpBaseArray[5] );
		
		fclose( out );
	}
	
	//refresh the list
	ReadDATs( );
}


//-------------------------------------------------------
// DELETE STATS
//-------------------------------------------------------
void CCalcDlg::OndeleteButton( ) 
{
	//which position in the list box the user click on
	int sel = m_loadList.GetCurSel( );
	
	CString str;
	int n;
	
	//convert the string in the list box to a CString
	n = m_loadList.GetTextLen( sel );
    m_loadList.GetText( sel, str.GetBuffer( n ) );
    str.ReleaseBuffer( );
	
	//delete the file choosen
	remove( str+".dat" );
	
	//refresh the list
	ReadDATs( );
}
