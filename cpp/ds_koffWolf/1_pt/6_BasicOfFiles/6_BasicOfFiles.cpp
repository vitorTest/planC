#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){

	if(argc < 3){
		cerr << "Using test_file <inputFile> <outFile>\n";
		return 1;
	}

	ifstream inputFile(argv[1]);
	if(!inputFile){
		cerr << "Fail to open " << argv[1] << " to input\n";
		return 1;
	}

	ofstream outFile(argv[2]);
	if(!outFile){
		cerr << "Fail to open " << argv[2] << " to output\n";
		return 1;
	}

	string first, second;

	while(inputFile >> first){
		cout << "Write a word to the follow word: " << first << ": ";
		cin >> second;
		outFile << first << ", " << second << endl;
	}

	//Don't forget to close!
	inputFile.close();
	outFile.close();
	return 0;

}