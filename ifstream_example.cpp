//============================================================================
// Name        : practicing_writing_file.cpp
// Author      : Jose
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {

	ifstream joseFile("players_records.txt");

	int number;
	string name;
	double score;

	if (joseFile.is_open()){
		while(joseFile << number << name << score){
			cout << number << ", " << name << ", " << score << endl;

		}
	}

	return 0;
}
