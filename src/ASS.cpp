//============================================================================
// Name        : ASS.cpp
// Author      : Felix Schuetze, Jan Hofmeier
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
//#include <array>
using namespace std;

int i=0;

void hallo(std::string s)
{
	cout << "Hallo "+s+"!" << endl;
}

void rec()
{
	if(i<17)
	{
		std::string welt="Welt";
			hallo(welt);
			i++;
			rec();
	}
	else
	{
		while(true)
		{
		cout << "Ende" << endl;
		}
	}
}

void arrayTest()
{
	int test [5];
	for(int i=0; true; i++)
	{
		test[i]=i;
		hallo(i+"");
	}
}

int main() {
	//rec();
	arrayTest();
	return 42;
}
