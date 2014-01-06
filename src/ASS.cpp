//============================================================================
// Name        : ASS.cpp
// Author      : Felix Schuetze, Jan Hofmeier
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
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
			rec();
	}
	else
		return;
}


int main() {
	rec();
	return 42;
}
