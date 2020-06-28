#include <iostream>
#include <string>

using namespace std;

/*
	Cpp allows to define class types in a way that they behaves like primitives.
	Operators are functions.
*/

//Here we define the character $ to shift letters between two strings
string operator%(string &str1, string &str2){

	string shiftLetters;

	for(int i = 0; i < str1.size(); i++){
		if(i % 2 == 0){
			shiftLetters += str1[i];
		}else if(i < str2.size()){
			shiftLetters += str2[i];
		}
	}

	return shiftLetters;
}

int main(){

	string str1 = "Matos";
	string str2 = "Matheus";

	cout << "Your new name is: " << str1 % str2 << endl;

}