#include <iostream>
#include <string>

using namespace std;

/*
	In Cpp you call a parameter by value or by reference.
	In this example all functions will to concatenate a string
	to identify, that they have been called.
*/

//This pass a reference to the variable - Change the variable 
void callByReference(string callMeTemp){
	callMeTemp += "I was called by reference";
	cout << "\n\t [+] Value of 'callMe' in callByReference(): " << callMeTemp << "\n" << endl;
}

//This pass the value of the variable - Do not change the variable 
void callByValue(string &callMeTemp){
	callMeTemp += "I was called by value";
	cout << "\n\t [+] Value of 'callMe' in callByValue(): " << callMeTemp << "\n" << endl;
}

/*
	Pass a "big" variable (such as an complex class), is more efficient if passed by reference
	(instead to pass a huge copy). But if you don't wanna to chage the variable, you can pass
	this like an 'const' reference.
*/
void callByConstReference(const string &callMeTemp){
	//You can't modify the variable, unless don't want to compile your program.
	//We only can "read" the variable.

	int count = 0;

	for(int i=0; i<callMeTemp.size(); i++){
		if(callMeTemp[i] == 'a'){
			count++;
		}
	}
	cout << "Your String has " << count << " letters a" << endl; 
}

int main(){
	string callMe = "Hi ";

	cout << "1 - Initiated value of callMe: " << callMe << endl;
	
	callByReference(callMe);
	cout << "2 - Value of callMe, after been called by reference: " << callMe << endl;

	callByValue(callMe);
	cout << "3 - Value of callMe, after been called by value: " << callMe << endl;

	callByConstReference(callMe);
}