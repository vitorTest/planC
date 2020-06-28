#include "Watch.h"
#include <iostream>
using namespace std;

int main(){
	Watch w1, w2;

	cout << "Watch 2:\n" << w2; 
	cout << "Watch 1:\n" << w1;
	
	w1.fix_watch(15, 57, 00);
	w2.fix_watch(16, 00, 00);
	
	cout << "After Constructor: " << endl;
	cout << "Watch 2:\n" << w2; 
	cout << "Watch 1:\n" << w1;
	
	/*Set the watches to the same hour*/
	cout << "Are these equal? " 
		 << ((w1 == w2) ? "yes":"no\n Correcting...") << '\n';

	int tikCount = 0;
	while(w1 != w2){
		w1.tik();
		++tikCount;
	}

	cout << "Watch 1:\n" << w1;
	cout << "Watch 2:\n" << w2; 
	cout << "tiks: " << tikCount << '\n';

	return 0;
}