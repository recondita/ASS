//============================================================================
// Name        : ASS.cpp
// Author      : Felix Schuetze, Jan Hofmeier
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
//#include <integer>
//#include <array>
#include <stdio.h>
using namespace std;

//int i=0;

void hallo(std::string s)
{
	cout << "Hallo "+s+"!" << endl;
	//int i=8;
	for(int i=0; i<200; i++)
	{
	//std::string test=(std::string)i;
	//cout << test << endl;
	printf("%i",i);
	cout <<endl;
	}
}

void rec(int i)
{
	if(i>0)
	{
		std::string welt="Welt";
			hallo(welt);
			//i--;
			rec(--i);
	}
	else
	{
		for(int j=0; j<10; i++)
		{
		cout << "Ende" << endl;
		}
	}
}

void dcfghjkjhgfd()
{
	std::string welt1="gfjkljhgf";
	std::string welt2="chgjklöjgh";
	std::string welt3="gfhköklgh";
	std::string welt4="hklöljdgsfh";
	std::string welt5="hcghljköljgfhj";
	std::string welt6="fghgjköljfgxh";
	std::string welt7="fdghkölkjgh";
	std::string welt8="sdfghkölälkghdfxghklö";
	std::string welt9="hsdfkjö";
	std::string welt10="Felix ist doof";
	std::string welt11="bkml,ölj";
	std::string welt12="asdfghjklöäölkjhgfdsasdfghjklöäääölkjhgfdsasdfghjklöä";
	std::string welt13="wertzuiopüäölkjhgfdsayxcvbnm,.";
	std::string welt14="&uuml;";
	std::string welt15="dfgjkl";
	std::string welt16="fghjklkjhgf";

}

void arrayTest()
{
	//int test [5];
	for(int i=0; i<20; i++)
	{
		//test[i]=i;
		//std::string str = new string("test");
		hallo(i+"");
	}
}

int main() {
	//rec(10);
	//arrayTest();
	hallo("Welt");
	return 42;
}
