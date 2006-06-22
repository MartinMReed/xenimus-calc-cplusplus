/************************************************************************/
/** CPlusPlus Stat Calculator
/** Xenimus Open Source Group
/**
/** Additons to this file:
/** -[insert name]
/** --[insert additions descriptions]
/**
/** Original copy by:
/** Halloween (06/15/05 )
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
// EXPERIENCE
//-------------------------------------------------------
LPCTSTR CCalcDlg::exp( int level )
{
	if ( level == 1 )
	{ return "0"; }
	
	else if ( level == 2 )
	{ return "200"; }
	
	else if ( level == 3 )
	{ return "1,000"; }
	
	else if ( level == 4 )
	{ return "2,000"; }
	
	else if ( level == 5 )
	{ return "4,000"; }
	
	else if ( level == 6 )
	{ return "7,000"; }
	
	else if ( level == 7 )
	{ return "12,000"; }
	
	else if ( level == 8 )
	{ return "22,000"; }
	
	else if ( level == 9 )
	{ return "35,000"; }
	
	else if ( level == 10 )
	{ return "50,000"; }
	
	else if ( level == 11 )
	{ return "70,000"; }
	
	else if ( level == 12 )
	{ return "100,000"; }
	
	else if ( level == 13 )
	{ return "150,000"; }
	
	else if ( level == 14 )
	{ return "250,000"; }
	
	else if ( level == 15 )
	{ return "450,000"; }
	
	else if ( level == 16 )
	{ return "750,000"; }
	
	else if ( level == 17 )
	{ return "1,250,000"; }
	
	else if ( level == 18 )
	{ return "1,750,000"; }
	
	else if ( level == 19 )
	{ return "2,250,000"; }
	
	else if ( level == 20 )
	{ return "2,750,000"; }
	
	else if ( level == 21 )
	{ return "3,500,000"; }
	
	else if ( level == 22 )
	{ return "4,250,000"; }
	
	else if ( level == 23 )
	{ return "5,000,000"; }
	
	else if ( level == 24 )
	{ return "6,000,000"; }
	
	else if ( level == 25 )
	{ return "7,000,000"; }
	
	else if ( level == 26 )
	{ return "8,000,000"; }
	
	else if ( level == 27 )
	{ return "10,000,000"; }
	
	else if ( level == 28 )
	{ return "12,000,000"; }
	
	else if ( level == 29 )
	{ return "14,500,000"; }
	
	else if ( level == 30 )
	{ return "17,000,000"; }
	
	else if ( level == 31 )
	{ return "19,500,000"; }
	
	else if ( level == 32 )
	{ return "22,000,000"; }
	
	else if ( level == 33 )
	{ return "25,000,000"; }
	
	else if ( level == 34 )
	{ return "28,000,000"; }
	
	else if ( level == 35 )
	{ return "32,000,000"; }
	
	else if ( level == 36 )
	{ return "37,000,000"; }
	
	else if ( level == 37 )
	{ return "42,000,000"; }
	
	else if ( level == 38 )
	{ return "48,000,000"; }
	
	else if ( level == 39 )
	{ return "54,000,000"; }
	
	else if ( level == 40 )
	{ return "60,000,000"; }
	
	else if ( level == 41 )
	{ return "67,000,000"; }
	
	else if ( level == 42 )
	{ return "74,000,000"; }
	
	else if ( level == 43 )
	{ return "82,000,000"; }
	
	else if ( level == 44 )
	{ return "90,000,000"; }
	
	else if ( level == 45 )
	{ return "98,000,000"; }
	
	else if ( level == 46 )
	{ return "108,000,000"; }
	
	else if ( level == 47 )
	{ return "118,000,000"; }
	
	else if ( level == 48 )
	{ return "130,000,000"; }
	
	else if ( level == 49 )
	{ return "150,000,000"; }
	
	else if ( level == 50 )
	{ return "160,000,000"; }
	
	else if ( level == 51 )
	{ return "180,000,000"; }
	
	else if ( level == 52 )
	{ return "200,000,000"; }
	
	else if ( level == 53 )
	{ return "230,000,000"; }
	
	else if ( level == 54 )
	{ return "260,000,000"; }
	
	else if ( level == 55 )
	{ return "290,000,000"; }
	
	else if ( level == 56 )
	{ return "320,000,000"; }
	
	else if ( level == 57 )
	{ return "350,500,000"; }
	
	else if ( level == 58 )
	{ return "400,000,000"; }
	
	else if ( level == 59 )
	{ return "450,000,000"; }
	
	else if ( level == 60 )
	{ return "500,000,000"; }
	
	else if ( level == 61 )
	{ return "600,000,000"; }
	
	else if ( level == 62 )
	{ return "700,000,000"; }
	
	else if ( level == 63 )
	{ return "800,000,000"; }
	
	else if ( level == 64 )
	{ return "1,000,000,000"; }
	
	else if ( level == 65 )
	{ return "1,200,000,000"; }
	
	else { return "?,???,???,???"; }
}
