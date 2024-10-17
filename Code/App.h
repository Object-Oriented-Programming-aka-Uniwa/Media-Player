#ifndef APP_H
#define APP_H

#include "AppConst.h"
#include <string>

class App
{
	private:
		char *code;
		std::string title;
		AppConst *comp;
	public:
		App (const char *, std::string, AppConst *);
		App (const App &);
		virtual ~App ();
		char *Get_Code () const;
		std::string Get_Title () const;
		AppConst *Get_Comp () const;
};

#endif