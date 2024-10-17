#include "App.h"
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <exception>

using namespace std;

App::App (const char *in_code, string in_title, AppConst *in_comp)
{
	try
	{
		code = new char [strlen (in_code) + 1];
		strcpy (code, in_code);
		title = in_title;
		comp = in_comp;
	}
	catch (bad_alloc x)
	{
		cout << "Memory allocation problem" << endl;
		exit (1);
	}
}

App::App (const App &app)
{
	try
	{
		code = new char [strlen (app.code) + 1];
		strcpy (code, app.code);
		title = app.title;
		comp = app.comp;
	}
	catch (bad_alloc x)
	{
		cout << "Memory allocation problem" << endl;
		exit (1);
	}
}

App::~App ()
{
	delete [] code;
}

char *App::Get_Code () const
{
	return code;
}

string App::Get_Title () const
{
	return title;
}

AppConst *App::Get_Comp () const
{
	return comp;
}

	