#ifndef MEDIAPLAYER_H
#define MEDIAPLAYER_H

#include "App.h"
#include <string>
#include <list>

class MediaPlayer : public App
{
	private:
		std::list <std::string> str;
	public:
		MediaPlayer (std::list <std::string> str, const char *, std::string, AppConst *);
		MediaPlayer (const MediaPlayer &, const App &);
		std::list <std::string> Get_Str () const;
};

std::ostream &operator<< (std::ostream &, const MediaPlayer &);

#endif