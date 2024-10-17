#include "MediaPlayer.h"
#include <iostream>

using namespace std;

MediaPlayer::MediaPlayer (list <string> in_str, const char *in_code, string in_title, AppConst *in_comp) : App (in_code, in_title, in_comp)
{
	str = in_str;
}

MediaPlayer::MediaPlayer (const MediaPlayer &media, const App &app) : App (app)
{
	str = media.str;
}

list <string> MediaPlayer::Get_Str () const
{
	return str;
}

ostream &operator<<(ostream &x, const MediaPlayer &me)
{
    list<string> cmp;
    list<string>::iterator it;
    cmp = me.Get_Str();
    x << "MEDIA PLAYER APPLICATION" << endl;
    x << "---------------------" << endl;
    x << "Code                  : " << me.Get_Code() << endl;
    x << "Title                 : " << me.Get_Title() << endl;
    x << "Formats               : ";
    for (it = cmp.begin(); it != cmp.end(); it++)
        x << *it << " ";
    x << endl;
    x << "Manufacturer Email     : " << me.Get_Comp()->Get_Email() << endl;

    return x;
}
