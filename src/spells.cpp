/************************************************************************/
/** CPlusPlus Stat Calculator
/** Xenimus Open Source Group
/**
/** Additons to this file:
/** -[insert name]
/** --[insert additions descriptions]
/**
/** -Halloween (08/25/05 )
/** --Mana cost for Juxta changed, ones with "appox." were estimated (33% decrease)
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
// SPELLS
//-------------------------------------------------------
void CCalcDlg::spells ( int cla, int level )
{
	m_spellList.ResetContent( );
	
	if ( cla == 0 ) //[0]Fighter 
	{
		if ( level == 2 )
		{
			m_spellList.AddString( "Emissarius Nex (6 mp)" );
		}
		else if ( level == 3 )
		{
			m_spellList.AddString( "Double Slice (3 mp)" );
		}
		else if ( level == 4 )
		{
			m_spellList.AddString( "Minor Mederi (2 mp)" );
			m_spellList.AddString( "Nocte Visus (4 mp)" );
		}
		else if ( level == 5 )
		{
			m_spellList.AddString( "Minor Sanatio (3 mp)" );
			m_spellList.AddString( "Minor Tueri (3 mp)" );
			m_spellList.AddString( "Emissarius (6 mp)" );
			m_spellList.AddString( "Double Stab (8 mp)" );
		}
		else if ( level == 6 )
		{
			m_spellList.AddString( "Minor Flamma (3 mp)" );
			m_spellList.AddString( "Minor Stupefacere (3 mp)" );
			m_spellList.AddString( "Minor Velocitas (7 mp)" );
			m_spellList.AddString( "Nonne Sera (7 mp)" );
		}
		else if ( level == 7 )
		{
			m_spellList.AddString( "Tiron Tueri (5 mp)" );
			m_spellList.AddString( "Minor Robur (8 mp)" );
		}
		else if ( level == 8 )
		{
			m_spellList.AddString( "Tiron Stupefacere (5 mp)" );
			m_spellList.AddString( "Shield Bash (12 mp)" );
			m_spellList.AddString( "Mutatio Nimbus (12 mp)" );
			m_spellList.AddString( "Contra Magicus (16 mp)" );
		}
		else if ( level == 9 )
		{
			m_spellList.AddString( "Tiron Robur (10 mp)" );
			m_spellList.AddString( "Minor Extrudere (13 mp)" );
			m_spellList.AddString( "Contra Visus (18 mp)" );
		}
		else if ( level == 10 )
		{
			m_spellList.AddString( "Tiron Sanatio (6 mp)" );
		}
		else if ( level == 11 )
		{
			m_spellList.AddString( "Medius Stupefacere (15 mp)" );
			m_spellList.AddString( "Medius Tueri (15 mp)" );
		}
		else if ( level == 12 )
		{
			m_spellList.AddString( "Back Spin (15 mp)" );
			m_spellList.AddString( "Medius Robur (15 mp)" );
		}
		else if ( level == 13 )
		{
			m_spellList.AddString( "Medius Mederi (12 mp)" );
			m_spellList.AddString( "Sensus Scientia (13 mp)" );
			m_spellList.AddString( "Tiron Extrudere (18 mp)" );
		}
		else if ( level == 15 )
		{
			m_spellList.AddString( "Attack Run Minor (1 mp)" );
			m_spellList.AddString( "Magna Sanatio (10 mp)" );
			m_spellList.AddString( "Magna Tueri (35 mp)" );
		}
		else if ( level == 16 )
		{
			m_spellList.AddString( "Minor Spin (5 mp)" );
			m_spellList.AddString( "Medius Velocitas (7 mp)" );
		}
		else if ( level == 17 )
		{
			m_spellList.AddString( "Attack Run Tiron (2 mp)" );
			m_spellList.AddString( "Jump attack (20 mp)" );
		}
		else if ( level == 18 )
		{
			m_spellList.AddString( "Tiron Spin (10 mp)" );
		}
		else if ( level == 20 )
		{
			m_spellList.AddString( "Attack Run Medius (3 mp)" );
		}
		else if ( level == 21 )
		{
			m_spellList.AddString( "Medius Spin (15 mp)" );
			m_spellList.AddString( "Maximus Tueri (60 mp)" );
		}
		else if ( level == 23 )
		{
			m_spellList.AddString( "Stab & Slice (25 mp)" );
		}
		else if ( level == 24 )
		{
			m_spellList.AddString( "Attack Run Magna (5 mp)" );
		}
		else if ( level == 25 )
		{
			m_spellList.AddString( "Magna Spin (20 mp)" );
		}
		else if ( level == 27 )
		{
			m_spellList.AddString( "Ultim Tueri (100 mp)" );
		}
		else if ( level == 29 )
		{
			m_spellList.AddString( "Attack Run Maximus (10 mp)" );
		}
		else if ( level == 30 )
		{
			m_spellList.AddString( "Maximus Spin (25 mp)" );
			m_spellList.AddString( "Bash & Stab (30 mp)" );
		}
		else if ( level == 34 )
		{
			m_spellList.AddString( "Vis Tueri (150 mp)" );
		}
		else if ( level == 35 )
		{
			m_spellList.AddString( "Attack Run Ultim (15 mp)" );
		}
		else if ( level == 36 )
		{
			m_spellList.AddString( "Ultim Spin (30 mp)" );
		}
		else if ( level == 38 )
		{
			m_spellList.AddString( "Tornado Slice (35 mp)" );
		}
		else if ( level == 42 )
		{
			m_spellList.AddString( "Attack Run Ferocia (20 mp)" );
		}
		else if ( level == 43 )
		{
			m_spellList.AddString( "Ferocia Spin (35 mp)" );
			m_spellList.AddString( "Infinitus Tueri (200 mp)" );
		}
		else if ( level == 50 )
		{
			m_spellList.AddString( "Attack Run Infinitus (25 mp)" );
		}
		else if ( level == 51 )
		{
			m_spellList.AddString( "Infinitus Spin (40 mp)" );
		}
		else if ( level == 52 )
		{
			m_spellList.AddString( "Omni Tueri (250 mp)" );
		}
		else if ( level == 59 )
		{
			m_spellList.AddString( "Attack Run Omni (30 mp)" );
		}
		else if ( level == 60 )
		{
			m_spellList.AddString( "Omni Spin (45 mp)" );
		}
		else if ( level == 62 )
		{
			m_spellList.AddString( "Divinus Tueri (320 mp)" );
		}
		else if ( level == 69 )
		{
			m_spellList.AddString( "Attack Run Dirus (35 mp)" );
		}
		else if ( level == 70 )
		{
			m_spellList.AddString( "Dirus Spin (50 mp)" );
		}
		else if ( level == 75 )
		{
			m_spellList.AddString( "Adept Tueri (400 mp)" );
		}
		else if ( level == 81 )
		{
			m_spellList.AddString( "Attack Run Adept (40 mp)" );
		}
		else if ( level == 82 )
		{
			m_spellList.AddString( "Adept Spin (55 mp)" );
		}
	}
	else if ( cla == 1 ) //[1]Ranger 
	{
		if ( level == 1 )
		{
			m_spellList.AddString( "Hide Skill (0 mp)" );
		}
		else if ( level == 2 )
		{
			m_spellList.AddString( "Emissarius Nex (6 mp)" );
		}
		else if ( level == 3 )
		{
			m_spellList.AddString( "Double Slice (3 mp)" );
		}
		else if ( level == 4 )
		{
			m_spellList.AddString( "Minor Mederi (2 mp)" );
			m_spellList.AddString( "Nocte Visus (4 mp)" );
		}
		else if ( level == 5 )
		{
			m_spellList.AddString( "Minor Sanatio (3 mp)" );
			m_spellList.AddString( "Minor Tueri (3 mp)" );
			m_spellList.AddString( "Emissarius (6 mp)" );
			m_spellList.AddString( "Double Stab (8 mp)" );
		}
		else if ( level == 6 )
		{
			m_spellList.AddString( "Minor Flamma (3 mp)" );
			m_spellList.AddString( "Minor Stupefacere (3 mp)" );
			m_spellList.AddString( "Minor Velocitas (7 mp)" );
			m_spellList.AddString( "Nonne Sera (7 mp)" );
		}
		else if ( level == 7 )
		{
			m_spellList.AddString( "Tiron Tueri (5 mp)" );
			m_spellList.AddString( "Minor Robur (8 mp)" );
		}
		else if ( level == 8 )
		{
			m_spellList.AddString( "Tiron Stupefacere (5 mp)" );
			m_spellList.AddString( "Mutatio Nimbus (12 mp)" );
			m_spellList.AddString( "Multi Shot (15 mp)" );
			m_spellList.AddString( "Contra Magicus (16 mp)" );
		}
		else if ( level == 9 )
		{
			m_spellList.AddString( "Tiron Robur (10 mp)" );
			m_spellList.AddString( "Minor Extrudere (13 mp)" );
			m_spellList.AddString( "Contra Visus (18 mp)" );
		}
		else if ( level == 10 )
		{
			m_spellList.AddString( "Tiron Sanatio (6 mp)" );
			m_spellList.AddString( "Medius Tueri (15 mp)" );
		}
		else if ( level == 11 )
		{
			m_spellList.AddString( "Medius Stupefacere (15 mp)" );
		}
		else if ( level == 12 )
		{
			m_spellList.AddString( "Back Spin (15 mp)" );
			m_spellList.AddString( "Medius Robur (15 mp)" );
		}
		else if ( level == 13 )
		{
			m_spellList.AddString( "Medius Mederi (12 mp)" );
			m_spellList.AddString( "Sensus Scientia (13 mp)" );
			m_spellList.AddString( "Tiron Extrudere (18 mp)" );
		}
		else if ( level == 14 )
		{
			m_spellList.AddString( "Magna Tueri (35 mp)" );
		}
		else if ( level == 15 )
		{
			m_spellList.AddString( "Attack Run Minor (1 mp)" );
			m_spellList.AddString( "Magna Sanatio (10 mp)" );
		}
		else if ( level == 16 )
		{
			m_spellList.AddString( "Medius Velocitas (7 mp)" );
		}
		else if ( level == 17 )
		{
			m_spellList.AddString( "Attack Run Tiron (2 mp)" );
			m_spellList.AddString( "Jump attack (20 mp)" );
		}
		else if ( level == 19 )
		{
			m_spellList.AddString( "Maximus Tueri (60 mp)" );
		}
		else if ( level == 20 )
		{
			m_spellList.AddString( "Attack Run Medius (3 mp)" );
		}
		else if ( level == 23 )
		{
			m_spellList.AddString( "Stab & Slice (25 mp)" );
		}
		else if ( level == 24 )
		{
			m_spellList.AddString( "Attack Run Magna (5 mp)" );
		}
		else if ( level == 25 )
		{
			m_spellList.AddString( "Ultim Tueri (100 mp)" );
		}
		else if ( level == 29 )
		{
			m_spellList.AddString( "Attack Run Maximus (10 mp)" );
		}
		else if ( level == 32 )
		{
			m_spellList.AddString( "Vis Tueri (150 mp)" );
		}
		else if ( level == 35 )
		{
			m_spellList.AddString( "Attack Run Ultim (15 mp)" );
		}
		else if ( level == 38 )
		{
			m_spellList.AddString( "Tornado Slice (35 mp)" );
		}
		else if ( level == 40 )
		{
			m_spellList.AddString( "Infinitus Tueri (200 mp)" );
		}
		else if ( level == 42 )
		{
			m_spellList.AddString( "Attack Run Ferocia (20 mp)" );
		}
		else if ( level == 49 )
		{
			m_spellList.AddString( "Omni Tueri (250 mp)" );
		}
		else if ( level == 50 )
		{
			m_spellList.AddString( "Attack Run Infinitus (25 mp)" );
		}
		else if ( level == 59 )
		{
			m_spellList.AddString( "Attack Run Omni (30 mp)" );
			m_spellList.AddString( "Divinus Tueri (320 mp)" );
		}
		else if ( level == 69 )
		{
			m_spellList.AddString( "Attack Run Dirus (35 mp)" );
		}
		else if ( level == 71 )
		{
			m_spellList.AddString( "Adept Tueri (400 mp)" );
		}
		else if ( level == 81 )
		{
			m_spellList.AddString( "Attack Run Adept (40 mp)" );
		}
	}
	else if ( cla == 2 ) //[2]Paladin
	{
		if ( level == 1 )
		{
			m_spellList.AddString( "Minor Mederi (2 mp)" );
		}
		else if ( level == 2 )
		{
			m_spellList.AddString( "Minor Incantare (3 mp)" );
			m_spellList.AddString( "Minor Sanatio (3 mp)" );
			m_spellList.AddString( "Minor Tueri (3 mp)" );
			m_spellList.AddString( "Emissarius (6 mp)" );
			m_spellList.AddString( "Emissarius Nex (6 mp)" );
			m_spellList.AddString( "Obstare Malus (6 mp)" );
		}
		else if ( level == 3 )
		{
			m_spellList.AddString( "Double Slice (3 mp)" );
			m_spellList.AddString( "Minor Stupefacere (3 mp)" );
			m_spellList.AddString( "Minor Velocitas (7 mp)" );
			m_spellList.AddString( "Nonne Sera (7 mp)" );
		}
		else if ( level == 4 )
		{
			m_spellList.AddString( "Nocte Visus (4 mp)" );
			m_spellList.AddString( "Tiron Incantare (5 mp)" );
			m_spellList.AddString( "Tiron Tueri (5 mp)" );
			m_spellList.AddString( "Medius Mederi (12 mp)" );
		}
		else if ( level == 5 )
		{
			m_spellList.AddString( "Minor Omnimultum (3 mp)" );
			m_spellList.AddString( "Tiron Stupefacere (5 mp)" );
			m_spellList.AddString( "Tiron Sanatio (6 mp)" );
			m_spellList.AddString( "Double Stab (8 mp)" );
			m_spellList.AddString( "Contra Magicus (16 mp)" );
		}
		else if ( level == 6 )
		{
			m_spellList.AddString( "Minor Flamma (3 mp)" );
			m_spellList.AddString( "Minor Extrudere (13 mp)" );
			m_spellList.AddString( "Contra Visus (18 mp)" );
		}
		else if ( level == 7 )
		{
			m_spellList.AddString( "Minor Robur (8 mp)" );
			m_spellList.AddString( "Tiron Omnimultum (8 mp)" );
			m_spellList.AddString( "Medius Tueri (15 mp)" );
		}
		else if ( level == 8 )
		{
			m_spellList.AddString( "Magna Sanatio (10 mp)" );
			m_spellList.AddString( "Mutatio Nimbus (12 mp)" );
			m_spellList.AddString( "Shield Bash (12 mp)" );
			m_spellList.AddString( "Medius Incantare (15 mp)" );
			m_spellList.AddString( "Medius Stupefacere (15 mp)" );
			m_spellList.AddString( "Sensus Probus (17 mp)" );
			m_spellList.AddString( "Magna Mederi (30 mp)" );
		}
		else if ( level == 9 )
		{
			m_spellList.AddString( "Tiron Robur (10 mp)" );
		}
		else if ( level == 10 )
		{
			m_spellList.AddString( "Medius Omnimultum (15 mp)" );
			m_spellList.AddString( "Tiron Extrudere (18 mp)" );
			m_spellList.AddString( "Sensus Scientia (13 mp)" );
		}
		else if ( level == 11 )
		{
			m_spellList.AddString( "Magnus Sanatio (25 mp)" );
		}
		else if ( level == 12 )
		{
			m_spellList.AddString( "Back Spin (15 mp)" );
			m_spellList.AddString( "Medius Robur (15 mp)" );
			m_spellList.AddString( "Pergere Trans (24 mp)" );
			m_spellList.AddString( "Magna Tueri (35 mp)" );
			m_spellList.AddString( "Vis Mederi (85 mp)" );
		}
		else if ( level == 14 )
		{
			m_spellList.AddString( "Magna Omnimultum (25 mp)" );
		}
		else if ( level == 15 )
		{
			m_spellList.AddString( "Attack Run Minor (1 mp)" );
			m_spellList.AddString( "Medius Extrudere (26 mp)" );
		}
		else if ( level == 16 )
		{
			m_spellList.AddString( "Medius Velocitas (7 mp)" );
			m_spellList.AddString( "Ultim Sanatio (60 mp)" );
		}
		else if ( level == 17 )
		{
			m_spellList.AddString( "Attack Run Tiron (2 mp)" );
			m_spellList.AddString( "Jump attack (20 mp)" );
			m_spellList.AddString( "Maximus Tueri (60 mp)" );
		}
		else if ( level == 19 )
		{
			m_spellList.AddString( "Minor Spin (5 mp)" );
			m_spellList.AddString( "Maximus Omnimultum (35 mp)" );
		}
		else if ( level == 20 )
		{
			m_spellList.AddString( "Attack Run Medius (3 mp)" );
		}
		else if ( level == 21 )
		{
			m_spellList.AddString( "Tiron Spin (10 mp)" );
			m_spellList.AddString( "Magna Extrudere (35 mp)" );
		}
		else if ( level == 23 )
		{
			m_spellList.AddString( "Stab & Slice (25 mp)" );
			m_spellList.AddString( "Ultim Tueri (100 mp)" );
		}
		else if ( level == 24 )
		{
			m_spellList.AddString( "Attack Run Magna (5 mp)" );
			m_spellList.AddString( "Medius Spin (15 mp)" );
		}
		else if ( level == 25 )
		{
			m_spellList.AddString( "Ultim Omnimultum (50 mp)" );
		}
		else if ( level == 28 )
		{
			m_spellList.AddString( "Magna Spin (20 mp)" );
			m_spellList.AddString( "Maximus Extrudere (60 mp)" );
		}
		else if ( level == 29 )
		{
			m_spellList.AddString( "Attack Run Maximus (10 mp)" );
		}
		else if ( level == 30 )
		{
			m_spellList.AddString( "Bash & Stab (30 mp)" );
		}
		else if ( level == 31 )
		{
			m_spellList.AddString( "Vis Tueri (150 mp)" );
		}
		else if ( level == 32 )
		{
			m_spellList.AddString( "Vis Omnimultum (70 mp)" );
		}
		else if ( level == 33 )
		{
			m_spellList.AddString( "Maximus Spin (25 mp)" );
		}
		else if ( level == 35 )
		{
			m_spellList.AddString( "Attack Run Ultim (15 mp)" );
		}
		else if ( level == 38 )
		{
			m_spellList.AddString( "Tornado Slice (35 mp)" );
		}
		else if ( level == 39 )
		{
			m_spellList.AddString( "Ultim Spin (30 mp)" );
			m_spellList.AddString( "Infinitus Tueri (200 mp)" );
		}
		else if ( level == 40 )
		{
			m_spellList.AddString( "Animus Omnimultum (90 mp)" );
		}
		else if ( level == 42 )
		{
			m_spellList.AddString( "Attack Run Ferocia (20 mp)" );
		}
		else if ( level == 46 )
		{
			m_spellList.AddString( "Ferocia Spin (35 mp)" );
		}
		else if ( level == 48 )
		{
			m_spellList.AddString( "Omni Tueri (250 mp)" );
		}
		else if ( level == 49 )
		{
			m_spellList.AddString( "Infinitus Omnimultum (120 mp)" );
		}
		else if ( level == 50 )
		{
			m_spellList.AddString( "Attack Run Infinitus (25 mp)" );
		}
		else if ( level == 54 )
		{
			m_spellList.AddString( "Infinitus Spin (40 mp)" );
		}
		else if ( level == 59 )
		{
			m_spellList.AddString( "Attack Run Omni (30 mp)" );
			m_spellList.AddString( "Divinus Omnimultum (150 mp)" );
			m_spellList.AddString( "Divinus Tueri (320 mp)" );
		}
		else if ( level == 63 )
		{
			m_spellList.AddString( "Omni Spin (45 mp)" );
		}
		else if ( level == 69 )
		{
			m_spellList.AddString( "Attack Run Dirus (35 mp)" );
		}
		else if ( level == 71 )
		{
			m_spellList.AddString( "Adept Omnimultum (200 mp)" );
			m_spellList.AddString( "Adept Tueri (400 mp)" );
		}
		else if ( level == 73 )
		{
			m_spellList.AddString( "Dirus Spin (50 mp)" );
		}
		else if ( level == 81 )
		{
			m_spellList.AddString( "Attack Run Adept (40 mp)" );
		}
		else if ( level == 85 )
		{
			m_spellList.AddString( "Adept Spin (55 mp)" );
		}
	}
	else if ( cla == 3 ) //[3]Cleric
	{
		if ( level == 1 )
		{
			m_spellList.AddString( "Minor Mederi (2 mp)" );
		}
		else if ( level == 2 )
		{
			m_spellList.AddString( "Minor Incantare (3 mp)" );
			m_spellList.AddString( "Minor Flamma (3 mp)" );
			m_spellList.AddString( "Minor Sanatio (3 mp)" );
			m_spellList.AddString( "Minor Tueri (3 mp)" );
			m_spellList.AddString( "Emissarius (6 mp)" );
			m_spellList.AddString( "Emissarius Nex  (6 mp)" );
			m_spellList.AddString( "Obstare Malus (6 mp)" );
		}
		else if ( level == 3 )
		{
			m_spellList.AddString( "Minor Stupefacere (3 mp)" );
			m_spellList.AddString( "Minor Velocitas (7 mp)" );
			m_spellList.AddString( "Nonne Sera (7 mp)" );
		}
		else if ( level == 4 )
		{
			m_spellList.AddString( "Nocte Visus (4 mp)" );
			m_spellList.AddString( "Tiron Incantare (5 mp)" );
			m_spellList.AddString( "Tiron Tueri (5 mp)" );
			m_spellList.AddString( "Minor Glacialis Viscera (8 mp)" );
			m_spellList.AddString( "Medius Mederi (12 mp)" );
		}
		else if ( level == 5 )
		{
			m_spellList.AddString( "Tiron Stupefacere (5 mp)" );
			m_spellList.AddString( "Tiron Sanatio (6 mp)" );
			m_spellList.AddString( "Contra Magicus (16 mp)" );
			m_spellList.AddString( "Sensus Probus (17 mp)" );
		}
		else if ( level == 6 )
		{
			m_spellList.AddString( "Tiron Glacialis Viscera (10 mp)" );
			m_spellList.AddString( "Minor Extrudere (13 mp)" );
			m_spellList.AddString( "Contra Visus (18 mp)" );
			m_spellList.AddString( "Minor Fulgur (20 mp)" );
		}
		else if ( level == 7 )
		{
			m_spellList.AddString( "Minor Robur (8 mp)" );
			m_spellList.AddString( "Medius Tueri (15 mp)" );
			m_spellList.AddString( "Minor Glacialis Ventus (23 mp)" );
			m_spellList.AddString( "Arcessere Flamma (24 mp)" );
		}
		else if ( level == 8 )
		{
			m_spellList.AddString( "Magna Sanatio (10 mp)" );
			m_spellList.AddString( "Mutatio Nimbus (12 mp)" );
			m_spellList.AddString( "Medius Incantare (15 mp)" );
			m_spellList.AddString( "Medius Stupefacere (15 mp)" );
			m_spellList.AddString( "Tiron Extrudere (18 mp)" );
			m_spellList.AddString( "Tiron Fulgur (25 mp)" );
			m_spellList.AddString( "Magna Mederi (30 mp)" );
			m_spellList.AddString( "Minor Adgredi Animus (50 mp)" );
		}
		else if ( level == 9 )
		{
			m_spellList.AddString( "Tiron Robur (10 mp)" );
			m_spellList.AddString( "Medius Glacialis Viscera (15 mp)" );
			m_spellList.AddString( "Os Saltare (21 mp)" );
			m_spellList.AddString( "Tiron Glacialis Ventus (30 mp)" );
		}
		else if ( level == 10 )
		{
			m_spellList.AddString( "Sensus Scientia (13 mp)" );
			m_spellList.AddString( "Tiron Adgredi Animus (55 mp)" );
		}
		else if ( level == 11 )
		{
			m_spellList.AddString( "Magnus Sanatio (25 mp)" );
			m_spellList.AddString( "Medius Extrudere (26 mp)" );
			m_spellList.AddString( "Medius Fulgur (35 mp)" );
			m_spellList.AddString( "Creare Porta (85 mp)" );
		}
		else if ( level == 12 )
		{
			m_spellList.AddString( "Medius Robur (15 mp)" );
			m_spellList.AddString( "Pergere Trans (24 mp)" );
			m_spellList.AddString( "Magna Incantare (35 mp)" );
			m_spellList.AddString( "Magna Tueri (35 mp)" );
			m_spellList.AddString( "Medius Glacialis Ventus (40 mp)" );
			m_spellList.AddString( "Vis Mederi (85 mp)" );
		}
		else if ( level == 13 )
		{
			m_spellList.AddString( "Magnus Almus (0 mp)" );
			m_spellList.AddString( "Magna Glacialis Viscera (35 mp)" );
			m_spellList.AddString( "Medius Adgredi Animus (65 mp)" );
		}
		else if ( level == 15 )
		{
			m_spellList.AddString( "Magna Extrudere (35 mp)" );
			m_spellList.AddString( "Magna Fulgur (48 mp)" );
		}
		else if ( level == 16 )
		{
			m_spellList.AddString( "Medius Velocitas (7 mp)" );
			m_spellList.AddString( "Magna Robur (35 mp)" );
			m_spellList.AddString( "Magna Glacialis Ventus (50 mp)" );
			m_spellList.AddString( "Ultim Sanatio (60 mp)" );
		}
		else if ( level == 17 )
		{
			m_spellList.AddString( "Maximus Tueri (60 mp)" );
			m_spellList.AddString( "Magna Adgredi Animus (75 mp)" );
		}
		else if ( level == 18 )
		{
			m_spellList.AddString( "Maximus Incantare (60 mp)" );
		}
		else if ( level == 19 )
		{
			m_spellList.AddString( "Maximus Glacialis Viscera (60 mp)" );
		}
		else if ( level == 20 )
		{
			m_spellList.AddString( "Maximus Extrudere (60 mp)" );
			m_spellList.AddString( "Maximus Fulgur (60 mp)" );
			m_spellList.AddString( "Infinitus Mederi (120 mp)" );
		}
		else if ( level == 21 )
		{
			m_spellList.AddString( "Maximus Glacialis Ventus (60 mp)" );
			m_spellList.AddString( "Maximus Robur (60 mp)" );
		}
		else if ( level == 22 )
		{
			m_spellList.AddString( "Maximus Adgredi Animus (90 mp)" );
		}
		else if ( level == 23 )
		{
			m_spellList.AddString( "Ultim Tueri (100 mp)" );
		}
		else if ( level == 24 )
		{
			m_spellList.AddString( "Ultim Glacialis Viscera (100 mp)" );
			m_spellList.AddString( "Ultim Incantare (100 mp)" );
			m_spellList.AddString( "Animus Sanatio (150 mp)" );
		}
		else if ( level == 26 )
		{
			m_spellList.AddString( "Ultim Extrudere (100 mp)" );
			m_spellList.AddString( "Ultim Fulgur (100 mp)" );
		}
		else if ( level == 27 )
		{
			m_spellList.AddString( "Ultim Glacialis Ventus (100 mp)" );
			m_spellList.AddString( "Ultim Robur (100 mp)" );
		}
		else if ( level == 28 )
		{
			m_spellList.AddString( "Ultim Adgredi Animus (105 mp)" );
		}
		else if ( level == 30 )
		{
			m_spellList.AddString( "Praesentis Trans (200 mp)" );
		}
		else if ( level == 31 )
		{
			m_spellList.AddString( "Ferocia Glacialis Viscera (150 mp)" );
			m_spellList.AddString( "Vis Tueri (150 mp)" );
		}
		else if ( level == 32 )
		{
			m_spellList.AddString( "Ferocia Fulgur (150 mp)" );
		}
		else if ( level == 33 ){
			m_spellList.AddString( "Animus Extrudere (150 mp)" );
		}
		else if ( level == 34 )
		{
			m_spellList.AddString( "Animus Robur (150 mp)" );
			m_spellList.AddString( "Ferocia Glacialis Ventus (150 mp)" );
		}
		else if ( level == 35 )
		{
			m_spellList.AddString( "Vis Adgredi Animus (150 mp)" );
			m_spellList.AddString( "Infinitus Sanatio (220 mp)" );
		}
		else if ( level == 39 )
		{
			m_spellList.AddString( "Infinitus Glacialis Viscera (200 mp)" );
			m_spellList.AddString( "Infinitus Tueri (200 mp)" );
		}
		else if ( level == 40 )
		{
			m_spellList.AddString( "Omni Mederi (230 mp)" );
		}
		else if ( level == 41 )
		{
			m_spellList.AddString( "Infinitus Extrudere (200 mp)" );
			m_spellList.AddString( "Infinitus Fulgur (200 mp)" );
		}
		else if ( level == 42 )
		{
			m_spellList.AddString( "Infinitus Glacialis Ventus (200 mp)" );
		}
		else if ( level == 43 )
		{
			m_spellList.AddString( "Infinitus Adgredi Animus (200 mp)" );
		}
		else if ( level == 45 )
		{
			m_spellList.AddString( "Omni Sanatio (260 mp)" );
		}
		else if ( level == 48 )
		{
			m_spellList.AddString( "Omni Glacialis Viscera (250 mp)" );
			m_spellList.AddString( "Omni Tueri (250 mp)" );
		}
		else if ( level == 50 )
		{
			m_spellList.AddString( "Omni Extrudere (250 mp)" );
			m_spellList.AddString( "Omni Fulgur (250 mp)" );
		}
		else if ( level == 51 )
		{
			m_spellList.AddString( "Omni Glacialis Ventus (250 mp)" );
		}
		else if ( level == 52 )
		{
			m_spellList.AddString( "Omni Adgredi Animus (250 mp)" );
		}
		else if ( level == 55 )
		{
			m_spellList.AddString( "Divinus Sanatio (350 mp)" );
		}
		else if ( level == 58 )
		{
			m_spellList.AddString( "Dirus Glacialis Viscera (320 mp)" );
		}
		else if ( level == 59 )
		{
			m_spellList.AddString( "Divinus Tueri (320 mp)" );
		}
		else if ( level == 60 )
		{
			m_spellList.AddString( "Divinus Mederi (300 mp)" );
			m_spellList.AddString( "Dirus Fulgur (320 mp)" );
			m_spellList.AddString( "Divinus Extrudere (320 mp)" );
		}
		else if ( level == 61 )
		{
			m_spellList.AddString( "Dirus Glacialis Ventus (320 mp)" );
		}
		else if ( level == 62 )
		{
			m_spellList.AddString( "Dirus Adgredi Animus (320 mp)" );
		}
		else if ( level == 65 )
		{
			m_spellList.AddString( "Adept Sanatio (450 mp)" );
		}
		else if ( level == 68 )
		{
			m_spellList.AddString( "Adept Mederi (450 mp)" );
		}
		else if ( level == 70 )
		{
			m_spellList.AddString( "Adept Glacialis Viscera (400 mp)" );
		}
		else if ( level == 71 )
		{
			m_spellList.AddString( "Adept Tueri (400 mp)" );
		}
		else if ( level == 72 )
		{
			m_spellList.AddString( "Adept Extrudere (400 mp)" );
			m_spellList.AddString( "Adept Fulgur (400 mp)" );
		}
		else if ( level == 73 )
		{
			m_spellList.AddString( "Adept Glacialis Ventus (400 mp)" );
		}
		else if ( level == 74 )
		{
			m_spellList.AddString( "Adept Adgredi Animus (400 mp)" );
		}
	}
	else if ( cla == 4 ) //[4]Wizard
	{
		if ( level == 1 )
		{
			m_spellList.AddString( "Minor Adgredi (2 mp)" );
		}
		else if ( level == 2 )
		{
			m_spellList.AddString( "Minor Tueri (3 mp)" );
			m_spellList.AddString( "Minor Flamma (3 mp)" );
			m_spellList.AddString( "Emissarius (6 mp)" );
			m_spellList.AddString( "Emissarius Nex (6 mp)" );
		}
		else if ( level == 3 )
		{
			m_spellList.AddString( "Minor Ignis (3 mp)" );
			m_spellList.AddString( "Minor Stupefacere (3 mp)" );
			m_spellList.AddString( "Tiron Adgredi (4 mp)" );
			m_spellList.AddString( "Minor Velocitas (7 mp)" );
			m_spellList.AddString( "Nonne Sera (7 mp)" );
		}
		else if ( level == 4 )
		{
			m_spellList.AddString( "Minor Mederi (2 mp)" );
			m_spellList.AddString( "Nocte Visus (4 mp)" );
			m_spellList.AddString( "Tiron Tueri (5 mp)" );
		}
		else if ( level == 5 )
		{
			m_spellList.AddString( "Minor Sanatio (3 mp)" );
			m_spellList.AddString( "Tiron Ignis (5 mp)" );
			m_spellList.AddString( "Tiron Stupefacere (5 mp)" );
			m_spellList.AddString( "Minor Flamma Ventus (10 mp)" );
			m_spellList.AddString( "Contra Magicus (16 mp)" );
		}
		else if ( level == 6 )
		{
			m_spellList.AddString( "Medius Adgredi (8 mp)" );
			m_spellList.AddString( "Minor Extrudere (13 mp)" );
			m_spellList.AddString( "Contra Visus (18 mp)" );
			m_spellList.AddString( "Minor Noxa Tueri (50 mp)" );
		}
		else if ( level == 7 )
		{
			m_spellList.AddString( "Minor Robur (8 mp)" );
			m_spellList.AddString( "Tiron Flamma Ventus (15 mp)" );
			m_spellList.AddString( "Medius Tueri (15 mp)" );
			m_spellList.AddString( "Arcessere Flamma (24 mp)" );
		}
		else if ( level == 8 )
		{
			m_spellList.AddString( "Mutatio Nimbus (12 mp)" );
			m_spellList.AddString( "Medius Ignis (15 mp)" );
			m_spellList.AddString( "Medius Stupefacere (15 mp)" );
			m_spellList.AddString( "Tiron Extrudere (18 mp)" );
			m_spellList.AddString( "Tiron Noxa Tueri (55 mp)" );
		}
		else if ( level == 9 )
		{
			m_spellList.AddString( "Tiron Robur (10 mp)" );
			m_spellList.AddString( "Os Saltare (21 mp)" );
			m_spellList.AddString( "Multi Minor Nex (35 mp)" );
		}
		else if ( level == 10 )
		{
			m_spellList.AddString( "Tiron Sanatio (6 mp)" );
			m_spellList.AddString( "Magna Adgredi (12 mp)" );
			m_spellList.AddString( "Sensus Scientia (13 mp)" );
			m_spellList.AddString( "Medius Flamma Ventus (20 mp)" );
			m_spellList.AddString( "Minor Radius (35 mp)" );
		}
		else if ( level == 11 )
		{
			m_spellList.AddString( "Medius Extrudere (26 mp)" );
			m_spellList.AddString( "Magna Tueri (35 mp)" );
			m_spellList.AddString( "Multi Tiron Nex (40 mp)" );
			m_spellList.AddString( "Medius Noxa Tueri (65 mp)" );
			m_spellList.AddString( "Creare Porta (85 mp)" );
		}
		else if ( level == 12 )
		{
			m_spellList.AddString( "Medius Robur (15 mp)" );
			m_spellList.AddString( "Pergere Trans (24 mp)" );
			m_spellList.AddString( "Magna Ignis (35 mp)" );
			m_spellList.AddString( "Magna Stupefacere (35 mp)" );
			m_spellList.AddString( "Tiron Radius (45 mp)" );
		}
		else if ( level == 13 )
		{
			m_spellList.AddString( "Medius Velocitas (7 mp)" );
			m_spellList.AddString( "Medius Mederi (12 mp)" );
		}
		else if ( level == 14 )
		{
			m_spellList.AddString( "Magna Flamma Ventus (35 mp)" );
			m_spellList.AddString( "Multi Medius Nex (50 mp)" );
		}
		else if ( level == 15 )
		{
			m_spellList.AddString( "Magna Sanatio (10 mp)" );
			m_spellList.AddString( "Maximus Adgredi (17 mp)" );
			m_spellList.AddString( "Magna Extrudere (35 mp)" );
			m_spellList.AddString( "Medius Radius (55 mp)" );
			m_spellList.AddString( "Magna Noxa Tueri (75 mp)" );
		}
		else if ( level == 16 )
		{
			m_spellList.AddString( "Maximus Tueri (60 mp)" );
		}
		else if ( level == 17 )
		{
			m_spellList.AddString( "Maximus Ignis (60 mp)" );
			m_spellList.AddString( "Maximus Stupefacere (60 mp)" );
		}
		else if ( level == 18 )
		{
			m_spellList.AddString( "Multi Magna Nex (60 mp)" );
		}
		else if ( level == 19 )
		{
			m_spellList.AddString( "Maximus Flamma Ventus (60 mp)" );
			m_spellList.AddString( "Magna Radius (65 mp)" );
		}
		else if ( level == 20 )
		{
			m_spellList.AddString( "Maximus Extrudere (60 mp)" );
			m_spellList.AddString( "Maximus Noxa Tueri (90 mp)" );
		}
		else if ( level == 21 )
		{
			m_spellList.AddString( "Ultim Adgredi (30 mp)" );
		}
		else if ( level == 22 )
		{
			m_spellList.AddString( "Ultim Tueri (100 mp)" );
		}
		else if ( level == 23 )
		{
			m_spellList.AddString( "Multi Maximus Nex (75 mp)" );
			m_spellList.AddString( "Ultim Ignis (100 mp)" );
			m_spellList.AddString( "Ultim Stupefacere (100 mp)" );
		}
		else if ( level == 24 )
		{
			m_spellList.AddString( "Maximus Radius (100 mp)" );
		}
		else if ( level == 25 )
		{
			m_spellList.AddString( "Ultim Flamma Ventus (100 mp)" );
		}
		else if ( level == 26 )
		{
			m_spellList.AddString( "Ultim Extrudere (100 mp)" );
			m_spellList.AddString( "Ultim Noxa Tueri (105 mp)" );
		}
		else if ( level == 27 )
		{
			m_spellList.AddString( "Maximus Velocitas (7 mp)" );
		}
		else if ( level == 28 )
		{
			m_spellList.AddString( "Vis Adgredi (50 mp)" );
		}
		else if ( level == 29 )
		{
			m_spellList.AddString( "Multi Ultim Nex (100 mp)" );
			m_spellList.AddString( "Vis Tueri (150 mp)" );
		}
		else if ( level == 30 )
		{
			m_spellList.AddString( "Ultim Radius (150 mp)" );
			m_spellList.AddString( "Vis Ignis (150 mp)" );
			m_spellList.AddString( "Vis Stupefacere (150 mp)" );
			m_spellList.AddString( "Praesentis Trans (200 mp)" );
		}
		else if ( level == 32 )
		{
			m_spellList.AddString( "Vis Flamma Ventus (150 mp)" );
		}
		else if ( level == 33 )
		{
			m_spellList.AddString( "Animus Extrudere (150 mp)" );
			m_spellList.AddString( "Ferocia Noxa Tueri (150 mp)" );
		}
		else if ( level == 36 )
		{
			m_spellList.AddString( "Infinitus Adgredi (75 mp)" );
			m_spellList.AddString( "Multi Animus Nex (125 mp)" );
		}
		else if ( level == 37 )
		{
			m_spellList.AddString( "Vis Radius (200 mp)" );
			m_spellList.AddString( "Infinitus Tueri (200 mp)" );
		}
		else if ( level == 38 )
		{
			m_spellList.AddString( "Infintius Ignis (200 mp)" );
			m_spellList.AddString( "Infintius Stupefacere (200 mp)" );
		}
		else if ( level == 40 )
		{
			m_spellList.AddString( "Infinitus Flamma Ventus (200 mp)" );
		}
		else if ( level == 41 )
		{
			m_spellList.AddString( "Infinitus Extrudere (200 mp)" );
			m_spellList.AddString( "Infinitus Noxa Tueri (210 mp)" );
		}
		else if ( level == 43 )
		{
			m_spellList.AddString( "Omni Velocitas (7 mp)" );
		}
		else if ( level == 44 )
		{
			m_spellList.AddString( "Multi Infinitus Nex (150 mp)" );
		}
		else if ( level == 45 )
		{
			m_spellList.AddString( "Omni Adgredi (100 mp)" );
			m_spellList.AddString( "Infinitus Radius (250 mp)" );
		}
		else if ( level == 46 )
		{
			m_spellList.AddString( "Omni Tueri (250 mp)" );
		}
		else if ( level == 47 )
		{
			m_spellList.AddString( "Omni Ignis (250 mp)" );
			m_spellList.AddString( "Omni Stupefacere (250 mp)" );
		}
		else if ( level == 49 )
		{
			m_spellList.AddString( "Omni Flamma Ventus (250 mp)" );
		}
		else if ( level == 50 )
		{
			m_spellList.AddString( "Omni Extrudere (250 mp)" );
			m_spellList.AddString( "Omni Noxa Tueri (260 mp)" );
		}
		else if ( level == 53 )
		{
			m_spellList.AddString( "Multi Omni Nex (180 mp)" );
		}
		else if ( level == 54 )
		{
			m_spellList.AddString( "Omni Radius (310 mp)" );
		}
		else if ( level == 55 )
		{
			m_spellList.AddString( "Dirus Adgredi (130 mp)" );
		}
		else if ( level == 56 )
		{
			m_spellList.AddString( "Divinus Tueri (320 mp)" );
		}
		else if ( level == 57 )
		{
			m_spellList.AddString( "Dirus Ignis (320 mp)" );
			m_spellList.AddString( "Dirus Stupefacere (320 mp)" );
		}
		else if ( level == 59 )
		{
			m_spellList.AddString( "Dirus Flamma Ventus (320 mp)" );
		}
		else if ( level == 60 )
		{
			m_spellList.AddString( "Divinus Extrudere (320 mp)" );
			m_spellList.AddString( "Dirus Noxa Tueri (340 mp)" );
		}
		else if ( level == 63 )
		{
			m_spellList.AddString( "Multi Dirus Nex (210 mp)" );
		}
		else if ( level == 64 )
		{
			m_spellList.AddString( "Dirus Radius (370 mp)" );
		}
		else if ( level == 67 )
		{
			m_spellList.AddString( "Adept Adgredi (180 mp)" );
		}
		else if ( level == 68 )
		{
			m_spellList.AddString( "Adept Tueri (400 mp)" );
		}
		else if ( level == 69 )
		{
			m_spellList.AddString( "Adept Ignis (400 mp)" );
			m_spellList.AddString( "Adept Stupefacere (400 mp)" );
		}
		else if ( level == 71 )
		{
			m_spellList.AddString( "Adept Flamma Ventus (400 mp)" );
		}
		else if ( level == 72 )
		{
			m_spellList.AddString( "Adept Extrudere (400 mp)" );
			m_spellList.AddString( "Adept Noxa Tueri (420 mp)" );
		}
		else if ( level == 75 )
		{
			m_spellList.AddString( "Multi Adept Nex (250 mp)" );
		}
		else if ( level == 76 )
		{
			m_spellList.AddString( "Adept Radius (420 mp)" );
		}
	}
	else if ( cla == 5 ) //[5]Warlock
	{
		if ( level == 1 )
		{
			m_spellList.AddString( "Minor Adgredi (2 mp)" );
			m_spellList.AddString( "Minor Venenum (3 mp)" );
			m_spellList.AddString( "Nocte Visus (4 mp)" );
		}
		else if ( level == 2 )
		{
			m_spellList.AddString( "Minor Flamma (3 mp)" );
			m_spellList.AddString( "Minor Tueri (3 mp)" );
			m_spellList.AddString( "Emissarius (6 mp)" );
			m_spellList.AddString( "Emissarius Nex (6 mp)" );
		}
		else if ( level == 3 )
		{
			m_spellList.AddString( "Minor Ignis (3 mp)" );
			m_spellList.AddString( "Minor Stupefacere (3 mp)" );
			m_spellList.AddString( "Tiron Adgredi (4 mp)" );
			m_spellList.AddString( "Tiron Venenum (5 mp)" );
			m_spellList.AddString( "Nonne Sera (7 mp)" );
			m_spellList.AddString( "Minor Velocitas (7 mp)" );
		}
		else if ( level == 4 )
		{
			m_spellList.AddString( "Tiron Tueri (5 mp)" );
			m_spellList.AddString( "Minor Mederi (2 mp)" );
			m_spellList.AddString( "Minor Venenum Nimbus (8 mp)" );
		}
		else if ( level == 5 )
		{
			m_spellList.AddString( "Minor Sanatio (3 mp)" );
			m_spellList.AddString( "Tiron Ignis (5 mp)" );
			m_spellList.AddString( "Tiron Stupefacere (5 mp)" );
			m_spellList.AddString( "Minor Flamma Ventus (10 mp)" );
			m_spellList.AddString( "Mutatio Nimbus (12 mp)" );
			m_spellList.AddString( "Contra Magicus (16 mp)" );
			m_spellList.AddString( "Mutatio Flamma (16 mp)" );
		}
		else if ( level == 6 )
		{
			m_spellList.AddString( "Medius Adgredi (8 mp)" );
			m_spellList.AddString( "Tiron Venenum Nimbus (10 mp)" );
			m_spellList.AddString( "Minor Extrudere (13 mp)" );
			m_spellList.AddString( "Medius Venenum (15 mp)" );
			m_spellList.AddString( "Contra Visus (18 mp)" );
			m_spellList.AddString( "Os Saltare (21 mp)" );
			m_spellList.AddString( "Reditus Cubile (30 mp)" );
		}
		else if ( level == 7 )
		{
			m_spellList.AddString( "Minor Robur (8 mp)" );
			m_spellList.AddString( "Tiron Flamma Ventus (15 mp)" );
			m_spellList.AddString( "Medius Tueri (15 mp)" );
			m_spellList.AddString( "Arcessere Flamma (24 mp)" );
		}
		else if ( level == 8 )
		{
			m_spellList.AddString( "Medius Ignis (15 mp)" );
			m_spellList.AddString( "Medius Stupefacere (15 mp)" );
			m_spellList.AddString( "Tiron Extrudere (18 mp)" );
		}
		else if ( level == 9 )
		{
			m_spellList.AddString( "Tiron Robur (10 mp)" );
			m_spellList.AddString( "Medius Venenum Nimbus (15 mp)" );
			m_spellList.AddString( "Minor Tabes Viscera (50 mp)" );
		}
		else if ( level == 10 )
		{
			m_spellList.AddString( "Tiron Sanatio (6 mp)" );
			m_spellList.AddString( "Magna Adgredi (12 mp)" );
			m_spellList.AddString( "Sensus Scientia (13 mp)" );
			m_spellList.AddString( "Medius Flamma Ventus (20 mp)" );
			m_spellList.AddString( "Magna Venenum (35 mp)" );
		}
		else if ( level == 11 )
		{
			m_spellList.AddString( "Medius Extrudere (26 mp)" );
			m_spellList.AddString( "Magna Tueri (35 mp)" );
			m_spellList.AddString( "Minor Lunae Lumen Nex (50 mp)" );
			m_spellList.AddString( "Tiron Tabes Viscera (55 mp)" );
			m_spellList.AddString( "Creare Porta (85 mp)" );
		}
		else if ( level == 12 )
		{
			m_spellList.AddString( "Medius Robur (15 mp)" );
			m_spellList.AddString( "Pergere Trans (24 mp)" );
			m_spellList.AddString( "Magna Ignis (35 mp)" );
		}
		else if ( level == 13 )
		{
			m_spellList.AddString( "Medius Mederi (12 mp)" );
			m_spellList.AddString( "Magna Venenum Nimbus (35 mp)" );
			m_spellList.AddString( "Tiron Lunae Lumen Nex (55 mp)" );
		}
		else if ( level == 14 )
		{
			m_spellList.AddString( "Magna Flamma Ventus (35 mp)" );
			m_spellList.AddString( "Medius Tabes Viscera (65 mp)" );
		}
		else if ( level == 15 )
		{
			m_spellList.AddString( "Magna Sanatio (10 mp)" );
			m_spellList.AddString( "Maximus Adgredi (17 mp)" );
			m_spellList.AddString( "Magna Extrudere (35 mp)" );
			m_spellList.AddString( "Maximus Venenum (60 mp)" );
		}
		else if ( level == 16 )
		{
			m_spellList.AddString( "Medius Velocitas (7 mp)" );
			m_spellList.AddString( "Maximus Tueri (60 mp)" );
			m_spellList.AddString( "Medius Lunae Lumen Nex (65 mp)" );
		}
		else if ( level == 17 )
		{
			m_spellList.AddString( "Maximus Ignis (60 mp)" );
		}
		else if ( level == 18 )
		{
			m_spellList.AddString( "Maximus Venenum Nimbus (60 mp)" );
			m_spellList.AddString( "Magna Tabes Viscera (75 mp)" );
		}
		else if ( level == 19 )
		{
			m_spellList.AddString( "Maximus Flamma Ventus (60 mp)" );
		}
		else if ( level == 20 )
		{
			m_spellList.AddString( "Maximus Extrudere (60 mp)" );
			m_spellList.AddString( "Magna Lunae Lumen Nex (75 mp)" );
		}
		else if ( level == 21 )
		{
			m_spellList.AddString( "Ultim Adgredi (30 mp)" );
			m_spellList.AddString( "Ultim Venenum (100 mp)" );
		}
		else if ( level == 22 )
		{
			m_spellList.AddString( "Ultim Tueri (100 mp)" );
		}
		else if ( level == 23 )
		{
			m_spellList.AddString( "Maximus Tabes Viscera (90 mp)" );
			m_spellList.AddString( "Ultim Ignis (100 mp)" );
		}
		else if ( level == 24 )
		{
			m_spellList.AddString( "Ultim Venenum Nimbus (100 mp)" );
		}
		else if ( level == 25 )
		{
			m_spellList.AddString( "Maximus Lunae Lumen Nex (90 mp)" );
			m_spellList.AddString( "Ultim Flamma Ventus (100 mp)" );
		}
		else if ( level == 26 )
		{
			m_spellList.AddString( "Ultim Extrudere (100 mp)" );
		}
		else if ( level == 28 )
		{
			m_spellList.AddString( "Vis Adgredi (50 mp)" );
			m_spellList.AddString( "Ferocia Venenum (150 mp)" );
		}
		else if ( level == 29 )
		{
			m_spellList.AddString( "Ultim Tabes Viscera (105 mp)" );
			m_spellList.AddString( "Vis Tueri (150 mp)" );
		}
		else if ( level == 30 )
		{
			m_spellList.AddString( "Vis Ignis (150 mp)" );
			m_spellList.AddString( "Praesentis Trans (200 mp)" );
		}
		else if ( level == 31 )
		{
			m_spellList.AddString( "Ultim Lunae Lumen Nex (105 mp)" );
			m_spellList.AddString( "Ferocia Venenum Nimbus (150 mp)" );
		}
		else if ( level == 32 )
		{
			m_spellList.AddString( "Vis Flamma Ventus (150 mp)" );
		}
		else if ( level == 33 )
		{
			m_spellList.AddString( "Animus Extrudere (150 mp)" );
		}
		else if ( level == 36 )
		{
			m_spellList.AddString( "Infinitus Adgredi (75 mp)" );
			m_spellList.AddString( "Ferocia Tabes Viscera (150 mp)" );
			m_spellList.AddString( "Infinitus Venenum (200 mp)" );
		}
		else if ( level == 37 )
		{
			m_spellList.AddString( "Infinitus Tueri (200 mp)" );
		}
		else if ( level == 38 )
		{
			m_spellList.AddString( "Vis Lunae Lumen Nex (150 mp)" );
			m_spellList.AddString( "Infintius Ignis (200 mp)" );
		}
		else if ( level == 39 )
		{
			m_spellList.AddString( "Infinitus Venenum Nimbus (200 mp)" );
		}
		else if ( level == 40 )
		{
			m_spellList.AddString( "Infinitus Flamma Ventus (200 mp)" );
		}
		else if ( level == 41 )
		{
			m_spellList.AddString( "Infinitus Extrudere (200 mp)" );
		}
		else if ( level == 44 )
		{
			m_spellList.AddString( "Infinitus Tabes Viscera (210 mp)" );
		}
		else if ( level == 45 )
		{
			m_spellList.AddString( "Omni Adgredi (100 mp)" );
			m_spellList.AddString( "Omni Venenum (250 mp)" );
		}
		else if ( level == 46 )
		{
			m_spellList.AddString( "Infinitus Lunae Lumen Nex (210 mp)" );
			m_spellList.AddString( "Omni Tueri (250 mp)" );
		}
		else if ( level == 47 )
		{
			m_spellList.AddString( "Omni Ignis (250 mp)" );
		}
		else if ( level == 48 )
		{
			m_spellList.AddString( "Omni Venenum Nimbus (250 mp)" );
		}
		else if ( level == 49 )
		{
			m_spellList.AddString( "Omni Flamma Ventus (250 mp)" );
		}
		else if ( level == 50 )
		{
			m_spellList.AddString( "Omni Extrudere (250 mp)" );
		}
		else if ( level == 53 )
		{
			m_spellList.AddString( "Omni Tabes Viscera (260 mp)" );
		}
		else if ( level == 55 )
		{
			m_spellList.AddString( "Dirus Adgredi (130 mp)" );
			m_spellList.AddString( "Omni Lunae Lumen Nex (260 mp)" );
			m_spellList.AddString( "Dirus Venenum (320 mp)" );
		}
		else if ( level == 56 )
		{
			m_spellList.AddString( "Divinus Tueri (320 mp)" );
		}
		else if ( level == 57 )
		{
			m_spellList.AddString( "Dirus Ignis (320 mp)" );
		}
		else if ( level == 58 )
		{
			m_spellList.AddString( "Dirus Venenum Nimbus (320 mp)" );
		}
		else if ( level == 59 )
		{
			m_spellList.AddString( "Dirus Flamma Ventus (320 mp)" );
		}
		else if ( level == 60 )
		{
			m_spellList.AddString( "Divinus Extrudere (320 mp)" );
		}
		else if ( level == 63 )
		{
			m_spellList.AddString( "Dirus Tabes Viscera (340 mp)" );
		}
		else if ( level == 65 )
		{
			m_spellList.AddString( "Dirus Lunae Lumen Nex (340 mp)" );
		}
		else if ( level == 67 )
		{
			m_spellList.AddString( "Adept Adgredi (180 mp)" );
			m_spellList.AddString( "Adept Venenum (400 mp)" );
		}
		else if ( level == 68 )
		{
			m_spellList.AddString( "Adept Tueri (400 mp)" );
		}
		else if ( level == 69 )
		{
			m_spellList.AddString( "Adept Ignis (400 mp)" );
		}
		else if ( level == 70 )
		{
			m_spellList.AddString( "Adept Venenum Nimbus (400 mp)" );
		}
		else if ( level == 71 )
		{
			m_spellList.AddString( "Adept Flamma Ventus (400 mp)" );
		}
		else if ( level == 72 )
		{
			m_spellList.AddString( "Adept Extrudere (400 mp)" );
		}
		else if ( level == 75 )
		{
			m_spellList.AddString( "Adept Tabes Viscera (420 mp)" );
		}
		else if ( level == 77 )
		{
			m_spellList.AddString( "Adept Lunae Lumen Nex (420 mp)" );
		}
	}
	else if ( cla == 6 ) //[6]Druid
	{
		if ( level == 1 ){
			m_spellList.AddString( "Minor Mederi (2 mp)" );
			m_spellList.AddString( "Nocte Visus (4 mp)" );
		}
		else if ( level == 2 )
		{
			m_spellList.AddString( "Minor Flamma (3 mp)" );
			m_spellList.AddString( "Minor Incantare (3 mp)" );
			m_spellList.AddString( "Minor Sanatio (3 mp)" );
			m_spellList.AddString( "Minor Tueri (3 mp)" );
			m_spellList.AddString( "Emissarius (6 mp)" );
			m_spellList.AddString( "Emissarius Nex (6 mp)" );
		}
		else if ( level == 3 )
		{
			m_spellList.AddString( "Minor Stupefacere (3 mp)" );
			m_spellList.AddString( "Minor Velocitas (7 mp)" );
			m_spellList.AddString( "Nonne Sera (7 mp)" );
		}
		else if ( level == 4 )
		{
			m_spellList.AddString( "Tiron Incantare (5 mp)" );
			m_spellList.AddString( "Tiron Tueri (5 mp)" );
			m_spellList.AddString( "Minor Robur (8 mp)" );
			m_spellList.AddString( "Medius Mederi (12 mp)" );
		}
		else if ( level == 5 )
		{
			m_spellList.AddString( "Tiron Sanatio (6 mp)" );
			m_spellList.AddString( "Tiron Stupefacere (5 mp)" );
			m_spellList.AddString( "Minor Glacialis Viscera (8 mp)" );
			m_spellList.AddString( "Mutatio Nimbus (12 mp)" );
			m_spellList.AddString( "Contra Magicus (16 mp)" );
		}
		else if ( level == 6 )
		{
			m_spellList.AddString( "Tiron Robur (10 mp)" );
			m_spellList.AddString( "Minor Extrudere (13 mp)" );
			m_spellList.AddString( "Contra Visus (18 mp)" );
			m_spellList.AddString( "Minor Fulgur (20 mp)" );
			m_spellList.AddString( "Minor Noxa Tueri (50 mp)" );
		}
		else if ( level == 7 )
		{
			m_spellList.AddString( "Medius Incantare (15 mp)" );
			m_spellList.AddString( "Medius Tueri (15 mp)" );
			m_spellList.AddString( "Tiron Glacialis Viscera (10 mp)" );
			m_spellList.AddString( "Minor Glacialis Ventus (23 mp)" );
			m_spellList.AddString( "Arcessere Flamma (24 mp)" );
		}
		else if ( level == 8 )
		{
			m_spellList.AddString( "Magna Sanatio (10 mp)" );
			m_spellList.AddString( "Minor Fragor Ipsum (15 mp)" );
			m_spellList.AddString( "Medius Stupefacere (15 mp)" );
			m_spellList.AddString( "Tiron Fulgur (25 mp)" );
			m_spellList.AddString( "Magna Mederi (30 mp)" );
			m_spellList.AddString( "Tiron Noxa Tueri (55 mp)" );
		}
		else if ( level == 9 )
		{
			m_spellList.AddString( "Medius Robur (15 mp)" );
			m_spellList.AddString( "Tiron Extrudere (18 mp)" );
			m_spellList.AddString( "Tiron Glacialis Ventus (30 mp)" );
		}
		else if ( level == 10 )
		{
			m_spellList.AddString( "Medius Glacialis Viscera (15 mp)" );
			m_spellList.AddString( "Tiron Fragor Ipsum (25 mp)" );
		}
		else if ( level == 11 )
		{
			m_spellList.AddString( "Magnus Sanatio (25 mp)" );
			m_spellList.AddString( "Medius Fulgur (35 mp)" );
			m_spellList.AddString( "Magna Incantare (35 mp)" );
			m_spellList.AddString( "Magna Tueri (35 mp)" );
			m_spellList.AddString( "Medius Noxa Tueri (65 mp)" );
			m_spellList.AddString( "Creare Porta (85 mp)" );
		}
		else if ( level == 12 )
		{
			m_spellList.AddString( "Pergere Trans (24 mp)" );
			m_spellList.AddString( "Magna Stupefacere (35 mp)" );
			m_spellList.AddString( "Medius Glacialis Ventus (40 mp)" );
			m_spellList.AddString( "Vis Mederi (85 mp)" );
		}
		else if ( level == 13 )
		{
			m_spellList.AddString( "Sensus Scientia (13 mp)" );
			m_spellList.AddString( "Medius Extrudere (26 mp)" );
			m_spellList.AddString( "Magna Robur (35 mp)" );
			m_spellList.AddString( "Medius Fragor Ipsum (40 mp)" );
		}
		else if ( level == 14 )
		{
			m_spellList.AddString( "Magna Glacialis Viscera (35 mp)" );
		}
		else if ( level == 15 )
		{
			m_spellList.AddString( "Magna Fulgur (48 mp)" );
			m_spellList.AddString( "Magna Noxa Tueri (75 mp)" );
		}
		else if ( level == 16 )
		{
			m_spellList.AddString( "Medius Velocitas (7 mp)" );
			m_spellList.AddString( "Magna Glacialis Ventus (50 mp)" );
			m_spellList.AddString( "Maximus Incantare (60 mp)" );
			m_spellList.AddString( "Maximus Tueri (60 mp)" );
			m_spellList.AddString( "Ultim Sanatio (60 mp)" );
		}
		else if ( level == 17 )
		{
			m_spellList.AddString( "Maximus Stupefacere (60 mp)" );
			m_spellList.AddString( "Magna Fragor Ipsum (65 mp)" );
		}
		else if ( level == 18 )
		{
			m_spellList.AddString( "Magna Extrudere (35 mp)" );
			m_spellList.AddString( "Maximus Robur (60 mp)" );
		}
		else if ( level == 20 )
		{
			m_spellList.AddString( "Maximus Fulgur (60 mp)" );
			m_spellList.AddString( "Maximus Glacialis Viscera (60 mp)" );
			m_spellList.AddString( "Maximus Noxa Tueri (90 mp)" );
			m_spellList.AddString( "Infinitus Mederi (120 mp)" );
		}
		else if ( level == 21 )
		{
			m_spellList.AddString( "Maximus Glacialis Ventus (60 mp)" );
		}
		else if ( level == 22 )
		{
			m_spellList.AddString( "Maximus Fragor Ipsum (100 mp)" );
			m_spellList.AddString( "Ultim Incantare (100 mp)" );
			m_spellList.AddString( "Ultim Tueri (100 mp)" );
		}
		else if ( level == 23 )
		{
			m_spellList.AddString( "Ultim Stupefacere (100 mp)" );
		}
		else if ( level == 24 )
		{
			m_spellList.AddString( "Maximus Extrudere (60 mp)" );
			m_spellList.AddString( "Ultim Robur (100 mp)" );
			m_spellList.AddString( "Animus Sanatio (150 mp)" );
		}
		else if ( level == 25 )
		{
			m_spellList.AddString( "Ultim Glacialis Viscera (100 mp)" );
		}
		else if ( level == 26 )
		{
			m_spellList.AddString( "Ultim Fulgur (100 mp)" );
			m_spellList.AddString( "Ultim Noxa Tueri (105 mp)" );
		}
		else if ( level ==27 )
		{
			m_spellList.AddString( "Ultim Glacialis Ventus (100 mp)" );
		}
		else if ( level == 28 )
		{
			m_spellList.AddString( "Ultim Fragor Ipsum (150 mp)" );
		}
		else if ( level == 29 )
		{
			m_spellList.AddString( "Vis Incantare (150 mp)" );
			m_spellList.AddString( "Vis Tueri (150 mp)" );
		}
		else if ( level == 30 )
		{
			m_spellList.AddString( "Ultim Extrudere (100 mp)" );
			m_spellList.AddString( "Vis Stupefacere (150 mp)" );
			m_spellList.AddString( "Praesentis Trans (200 mp)" );
		}
		else if ( level == 31 )
		{
			m_spellList.AddString( "Animus Robur (150 mp)" );
		}
		else if ( level == 32 )
		{
			m_spellList.AddString( "Ferocia Fulgur (150 mp)" );
			m_spellList.AddString( "Ferocia Glacialis Viscera (150 mp)" );
		}
		else if ( level == 33 )
		{
			m_spellList.AddString( "Ferocia Noxa Tueri (150 mp)" );
		}
		else if ( level == 34 )
		{
			m_spellList.AddString( "Ferocia Glacialis Ventus (150 mp)" );
		}
		else if ( level == 35 )
		{
			m_spellList.AddString( "Vis Fragor Ipsum (200 mp)" );
			m_spellList.AddString( "Infinitus Sanatio (220 mp)" );
		}
		else if ( level == 37 )
		{
			m_spellList.AddString( "Animus Extrudere (150 mp)" );
			m_spellList.AddString( "Infinitus Incantare (200 mp)" );
			m_spellList.AddString( "Infinitus Tueri (200 mp)" );
		}
		else if ( level == 38 )
		{
			m_spellList.AddString( "Infin Stupefacere (200 mp)" );
		}
		else if ( level == 39 )
		{
			m_spellList.AddString( "Infinitus Robur (200 mp)" );
		}
		else if ( level == 40 )
		{
			m_spellList.AddString( "Infinitus Glacialis Viscera (200 mp)" );
		}
		else if ( level == 41 )
		{
			m_spellList.AddString( "Infinitus Fulgur (200 mp)" );
			m_spellList.AddString( "Infinitus Noxa Tueri (210 mp)" );
		}
		else if ( level == 42 )
		{
			m_spellList.AddString( "Infinitus Glacialis Ventus (200 mp)" );
		}
		else if ( level == 43 )
		{
			m_spellList.AddString( "Infinitus Fragor Ipsum (250 mp)" );
		}
		else if ( level == 45 )
		{
			m_spellList.AddString( "Infinitus Extrudere (200 mp)" );
		}
		else if ( level == 46 )
		{
			m_spellList.AddString( "Omni Incantare (250 mp)" );
			m_spellList.AddString( "Omni Tueri (250 mp)" );
		}
		else if ( level == 47 )
		{
			m_spellList.AddString( "Omni Stupefacere (250 mp)" );
		}
		else if ( level == 48 )
		{
			m_spellList.AddString( "Omni Robur (250 mp)" );
		}
		else if ( level == 49 )
		{
			m_spellList.AddString( "Omni Glacialis Viscera (250 mp)" );
		}
		else if ( level == 50 )
		{
			m_spellList.AddString( "Omni Fulgur (250 mp)" );
			m_spellList.AddString( "Omni Noxa Tueri (260 mp)" );
		}
		else if ( level == 51 )
		{
			m_spellList.AddString( "Omni Glacialis Ventus (250 mp)" );
		}
		else if ( level == 52 )
		{
			m_spellList.AddString( "Omni Fragor Ipsum (310 mp)" );
		}
		else if ( level == 54 )
		{
			m_spellList.AddString( "Omni Extrudere (250 mp)" );
		}
		else if ( level == 56 )
		{
			m_spellList.AddString( "Dirus Incantare (320 mp)" );
			m_spellList.AddString( "Divinus Tueri (320 mp)" );
		}
		else if ( level == 57 )
		{
			m_spellList.AddString( "Dirus Stupefacere (320 mp)" );
		}
		else if ( level == 58 )
		{
			m_spellList.AddString( "Divinus Robur (320 mp)" );
		}
		else if ( level == 59 )
		{
			m_spellList.AddString( "Dirus Glacialis Viscera (320 mp)" );
		}
		else if ( level == 60 )
		{
			m_spellList.AddString( "Dirus Fulgur (320 mp)" );
			m_spellList.AddString( "Dirus Noxa Tueri (340 mp)" );
		}
		else if ( level == 61 )
		{
			m_spellList.AddString( "Dirus Glacialis Ventus (320 mp)" );
		}
		else if ( level == 62 )
		{
			m_spellList.AddString( "Dirus Fragor Ipsum (370 mp)" );
		}
		else if ( level == 64 )
		{
			m_spellList.AddString( "Divinus Extrudere (320 mp)" );
		}
		else if ( level == 68 )
		{
			m_spellList.AddString( "Adept Incantare (400 mp)" );
			m_spellList.AddString( "Adept Tueri (400 mp)" );
		}
		else if ( level == 69 )
		{
			m_spellList.AddString( "Adept Stupefacere (400 mp)" );
		}
		else if ( level == 70 )
		{
			m_spellList.AddString( "Adept Robur (400 mp)" );
		}
		else if ( level == 71 )
		{
			m_spellList.AddString( "Adept Glacialis Viscera (400 mp)" );
		}
		else if ( level == 72 )
		{
			m_spellList.AddString( "Adept Fulgur (400 mp)" );
			m_spellList.AddString( "Adept Noxa Tueri (420 mp)" );
		}
		else if ( level == 73 )
		{
			m_spellList.AddString( "Adept Glacialis Ventus (400 mp)" );
		}
		else if ( level == 74 )
		{
			m_spellList.AddString( "Adept Fragor Ipsum (420 mp)" );
		}
		else if ( level == 76 )
		{
			m_spellList.AddString( "Adept Extrudere (400 mp)" );
		}
	}
	else if ( cla == 7 ) //[7]Darkwar
	{
		if ( level == 1 )
		{
			m_spellList.AddString( "Hide Skill (0 mp)" );
			m_spellList.AddString( "Nocte Visus (4 mp)" );
		}
		else if ( level == 2 )
		{
			m_spellList.AddString( "Minor Flamma (3 mp)" );
			m_spellList.AddString( "Emissarius (6 mp)" );
			m_spellList.AddString( "Emissarius Nex (6 mp)" );
		}
		else if ( level == 3 )
		{
			m_spellList.AddString( "Attack Run Minor (1 mp)" );
			m_spellList.AddString( "Double Slice (3 mp)" );
		}
		else if ( level == 4 )
		{
			m_spellList.AddString( "Minor Mederi (2 mp)" );
			m_spellList.AddString( "Tiron Flamma (5 mp)" );
		}
		else if ( level == 5 )
		{
			m_spellList.AddString( "Attack Run Tiron (2 mp)" );
			m_spellList.AddString( "Minor Juxta Flamma (2 mp)" );
			m_spellList.AddString( "Minor Sanatio (3 mp)" );
			m_spellList.AddString( "Minor Tueri (3 mp)" );
			m_spellList.AddString( "Double Stab (8 mp)" );
		}
		else if ( level == 6 )
		{
			m_spellList.AddString( "Minor Stupefacere (3 mp)" );
			m_spellList.AddString( "Minor Velocitas (7 mp)" );
			m_spellList.AddString( "Nonne Sera (7 mp)" );
		}
		else if ( level == 7 )
		{
			m_spellList.AddString( "Tiron Juxta Flamma (3 mp)" );
			m_spellList.AddString( "Tiron Tueri (5 mp)" );
			m_spellList.AddString( "Minor Robur (8 mp)" );
			m_spellList.AddString( "Medius Flamma (10 mp)" );
		}
		else if ( level == 8 )
		{
			m_spellList.AddString( "Attack Run Medius (3 mp)" );
			m_spellList.AddString( "Tiron Stupefacere (5 mp)" );
			m_spellList.AddString( "Mutatio Nimbus (12 mp)" );
			m_spellList.AddString( "Contra Magicus (16 mp)" );
		}
		else if ( level == 9 )
		{
			m_spellList.AddString( "Tiron Robur (10 mp)" );
			m_spellList.AddString( "Minor Extrudere (13 mp)" );
			m_spellList.AddString( "Contra Visus (18 mp)" );
		}
		else if ( level == 10 )
		{
			m_spellList.AddString( "Tiron Sanatio (6 mp)" );
			m_spellList.AddString( "Medius Juxta Flamma (7 mp)" );
			m_spellList.AddString( "Medius Tueri (15 mp)" );
			m_spellList.AddString( "Arcessere Flamma (24 mp)" );
		}
		else if ( level == 11 )
		{
			m_spellList.AddString( "Medius Stupefacere (15 mp)" );
			m_spellList.AddString( "Magna Flamma (15 mp)" );
		}
		else if ( level == 12 )
		{
			m_spellList.AddString( "Attack Run Magna (5 mp)" );
			m_spellList.AddString( "Back Spin (15 mp)" );
			m_spellList.AddString( "Medius Robur (15 mp)" );
			m_spellList.AddString( "Tiron Extrudere (18 mp)" );
			m_spellList.AddString( "Pergere Trans (24 mp)" );
		}
		else if ( level == 13 )
		{
			m_spellList.AddString( "Medius Mederi (12 mp)" );
			m_spellList.AddString( "Sensus Scientia (13 mp)" );
		}
		else if ( level == 14 )
		{
			m_spellList.AddString( "Magna Juxta Flamma (10 mp)" );
			m_spellList.AddString( "Magna Tueri (35 mp)" );
		}
		else if ( level == 15 )
		{
			m_spellList.AddString( "Magna Sanatio (10 mp)" );
			m_spellList.AddString( "Magna Stupefacere (35 mp)" );
		}
		else if ( level == 16 )
		{
			m_spellList.AddString( "Medius Velocitas (7 mp)" );
			m_spellList.AddString( "Maximus Flamma (25 mp)" );
			m_spellList.AddString( "Medius Extrudere (26 mp)" );
		}
		else if ( level == 17 )
		{
			m_spellList.AddString( "Attack Run Maximus (10 mp)" );
			m_spellList.AddString( "Jump attack (20 mp)" );
		}
		else if ( level == 19 )
		{
			m_spellList.AddString( "Maximus Juxta Flamma (17 mp)" );
			m_spellList.AddString( "Maximus Tueri (60 mp)" );
		}
		else if ( level == 20 )
		{
			m_spellList.AddString( "Maximus Stupefacere (60 mp)" );
		}
		else if ( level == 21 )
		{
			m_spellList.AddString( "Magna Extrudere (35 mp)" );
		}
		else if ( level == 22 )
		{
			m_spellList.AddString( "Ultim Flamma (45 mp)" );
		}
		else if ( level == 23 )
		{
			m_spellList.AddString( "Attack Run Ultim (15 mp)" );
			m_spellList.AddString( "Stab & Slice (25 mp)" );
		}
		else if ( level == 25 )
		{
			m_spellList.AddString( "Ultim Juxta Flamma (31 mp)" );
			m_spellList.AddString( "Ultim Tueri (100 mp)" );
		}
		else if ( level == 26 )
		{
			m_spellList.AddString( "Ultim Stupefacere (100 mp)" );
		}
		else if ( level == 27 )
		{
			m_spellList.AddString( "Maximus Extrudere (60 mp)" );
		}
		else if ( level == 29 )
		{
			m_spellList.AddString( "Ferocia Flamma (75 mp)" );
		}
		else if ( level == 30 )
		{
			m_spellList.AddString( "Attack Run Ferocia (20 mp)" );
		}
		else if ( level == 32 )
		{
			m_spellList.AddString( "Ferocia Juxta Flamma (55 mp)" );
			m_spellList.AddString( "Vis Tueri (150 mp)" );
		}
		else if ( level == 33 )
		{
			m_spellList.AddString( "Vis Stupefacere (150 mp)" );
		}
		else if ( level == 37 )
		{
			m_spellList.AddString( "Infinitus Flamma (110 mp)" );
		}
		else if ( level == 38 )
		{
			m_spellList.AddString( "Attack Run Infinitus (25 mp)" );
			m_spellList.AddString( "Tornado Slice (35 mp)" );
		}
		else if ( level == 40 )
		{
			m_spellList.AddString( "Infinitus Juxta Flamma (appox. 77 mp)" );
			m_spellList.AddString( "Infinitus Tueri (200 mp)" );
		}
		else if ( level == 41 )
		{
			m_spellList.AddString( "Infin Stupefacere (200 mp)" );
		}
		else if ( level == 46 )
		{
			m_spellList.AddString( "Omni Flamma (150 mp)" );
		}
		else if ( level == 47 )
		{
			m_spellList.AddString( "Attack Run Omni (30 mp)" );
		}
		else if ( level == 49 )
		{
			m_spellList.AddString( "Omni Juxta Flamma (appox. 99 mp)" );
			m_spellList.AddString( "Omni Tueri (250 mp)" );
		}
		else if ( level == 50 )
		{
			m_spellList.AddString( "Omni Stupefacere (250 mp)" );
		}
		else if ( level == 56 )
		{
			m_spellList.AddString( "Dirus Flamma (220 mp)" );
		}
		else if ( level == 57 )
		{
			m_spellList.AddString( "Attack Run Dirus (35 mp)" );
		}
		else if ( level == 59 )
		{
			m_spellList.AddString( "Dirus Juxta Flamma (appox. 146 mp)" );
			m_spellList.AddString( "Divinus Tueri (320 mp)" );
		}
		else if ( level == 60 )
		{
			m_spellList.AddString( "Dirus Stupefacere (320 mp)" );
		}
		else if ( level == 68 )
		{
			m_spellList.AddString( "Adept Flamma (300 mp)" );
		}
		else if ( level == 69 )
		{
			m_spellList.AddString( "Attack Run Adept (40 mp)" );
		}
		else if ( level == 71 )
		{
			m_spellList.AddString( "Adept Juxta Flamma (appox. 199 mp)" );
			m_spellList.AddString( "Adept Tueri (400 mp)" );
		}
		else if ( level == 72 )
		{
			m_spellList.AddString( "Adept Stupefacere (400 mp)" );
		}
	}
	else if ( cla == 8 ) //[8]Barbarian
	{
		if ( level == 2 )
		{
			m_spellList.AddString( "Emissarius (6 mp)" );
			m_spellList.AddString( "Emissarius Nex (6 mp)" );
		}
		else if ( level == 3 )
		{
			m_spellList.AddString( "Double Slice (3 mp)" );
		}
		else if ( level == 5 )
		{
			m_spellList.AddString( "Double Stab (8 mp)" );
		}
		else if ( level == 6 )
		{
			m_spellList.AddString( "Minor Flamma (3 mp)" );
			m_spellList.AddString( "Minor Velocitas (7 mp)" );
			m_spellList.AddString( "Nonne Sera (7 mp)" );
		}
		else if ( level == 8 )
		{
			m_spellList.AddString( "Mutatio Nimbus (12 mp)" );
			m_spellList.AddString( "Shield Bash (12 mp)" );
		}
		else if ( level == 12 )
		{
			m_spellList.AddString( "Back Spin (15 mp)" );
		}
		else if ( level == 13 )
		{
			m_spellList.AddString( "Sensus Scientia (13 mp)" );
		}
		else if ( level == 15 )
		{
			m_spellList.AddString( "Attack Run Minor (1 mp)" );
		}
		else if ( level == 16 )
		{
			m_spellList.AddString( "Minor Spin (5 mp)" );
			m_spellList.AddString( "Medius Velocitas (7 mp)" );
		}
		else if ( level == 17 )
		{
			m_spellList.AddString( "Attack Run Tiron (2 mp)" );
			m_spellList.AddString( "Jump attack (20 mp)" );
		}
		else if ( level == 18 )
		{
			m_spellList.AddString( "Tiron Spin (10 mp)" );
		}
		else if ( level == 20 )
		{
			m_spellList.AddString( "Attack Run Medius (3 mp)" );
		}
		else if ( level == 21 )
		{
			m_spellList.AddString( "Medius Spin (15 mp)" );
		}
		else if ( level == 23 )
		{
			m_spellList.AddString( "Stab & Slice (25 mp)" );
		}
		else if ( level == 24 )
		{
			m_spellList.AddString( "Attack Run Magna (5 mp)" );
		}
		else if ( level == 25 )
		{
			m_spellList.AddString( "Magna Spin (20 mp)" );
		}
		else if ( level == 29 )
		{
			m_spellList.AddString( "Attack Run Maximus (10 mp)" );
		}
		else if ( level == 30 )
		{
			m_spellList.AddString( "Maximus Spin (25 mp)" );
			m_spellList.AddString( "Bash & Stab (30 mp)" );
		}
		else if ( level == 35 )
		{
			m_spellList.AddString( "Attack Run Ultim (15 mp)" );
		}
		else if ( level == 36 )
		{
			m_spellList.AddString( "Ultim Spin (30 mp)" );
		}
		else if ( level == 38 )
		{
			m_spellList.AddString( "Tornado Slice (35 mp)" );
		}
		else if ( level == 42 )
		{
			m_spellList.AddString( "Attack Run Ferocia (20 mp)" );
		}
		else if ( level == 43 )
		{
			m_spellList.AddString( "Ferocia Spin (35 mp)" );
		}
		else if ( level == 50 )
		{
			m_spellList.AddString( "Attack Run Infinitus (25 mp)" );
		}
		else if ( level == 51 )
		{
			m_spellList.AddString( "Infinitus Spin (40 mp)" );
		}
		else if ( level == 59 )
		{
			m_spellList.AddString( "Attack Run Omni (30 mp)" );
		}
		else if ( level == 60 )
		{
			m_spellList.AddString( "Omni Spin (45 mp)" );
		}
		else if ( level == 69 )
		{
			m_spellList.AddString( "Attack Run Dirus (35 mp)" );
		}
		else if ( level == 70 )
		{
			m_spellList.AddString( "Dirus Spin (50 mp)" );
		}
		else if ( level == 81 )
		{
			m_spellList.AddString( "Attack Run Adept (40 mp)" );
		}
		else if ( level == 82 )
		{
			m_spellList.AddString( "Adept Spin (55 mp)" );
		}
	}
}
