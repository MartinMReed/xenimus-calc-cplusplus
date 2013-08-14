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
	CListBox	m_spellList;
	CEdit	m_lvlIn;
	CButton	m_reset;
	CButton	m_BehockStarter;
	CButton	m_HumanStarter;
	CButton	m_ScallionStarter;
	CButton	m_GnomeStarter;
	CButton	m_ElfStarter;
	CButton	m_DregStarter;
	CButton	m_fullButton;
	CButton	m_neutralButton;
	CButton	m_ghShrine;
	CButton	m_shrineButton;
	CButton	m_jelocButton;
	CButton	m_wisPlus;
	CButton	m_wisMinus;
	CButton	m_intelPlus;
	CButton	m_intelMinus;
	CButton	m_consPlus;
	CButton	m_consMinus;
	CButton	m_agilPlus;
	CButton	m_agilMinus;
	CButton	m_strPlus;
	CButton	m_strMinus;
	CButton	m_levelPlus;
	CButton	m_levelMinus;
	CButton	m_classPlus;
	CButton	m_classMinus;
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
	CButton	m_actual;
	CButton	m_used;
	CButton	m_remain;
	CButton	m_classShow;
	CButton	m_hpbase;
	CButton	m_hpone;
	CButton	m_hptwo;
	CButton	m_hpthree;
	CButton	m_hpfour;
	CButton	m_hpfive;
	CButton	m_hpsix;
	CButton	m_hpseven;
	CButton	m_hpeight;
	CButton	m_mpbase;
	CButton	m_mpone;
	CButton	m_mptwo;
	CButton	m_mpthree;
	CButton	m_mpfour;
	CButton	m_mpfive;
	CButton	m_mpsix;
	CButton	m_mpseven;
	CButton	m_mpeight;
	CButton	m_experienceShow;
	CButton	m_statusBar;
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
	/**/ int starterMax[5];
	/**/ int starterMin[5];
	/**/ bool starterHelp;
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
	/**/ LPCTSTR exp(int level);
	/**/ 
	/**  used for spells
	/**/ void spells (int cla, int level);
	/**/ 
	/**  used to change stats
	/**/ void statMinus(int i);
	/**/ void statPlus(int i);
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
	afx_msg void OnDregStarter();
	afx_msg void OnElfStarter();
	afx_msg void OnGnomeStarter();
	afx_msg void OnScallionStarter();
	afx_msg void OnHumanStarter();
	afx_msg void OnBehockStarter();
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
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALCDLG_H__9982A07C_AD16_40D9_BCC0_C0CD3CC092D4__INCLUDED_)
