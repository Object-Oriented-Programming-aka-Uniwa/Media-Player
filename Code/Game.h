#ifndef GAME_H
#define GAME_H

#include "App.h"
#include <string>

class Game : public App
{
	private:
		std::string cat;
		bool is_online;
	public:
		Game (std::string, bool, const char *, std::string, AppConst *);
		std::string Get_Cat () const;
		bool Get_Online () const;
};

std::ostream &operator<< (std::ostream &, const Game &);

#endif