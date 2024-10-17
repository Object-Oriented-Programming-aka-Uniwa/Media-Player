#ifndef APPDATA_H
#define APPDATA_H

#include "App.h"
#include "Game.h"
#include "MediaPlayer.h"
#include "AppConst.h"
#include <iostream>
#include <list>

class AppData
{
	private:
		std::list <App *> apps;
		std::list <AppConst *> comps;
	public:
		AppData (std::list <App *>, std::list <AppConst *>);
		std::list <App *> Get_App () const;
		void AddApp (App *);
		void SubApp (App *);
		void AddAppConst (AppConst *);
		void CsvComps ();
		std::list <MediaPlayer *> MedStr (std::string);
};

std::ostream &operator<< (std::ostream &, const AppData &);

#endif