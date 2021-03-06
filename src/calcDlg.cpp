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
/** --Removed all starter help functions
/**
/** Original copy by:
/** Halloween (06/15/05)
/**
/** All previous names must stay included when making additions.
/************************************************************************/
// calcDlg.cpp : implementation file
//

#include "stdafx.h"
#include "calc.h"
#include "calcDlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


/////////////////////////////////////////////////////////////////////////////
// CCalcDlg dialog

CCalcDlg::CCalcDlg(CWnd* pParent /*=NULL*/)
: CDialog(CCalcDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCalcDlg)
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCalcDlg)
	DDX_Control(pDX, hphuman, m_hphuman);
	DDX_Control(pDX, mphuman, m_mphuman);
	DDX_Control(pDX, mpweapIn, m_mpweapIn);
	DDX_Control(pDX, mpringIn, m_mpringIn);
	DDX_Control(pDX, mphelmIn, m_mphelmIn);
	DDX_Control(pDX, mpgloveIn, m_mpgloveIn);
	DDX_Control(pDX, mparmorIn, m_mparmorIn);
	DDX_Control(pDX, hpweapIn, m_hpweapIn);
	DDX_Control(pDX, hpringIn, m_hpringIn);
	DDX_Control(pDX, hphelmIn, m_hphelmIn);
	DDX_Control(pDX, hpgloveIn, m_hpgloveIn);
	DDX_Control(pDX, hparmorIn, m_hparmorIn);
	DDX_Control(pDX, helmLabel, m_helmLabel);
	DDX_Control(pDX, mpextra, m_mpextra);
	DDX_Control(pDX, hpextra, m_hpextra);
	DDX_Control(pDX, saveIn, m_saveIn);
	DDX_Control(pDX, loadList, m_loadList);
	DDX_Control(pDX, strBMP, m_strBMP);
	DDX_Control(pDX, agilBMP, m_agilBMP);
	DDX_Control(pDX, consBMP, m_consBMP);
	DDX_Control(pDX, intelBMP, m_intelBMP);
	DDX_Control(pDX, wisBMP, m_wisBMP);
	DDX_Control(pDX, spellList, m_spellList);
	DDX_Control(pDX, fullButton, m_fullButton);
	DDX_Control(pDX, neutralButton, m_neutralButton);
	DDX_Control(pDX, ghShrine, m_ghShrine);
	DDX_Control(pDX, consPlus, m_consPlus);
	DDX_Control(pDX, consMinus, m_consMinus);
	DDX_Control(pDX, agilPlus, m_agilPlus);
	DDX_Control(pDX, agilMinus, m_agilMinus);
	DDX_Control(pDX, classPlus, m_classPlus);
	DDX_Control(pDX, classMinus, m_classMinus);
	DDX_Control(pDX, lvlIn, m_lvlIn);
	DDX_Control(pDX, wisIn, m_wisIn);
	DDX_Control(pDX, intelIn, m_intelIn);
	DDX_Control(pDX, consIn, m_consIn);
	DDX_Control(pDX, agilIn, m_agilIn);
	DDX_Control(pDX, strIn, m_strIn);
	DDX_Control(pDX, wisdomJeloc, m_wisdomJeloc);
	DDX_Control(pDX, intelligenceJeloc, m_intelligenceJeloc);
	DDX_Control(pDX, constitutionJeloc, m_constitutionJeloc);
	DDX_Control(pDX, agilityJeloc, m_agilityJeloc);
	DDX_Control(pDX, strengthJeloc, m_strengthJeloc);
	DDX_Control(pDX, wisdomShrine, m_wisdomShrine);
	DDX_Control(pDX, intelligenceShrine, m_intelligenceShrine);
	DDX_Control(pDX, constitutionShrine, m_constitutionShrine);
	DDX_Control(pDX, agilityShrine, m_agilityShrine);
	DDX_Control(pDX, strengthShrine, m_strengthShrine);
	DDX_Control(pDX, sixthJeloc, m_sixthJeloc);
	DDX_Control(pDX, actual, m_actual);
	DDX_Control(pDX, used, m_used);
	DDX_Control(pDX, remain, m_remain);
	DDX_Control(pDX, classShow, m_classShow);
	DDX_Control(pDX, hpbase, m_hpbase);
	DDX_Control(pDX, mpbase, m_mpbase);
	DDX_Control(pDX, experienceShow, m_experienceShow);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CCalcDlg, CDialog)
