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


void hallo(std::string s)
{
	cout << "Hallo "+s+"!" << endl;
}

int main() {
	std::string welt="Welt";
	hallo(welt);
	return 42;
}


