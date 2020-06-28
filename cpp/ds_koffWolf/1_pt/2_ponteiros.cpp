#include <iostream>
#include <string>

using namespace std;

/*
	LEGENDAS:

	* - Operador Derreferência:
			Quando aplicado ao valor de um ponteiro, ele converte esse valor
			em uma referência ao objeto que é apontado por ele.

	& - Operador de Endereço:
		Retorna a posição de memória (endereço) do objeto que ele segue.

*/

static int interCounter;

void printStatus(int a, int b, int *pointer){

	cout << "Test number: " << interCounter << endl;
	cout << "x: " << a << " y: " << b << " ptr: " << *pointer << endl;
	cout << "x: " << a << " y: " << b << " ptr: " << pointer << endl;
	cout << "x: " << a << " y: " << b << " ptr: " << &pointer << endl;
	interCounter++;
}

int main(){
	int x;
	int y(6);
	int	*ptr;

	x = 1; 
	ptr = &x;

	interCounter = 1;
	printStatus(x, y, ptr);

	*ptr = y;
	printStatus(x, y, ptr);

	*ptr+= 12;
	printStatus(x, y, ptr);
}
