#include <Windows.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#pragma comment(lib, "Winmm.lib")

	using namespace std;

	void printx(string input);

	void main() {

		string input;

		ofstream outfile;
		outfile.open("h:\\Input-Text.txt", ios::out/* | ios::trunc*/);

		cout << "String to save to .txt: ";
		getline(cin, input);

		outfile << input << endl;

		outfile.close();

		printx(input);

		cout << endl;
		system("PAUSE");
	}


	void printx(string input) {

		string output;
		ifstream infile;
		infile.open("h:\\Input-Text.txt");

		while (!infile.eof()) {
			getline(infile, input);
			cout << input;
		}

		infile.close();
	}
