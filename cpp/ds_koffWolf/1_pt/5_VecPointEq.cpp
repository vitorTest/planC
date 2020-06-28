#include <iostream>
#include <string>

using namespace std;

/*
	Cpp realizes an automathic conversion of an pointer type, to 
	a vector type.
*/

int main(){
	char victor[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

	for(int i=0; i < 10; i++){
		cout << *(victor + i) << endl;
	} 
}