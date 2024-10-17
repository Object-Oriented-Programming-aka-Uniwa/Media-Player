#include "AppData.h"
#include <iostream>
#include <cstdlib>
#include <exception>
#include <fstream>

using namespace std;

AppData::AppData (list <App *> in_apps, list <AppConst *> in_comps)
{
	list <App *>::iterator it1;
	list <AppConst *>::iterator it2;
	for (it1 = in_apps.begin (); it1 != in_apps.end (); it1++)
		apps.push_back (*it1);
	for (it2 = in_comps.begin (); it2 != in_comps.end (); it2++)
		comps.push_back (*it2);
}

list <App *> AppData::Get_App () const
{
	return apps;
}
	
void AppData::AddApp (App *x)
{
	apps.push_back (x);
}

void AppData::SubApp (App *x)
{
	list <App *>::iterator it;
	for (it = apps.begin (); it != apps.end (); it++)
	{
		Game *game = dynamic_cast <Game *> (*it);
		if (game)
		{
			if (x == *it)
				it = apps.erase (it);
		}
		MediaPlayer *me = dynamic_cast <MediaPlayer *> (*it);
		if (me)
		{
			if (x == *it)
				it = apps.erase (it);
		}
	}
}

void AppData::AddAppConst (AppConst *x)
{
	comps.push_back (x);
}

void AppData::CsvComps ()
{
    try 
    {
        list <AppConst *>::iterator it;
        ofstream x;
        x.open ("Companies.txt");
        if (!x.good ())
            throw 1;
        for (it = comps.begin (); it != comps.end (); it++)
        {
            x << "APPLICATION DEVELOPER" << endl;
            x << "---------------------" << endl;
            x << "Name    : " << (*it)->Get_title () << endl;
            x << "Code    : " << (*it)->Get_code () << endl;
            x << "Email   : " << (*it)->Get_Email () << endl << endl;
        }
        x.close ();
    }
    catch (int y)
    {
        cout << "Problem while opening the file" << endl;
        exit (1);
    }
}

list <MediaPlayer *> AppData::MedStr (string str)
{
	list <string> list_str;
	list <MediaPlayer *> list_media;
	list <App *>::iterator it_app;
	list <string>::iterator it_str;
	for (it_app = apps.begin (); it_app != apps.end (); it_app++)
	{
		MediaPlayer *media = dynamic_cast <MediaPlayer *> (*it_app);
		if (media)
		{
			list_str = media->Get_Str ();
			for (it_str = list_str.begin (); it_str != list_str.end (); it_str++)
			{
				if (*it_str == str)
					list_media.push_back (media);
			}
		}
	}
	
	return list_media;
}
				
ostream &operator<< (ostream &x, const AppData &app)
{
	list <App *> appli;
	list <App *>::iterator it;
	appli = app.Get_App ();
	for (it = appli.begin (); it != appli.end (); it++)
	{
		Game *game = dynamic_cast <Game *> (*it);
		if (game)
			x << *game << endl;
		MediaPlayer *me = dynamic_cast <MediaPlayer *> (*it);
		if (me)
			x << *me << endl;
	}
	
	return x;
}				
			
			
			
		
		


		