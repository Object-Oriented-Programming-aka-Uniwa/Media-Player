#ifndef APPCONST_H
#define APPCONST_H

#include <string>

class AppConst  
{
	private:
		std::string title;
		char *code;
		std::string email;
	public:
		AppConst (std::string, const char *, std::string);
		~AppConst ();
		std::string Get_title () const;
		char *Get_code () const;
		std::string Get_Email () const;
		AppConst operator= (const AppConst &);
};

#endif