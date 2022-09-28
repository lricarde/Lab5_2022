#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{ 
	std::string inptext;
	char alphabet[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char vectorinput[] = { 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' };
	std::vector<char> code(vectorinput, vectorinput + sizeof(vectorinput) - 1);

	cout << "Enter your text that you wish to cypher: ";
	getline(cin, inptext);

	for (int i = 0; i < inptext.size(); i++) {
		if (i >= 65 && i <= 90) {
			cout << toupper; //that it becomes a captial letter
			
		}
		else if (i >= 97 && i <= 122) {
			cout << islower; //that it becomes a lowercase letter

		}
	}
	
	cout << "Your encoded message: " << endl;
	return 0;
}