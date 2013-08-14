/************************************************************************/
/** CPlusPlus Stat Calculator
/** Xenimus Open Source Group
/**
/** Additons to this file:
/** -[insert name]
/** --[insert additions descriptions]
/**
/** -Halloween (10/16/05)
/** --Adjusted +bases to account for Xenimus 1.83 update
/**
/** -Halloween (08/25/05)
/** --Display bonus bitmaps
/** --Removed all starter help functions
/**
/** Original copy by:
/** Halloween (06/15/05)
/**
/** All previous names must stay included when making additions.
/************************************************************************/
// calcDlg.h : header file
//

#if !defined(AFX_CALCDLG_H__9982A07C_AD16_40D9_BCC0_C0CD3CC092D4__INCLUDED_)
#define AFX_CALCDLG_H__9982A07C_AD16_40D9_BCC0_C0CD3CC092D4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


/////////////////////////////////////////////////////////////////////////////
// CCalcDlg dialog



class CCalcDlg : public CDialog
{
	// Construction
public:
	CCalcDlg(CWnd* pParent = NULL);	// standard constructor
	
	// Dialog Data
	//{{AFX_DATA(CCalcDlg)
	enum { IDD = IDD_CALC_DIALOG };
	CButton	m_hphuman;
	CButton	m_mphuman;
	CEdit	m_mpweapIn;
	CEdit	m_mpringIn;
	CEdit	m_mphelmIn;
	CEdit	m_mpgloveIn;
	CEdit	m_mparmorIn;
	CEdit	m_hpweapIn;
	CEdit	m_hpringIn;
	CEdit	m_hphelmIn;
	CEdit	m_hpgloveIn;
	CEdit	m_hparmorIn;
	CStatic	m_helmLabel;
	CStatic	m_mpextra;
	CStatic	m_hpextra;
	CEdit	m_saveIn;
	CListBox	m_loadList;
	CStatic	m_strBMP;
	CStatic	m_agilBMP;
	CStatic	m_consBMP;
	CStatic	m_intelBMP;
	CStatic	m_wisBMP;
	CListBox	m_spellList;
	CButton	m_fullButton;
	CButton	m_neutralButton;
	CButton	m_ghShrine;
	CButton	m_consPlus;
	CButton	m_consMinus;
	CButton	m_agilPlus;
	CButton	m_agilMinus;
	CButton	m_classPlus;
	CButton	m_classMinus;
	CEdit	m_lvlIn;
	CEdit	m_wisIn;
	CEdit	m_intelIn;
	CEdit	m_consIn;
	CEdit	m_agilIn;
	CEdit	m_strIn;
	CButton	m_wisdomJeloc;
	CButton	m_intelligenceJeloc;
	CButton	m_constitutionJeloc;
	CButton	m_agilityJeloc;
	CButton	m_strengthJeloc;
	CButton	m_wisdomShrine;
	CButton	m_intelligenceShrine;
	CButton	m_constitutionShrine;
	CButton	m_agilityShrine;
	CButton	m_strengthShrine;
	CButton	m_sixthJeloc;
	CStatic	m_actual;
	CStatic	m_used;
	CStatic	m_remain;
	CStatic	m_classShow;
	CStatic	m_hpbase;
	CStatic	m_mpbase;
	CStatic	m_experienceShow;
	//}}AFX_DATA
	
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCalcDlg)
protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL
	
	// Implementation
protected:
	HICON m_hIcon;
	
	/************************************************************************/
	/** Set initial values
	/************************************************************************/
	/**/
	/**  LPCTSTR mfc_string;
	/**/ 
	/**  used for a bunch of things, mostly to convert int to string
	/**/ char buffer[256];
	/**/ 
	/**/ int classNumber;
	/**/ int lvl;
	/**/ 
	/**  [0]str, [1]agil, [2]cons, [3]intel, [4]wis
	/**/ int statArray[5];
	/**/ int shrineArray[5];
	/**/
	/**  [0]helm, [1]armor, [2]glove, [3]weap, [4]ring
	/**/ int hpBaseArray[6];
	/**/ int mpBaseArray[6];
	/**/ 
	/**/ int remainingPoints;
	/**/ int actualPoints;
	/**/ int usedPoints;
	/**/ 
	/**/ bool selectAllShrines;
	/**/ bool selectAllJeloc;
	/**/ bool JELOC;
	/**/ 
	/**  redraw / recalculate / redo everything
	/**/ void redo( );
	/**/ 
	/**  used for experience
	/**/ LPCTSTR exp( int level );
	/**/ 
	/**  used for spells
	/**/ void spells ( int cla, int level );
	/**/ 
	/**  used to change stats
	/**/ void statMinus( int i );
	/**/ void statPlus( int i );
	/**/ 
	/**  used to display bonus bitmaps
	/**/ void showBonus( );
	/**/ int isBonus( int n );
	/**/ 
	/**  look for dat files
	/**/ void ReadDATs( );
	/**/
	/************************************************************************/
	/** end
	/************************************************************************/
	
	// Generated message map functions
	//{{AFX_MSG(CCalcDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void jelocButton_click();
	afx_msg void OnFileExit();
	afx_msg void Onreset();
	afx_msg void OnsixthJeloc();
	afx_msg void OnstrengthJeloc();
	afx_msg void OnagilityJeloc();
	afx_msg void OnconstitutionJeloc();
	afx_msg void OnintelligenceJeloc();
	afx_msg void OnwisdomJeloc();
	afx_msg void OnshrineButton();
	afx_msg void OnghShrine();
	afx_msg void OnstrengthShrine();
	afx_msg void OnagilityShrine();
	afx_msg void OnconstitutionShrine();
	afx_msg void OnintelligenceShrine();
	afx_msg void OnwisdomShrine();
	afx_msg void OnneutralButton();
	afx_msg void OnfullButton();
	afx_msg void OnstrMinus();
	afx_msg void OnstrPlus();
	afx_msg void OnagilMinus();
	afx_msg void OnagilPlus();
	afx_msg void OnconsMinus();
	afx_msg void OnconsPlus();
	afx_msg void OnintelMinus();
	afx_msg void OnintelPlus();
	afx_msg void OnwisMinus();
	afx_msg void OnwisPlus();
	afx_msg void OnlevelMinus();
	afx_msg void OnlevelPlus();
	afx_msg void OnclassMinus();
	afx_msg void OnclassPlus();
	afx_msg void OnKillfocuslvlIn();
	afx_msg void OnKillfocusstrIn();
	afx_msg void OnKillfocusagilIn();
	afx_msg void OnKillfocusconsIn();
	afx_msg void OnKillfocusintelIn();
	afx_msg void OnKillfocuswisIn();
	afx_msg void OnloadButton();
	afx_msg void OnsaveButton();
	afx_msg void OnButton1();
	afx_msg void OndeleteButton();
	afx_msg void OnKillfocushparmorIn();
	afx_msg void OnKillfocushpgloveIn();
	afx_msg void OnKillfocushphelmIn();
	afx_msg void OnKillfocushpringIn();
	afx_msg void OnKillfocushpweapIn();
	afx_msg void OnKillfocusmparmorIn();
	afx_msg void OnKillfocusmpgloveIn();
	afx_msg void OnKillfocusmphelmIn();
	afx_msg void OnKillfocusmpringIn();
	afx_msg void OnKillfocusmpweapIn();
	afx_msg void Onhphuman();
	afx_msg void Onmphuman();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALCDLG_H__9982A07C_AD16_40D9_BCC0_C0CD3CC092D4__INCLUDED_)
