#include "Aloha.h"

#include <iostream>
#include <string>

/*
	using namespace std, is using all the std's functions
	so I'm using only std-by-std's function.
*/
using std::string;
using std::cout;
using std::endl;
using std::cin; 

Cat::Cat(){this->name="Undefined";};

Cat::Cat(string name){
	this->name = name;
}

void Cat::setName(string name){
	this->name = name;
}

string Cat::getName(){
	return this->name;
}

void Cat::noise(){
	string name;
	cout << "Say your name" << endl;
	getline(cin, name);
    cout << "Meow " << name << endl;
}