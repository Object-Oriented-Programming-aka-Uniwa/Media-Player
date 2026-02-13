#include "AppConst.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <exception>

using namespace std;

AppConst::AppConst (string in_title, const char *in_code, string in_email) 
{
	try
	{
		code = new char [strlen (in_code) + 1];
		strcpy (code, in_code);
		title = in_title;
		email = in_email;
	}
	catch (bad_alloc x)
	{
		cout << "Memory allocation problem" << endl;
		exit (1);
	}
}

AppConst::~AppConst ()
{
	delete [] code;
}

string AppConst::Get_title () const
{
	return title;
}

char *AppConst::Get_code () const
{
	return code;
}

string AppConst::Get_Email () const
{
	return email;
}

AppConst AppConst::operator= (const AppConst &comp)
{
	if (&comp == this)
		return *this;
	
	delete [] code;
	try
	{
		code = new char [strlen (comp.code) + 1];
		strcpy (code, comp.code);
		title = comp.title;
		email = comp.email;
		return *this;
	}
	catch (bad_alloc x)
	{
		cout << "Memory allocation problem" << endl;
		exit (1);
	}
}