//{{AFX_MSG_MAP(CCalcDlg)
ON_WM_PAINT()
ON_WM_QUERYDRAGICON()
ON_BN_CLICKED(jelocButton, jelocButton_click)
ON_COMMAND(ID_FILE_EXIT, OnFileExit)
ON_BN_CLICKED(reset, Onreset)
ON_BN_CLICKED(sixthJeloc, OnsixthJeloc)
ON_BN_CLICKED(strengthJeloc, OnstrengthJeloc)
ON_BN_CLICKED(agilityJeloc, OnagilityJeloc)
ON_BN_CLICKED(constitutionJeloc, OnconstitutionJeloc)
ON_BN_CLICKED(intelligenceJeloc, OnintelligenceJeloc)
ON_BN_CLICKED(wisdomJeloc, OnwisdomJeloc)
ON_BN_CLICKED(shrineButton, OnshrineButton)
ON_BN_CLICKED(ghShrine, OnghShrine)
ON_BN_CLICKED(strengthShrine, OnstrengthShrine)
ON_BN_CLICKED(agilityShrine, OnagilityShrine)
ON_BN_CLICKED(constitutionShrine, OnconstitutionShrine)
ON_BN_CLICKED(intelligenceShrine, OnintelligenceShrine)
ON_BN_CLICKED(wisdomShrine, OnwisdomShrine)
ON_BN_CLICKED(neutralButton, OnneutralButton)
ON_BN_CLICKED(fullButton, OnfullButton)
ON_BN_CLICKED(strMinus, OnstrMinus)
ON_BN_CLICKED(strPlus, OnstrPlus)
ON_BN_CLICKED(agilMinus, OnagilMinus)
ON_BN_CLICKED(agilPlus, OnagilPlus)
ON_BN_CLICKED(consMinus, OnconsMinus)
ON_BN_CLICKED(consPlus, OnconsPlus)
ON_BN_CLICKED(intelMinus, OnintelMinus)
ON_BN_CLICKED(intelPlus, OnintelPlus)
ON_BN_CLICKED(wisMinus, OnwisMinus)
ON_BN_CLICKED(wisPlus, OnwisPlus)
ON_BN_CLICKED(levelMinus, OnlevelMinus)
ON_BN_CLICKED(levelPlus, OnlevelPlus)
ON_BN_CLICKED(classMinus, OnclassMinus)
ON_BN_CLICKED(classPlus, OnclassPlus)
ON_EN_KILLFOCUS(lvlIn, OnKillfocuslvlIn)
ON_EN_KILLFOCUS(strIn, OnKillfocusstrIn)
ON_EN_KILLFOCUS(agilIn, OnKillfocusagilIn)
ON_EN_KILLFOCUS(consIn, OnKillfocusconsIn)
ON_EN_KILLFOCUS(intelIn, OnKillfocusintelIn)
ON_EN_KILLFOCUS(wisIn, OnKillfocuswisIn)
ON_BN_CLICKED(loadButton, OnloadButton)
ON_BN_CLICKED(saveButton, OnsaveButton)
ON_BN_CLICKED(deleteButton, OndeleteButton)
	ON_EN_KILLFOCUS(hparmorIn, OnKillfocushparmorIn)
	ON_EN_KILLFOCUS(hpgloveIn, OnKillfocushpgloveIn)
	ON_EN_KILLFOCUS(hphelmIn, OnKillfocushphelmIn)
	ON_EN_KILLFOCUS(hpringIn, OnKillfocushpringIn)
	ON_EN_KILLFOCUS(hpweapIn, OnKillfocushpweapIn)
	ON_EN_KILLFOCUS(mparmorIn, OnKillfocusmparmorIn)
	ON_EN_KILLFOCUS(mpgloveIn, OnKillfocusmpgloveIn)
	ON_EN_KILLFOCUS(mphelmIn, OnKillfocusmphelmIn)
	ON_EN_KILLFOCUS(mpringIn, OnKillfocusmpringIn)
	ON_EN_KILLFOCUS(mpweapIn, OnKillfocusmpweapIn)
	ON_BN_CLICKED(hphuman, Onhphuman)
	ON_BN_CLICKED(mphuman, Onmphuman)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCalcDlg message handlers

BOOL CCalcDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
	
	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	/************************************************************************/
	/** Set initial values
	/************************************************************************/
	/**/
	/**/ classNumber = 0;
	/**/ lvl = 1;
	/**/
	/**  stat points and addition points from shrines
	/**/ statArray[0] = 10;  shrineArray[0] = 0;  // Str
	/**/ statArray[1] = 10;  shrineArray[1] = 0;  // Agil
	/**/ statArray[2] = 10;  shrineArray[2] = 0;  // Cons
	/**/ statArray[3] = 10;  shrineArray[3] = 0;  // Intel
	/**/ statArray[4] = 10;  shrineArray[4] = 0;  // Wis
	/**/
	/**  extra hp and mp base from items
	/**/ hpBaseArray[0] = 8;  mpBaseArray[0] = 8;  // Helm
	/**/ hpBaseArray[1] = 0;  mpBaseArray[1] = 0;  // Armor
	/**/ hpBaseArray[2] = 0;  mpBaseArray[2] = 0;  // Glove
	/**/ hpBaseArray[3] = 8;  mpBaseArray[3] = 8;  // Weap
	/**/ hpBaseArray[4] = 36;  mpBaseArray[4] = 30;  // Ring
	/**/
	/**/ remainingPoints = 25;
	/**/ actualPoints = 75;
	/**/ usedPoints = 50;
	/**/
	/**/ selectAllShrines = FALSE;
	/**/ selectAllJeloc = FALSE;
	/**/ JELOC = FALSE;
	/**/
	/**  set alignment to neutral
	/**/ m_neutralButton.SetCheck( TRUE );
	/**/ m_fullButton.SetCheck( FALSE );
	/**/
	/**/ m_saveIn.SetWindowText( "Character Name" );
	/**/
	/**  look for .dat files
	/**/ CCalcDlg::ReadDATs( );	
	/**/ 
	/**/ CCalcDlg::redo( );	
	/**/
	/************************************************************************/
	/** end
	/************************************************************************/
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCalcDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting
		
		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);
		
		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;
		
		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCalcDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}
