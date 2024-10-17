#include "Game.h"
#include <iostream>

using namespace std;

Game::Game (string in_cat, bool x, const char *in_code, string in_title, AppConst *in_comp) : App (in_code, in_title, in_comp)
{
	cat = in_cat;
	is_online = x;
}

string Game::Get_Cat () const
{
	return cat;
}

bool Game::Get_Online () const
{
	return is_online;
}

ostream &operator<< (ostream &x, const Game &ga)
{
	x << "GAME APPLICATION" << endl;                   
	x << "---------------------" << endl;             
	x << "Code                : " << ga.Get_Code () << endl;    
	x << "Title               : " << ga.Get_Title () << endl;    
	x << "Game Category       : " << ga.Get_Cat () << endl;      
	x << "Online             : " << ga.Get_Online () << endl;    
	x << "Developer          : " << ga.Get_Comp ()->Get_title () << endl; 
	
	return x;
}
