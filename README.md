#include <Windows.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string word = "";

	cout << "Input a Phrase to be encoded: ";
	//cin >> word;
	getline(cin, word);

	int k = word.length();

	for (k; k >= 0; k--) {
		cout << word[k];
	}

	system("PAUSE");
	return 0;
}
