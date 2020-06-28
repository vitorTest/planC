#include "Aloha.h"
#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main(){

	string nome;
	nome = "Jao";	
    Cat *tico = new Cat(nome);
    Cat neko;
    neko.setName("Neko");
    //cout << numeric_limits<int>::max() << endl;
    //char letter = 'A';
	//cout << int(letter) << endl;
/*
	cout << tico->getName() << endl;
	cout << neko.getName() << endl;
*/
	Cat *puppies = new Cat[3];

	puppies[0] = *tico;
	puppies[1] = neko;

	for(int i=0; i < 3; i++){
		cout << puppies[i].getName() << endl;
	}

	puppies = new Cat[5];

for(int i=0; i < 5; i++){
		cout << puppies[i].getName() << endl;
	}

    return 0;
}
