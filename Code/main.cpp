#include <iostream>
#include "AppData.h"

using namespace std;

int main (int argc, char **argv)
{
	AppConst cmp1 ("Bethesda", "1010", "bethesda@gmail.com");
	AppConst cmp2 ("Riot Games", "9776", "riotgames@gmail.com");
	AppConst cmp3 ("Microsoft", "8888", "microsoft@gmail.com");
	
	Game g1 ("RPG", true, "1234", "Skyrim", &cmp1);
	Game g2 ("MOBA", true, "6542", "League of Legends", &cmp2);
	
	list <string> strs1 = {"DVD", "CD-PLAYER", "Blu-ray"};
	list <string> strs2 = {"DVD"};
	list <string> strs3 = {"MP3", "MP4"};
	MediaPlayer m1 (strs1, "4345", "PopCorn", &cmp3);
	MediaPlayer m2 (strs2, "5674", "Stremio", &cmp1);
	MediaPlayer m3 (strs3, "9241", "VLC Media Player", &cmp3);
	MediaPlayer m4 (m3);
	
	list <App *> apps = {&g1, &m1, &m2};
	list <AppConst *> comps = {&cmp1};
	
	AppData x (apps, comps);
	x.AddApp (&g2);
	x.AddApp (&m3);
	x.AddApp (&m4);
	x.AddAppConst (&cmp2);
	x.AddAppConst (&cmp3);
	x.CsvComps ();
	cout << x;
	cout << endl << "*************************************" << endl;
	cout << "REMOVING APPLICATION" << endl;
	cout << "*************************************" << endl << endl;
	x.SubApp(&g1);
	cout << x;
	list<MediaPlayer *> media;
	media = x.MedStr("DVD");
	cout << "MediaPlayer Applications with DVD format: " << media.size() << endl;

	return 0;
}