int main()
{
	string word = "";

	cout << "Input a Phrase: ";
	//cin >> word;
	getline(cin, word);

	int k = word.length() - 1;

	cout << "Reversed Phrase: ";

	for (k; k >= 0; k--) {
		cout << word[k];
	}
	cout << endl;
	system("PAUSE");
	return 0;
}
