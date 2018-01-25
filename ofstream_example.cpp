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

	ofstream joseFile("players_records.txt");

	cout<<"Enter number name score"<<endl;
	cout<<"Press control z to quit"<<endl;

	int number;
	string name;
	double score;

	if (joseFile.is_open()){
		while(cin >> number >> name >> score){
			joseFile<< number << " " << name << " " << score << endl;

		}
	}

	return 0;
}
