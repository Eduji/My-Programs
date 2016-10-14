#include <Windows.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#pragma comment(lib, "Winmm.lib")

using namespace std;
int main(){
	string output;
	ifstream file;
	file.open("h:\\text.txt");
	//char output[100];
	while (!file.eof()) {
		if (file.peek() == '\n')
			cout << endl;
		getline(file, output);
		cout << output;
	}
	file.close();
	cout << endl;
	system("PAUSE");
	return 0;
}

//plays music:
//PlaySound("E:\\Media\\Music\\06_Bad_Reputation.wav", NULL, SND_FILENAME);
