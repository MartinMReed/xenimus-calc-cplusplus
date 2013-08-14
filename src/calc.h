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
// calc.h : main header file for the CALC application
//

#if !defined(AFX_CALC_H__90BDD3D3_CC0A_4E57_9674_D6C6077F840F__INCLUDED_)
#define AFX_CALC_H__90BDD3D3_CC0A_4E57_9674_D6C6077F840F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols


/////////////////////////////////////////////////////////////////////////////
// CCalcApp:
// See calc.cpp for the implementation of this class
//

class CCalcApp : public CWinApp
{
public:
	CCalcApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCalcApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCalcApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALC_H__90BDD3D3_CC0A_4E57_9674_D6C6077F840F__INCLUDED_)
