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
/** Original copy by:
/** Halloween (06/15/05)
/**
/** All previous names must stay included when making additions.
/************************************************************************/

#include <math.h>

/**
* Calculate Stats
*/
class calculator {
	
	
public:
/**
* Creates a new character.
* 
* @param Class [0]Fighter [1]Ranger [2]Paladin [3]Cleric [4]Wizard [5]Warlock [6]Druid [7]Darkwar [8]Barbarian
* @param Level The level of the character
* @param HPBases The number of extra bases for HP (ie Salb rings)
* @param MPBases The number of extra bases for MP (ie Animus rings)
* @param Strength .
* @param Agility .
* @param Constitution .
* @param Intelligence .
* @param Wisdom .
	*/
	calculator(int Class, int Level, double HPBases, double MPBases, int Strength,
		int Agility, int Constitution, int Intelligence, int Wisdom)
	{
		double mpCore = coreMana(Class,Level,Intelligence,Wisdom);
		double hpCore = coreHealth(Level,Strength,Constitution);
		double mpExtra = extraBase(mpCore,MPBases);
		double hpExtra = extraBase(hpCore,HPBases);
		double mpNormal = normalMana(Class,mpCore);
		double hpNormal = normalHealth(Class,hpCore);
		Mana = fin(mpNormal,mpExtra);
		Health = fin(hpNormal,hpExtra);
	} //end of constructor
	
	
	  /**
	  * Returns Mana
	  *
	  * @return int ManaWithOut
	*/
	int getMana() {
		return Mana;
	} //end of getMana method
	
	
	  /**
	  * Returns Health
	  *
	  * @return int HealthWithOut
	*/
	int getHealth() {
		return Health;
	} //end of getHealth method
	
private:
	
	int Mana;
	int Health;
	
	/**
	* Calculate MP w/ given Class, Level, Intelligence, and Wisdom.
	*
	* @param cla Class
	* @param lvl Level
	* @param intel Intelligence
	* @param wis Wisdom
	*
	* @return base MP 
	*/
	double coreMana(int cla, int lvl, int intel, int wis) {      
		// 2(Paladin) or 3(Cleric) or [6]Druid use Wisdom
		if (cla == 2 || cla == 3 || cla == 6) {
			return ((lvl*12.0)+(wis*20.0)+((bonus(wis))*20.0))*levelPercent(lvl);
		}
		// All others use Intelligence
		else {
			return ((lvl*12.0)+(intel*20.0)+((bonus(intel))*20.0))*levelPercent(lvl);
		}
	} //end of coreMana method
	
	
	  /**
	  * Calculate HP w/ given Level, Strength, and Constitution.
	  *
	  * @param lvl Level
	  * @param str Strength
	  * @param con Constitution
	  *
	  * @return base HP 
	*/
	double coreHealth(int lvl, int str, int con) {
		return ((lvl*12.0)+(con*18.0)+((bonus(con))*18.0)+(str*8.0))*levelPercent(lvl);
	} //end of coreHealth method
	
	
	  /**
	  * Calculate extra MP/HP
	  *
	  * @param b Core MP/HP
	  * @param n Number of extra bases
	  *
	  * @return MP/HP after adding bases
	*/
	double extraBase(double b, double n) {
		return b*(n/100);
	} //end of extraBase method
	
	
	  /**
	  * Calculate Normal Mana without extra bases
	  *
	  * @param cla Class
	  * @param core core MP
	  *
	  * @return normal mana
	*/
	double normalMana(int cla, double core) {
		return core*manaPercent(cla);
	} //end of normalMana method
	
	
	  /**
	  * Calculate normal health without extra bases
	  *
	  * @param cla Class
	  * @param core core HP
	  *
	  * @return normal health
	*/
	double normalHealth(int cla, double core){
		return core*healthPercent(cla);
	} //end of normalHealth method
	
	
	  /**
	  * Calculate final HP/MP
	  *
	  * @param norm normal HP/MP without bases
	  * @param base extra HP/MP
	  *
	  * @return final HP/MP
	*/
	int fin(double norm, double base){
		return (int)(norm+base);
	} //end of fin method
	
	
	  /**
	  * Calculate stat bonus.
	  *
	  * @param s Stat
	  *
	  * @return bonuses
	*/
	int bonus(int s) {
		if (s<15) {return 0;} // 0-14
		else if (s<17) {return 1;} // 15-16
		else if (s<19) {return 2;} // 17-18
		else if (s<21) {return 3;} // 19-20
		else if (s<25) {return 4;} // 21-24
		else if (s<29) {return 5;} // 25-28
		else if (s<34) {return 6;} // 29-33
		else if (s<39) {return 7;} // 34-38
		else if (s<45) {return 8;} // 39-44
		else if (s<50) {return 9;} // 45-49
		else if (s<61) {return 10;} // 50-60
		else { return 12 + (int)floor((s-61) / 10.0);} // 61, 71, 81, etc
	} //end of bonus method
	
	
	  /**
	  * Calculate level percent
	  *
	  * @param lvl Level
	  *
	  * @return 1 if lvl is greater then 40, percent otherwise
	*/
	double levelPercent(int lvl) {
		if ((double)lvl/40.0 > 1.0) {
			return 1.0;
		}
		else {
			return (double)lvl/40.0;
		}
	} //end of levelPercent method
	
	
	  /**
	  * return class Mana percentage
	  *
	  * @param cla Class
	  *
	  * @return mana percent for class, else -1
	*/
	double manaPercent(int cla) {
		if (cla==0) { return 0.01; } //Fighter
		else if (cla==1) { return 0.05; } //Ranger
		else if (cla==2) { return 0.20; } //Paladin
		else if (cla==3) { return 1.00; } //Cleric
		else if (cla==4) { return 1.00; } //Wizard
		else if (cla==5) { return 0.90; } //Warlock
		else if (cla==6) { return 0.80; } //Druid   
		else if (cla==7) { return 0.15; } //Darkwar
		else if (cla==8) { return 0.01; } //Barbarian
		else { return -1; }
	} //end of manaPercent method
	
	
	  /**
	  * return class Health percentage
	  *
	  * @param cla Class
	  *
	  * @return health percent for class, else -1
	*/
	double healthPercent(int cla) {
		if (cla==0) { return 1.14; } //Fighter
		else if (cla==1) { return 0.90; } //Ranger
		else if (cla==2) { return 0.85; } //Paladin
		else if (cla==3) { return 0.40; } //Cleric
		else if (cla==4) { return 0.40; } //Wizard
		else if (cla==5) { return 0.50; } //Warlock
		else if (cla==6) { return 0.60; } //Druid
		else if (cla==7) { return 0.85; } //Darkwar
		else if (cla==8) { return 1.15; } //Barbarian
		else { return -1; }
	} //end of healthPercent method
};
