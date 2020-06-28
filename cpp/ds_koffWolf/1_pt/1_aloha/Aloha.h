/*
*
*   Functional exemple
*   Vitor Felix
*   with Koffman & Wolgang
*   13 / 03 / 2017
*	20 / 07 / 2017
*/


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


class Cat{
	public:
		Cat();
 		Cat(string name);
 		void setName(string name);
 		string getName();
    	void noise();

	private:
		string name;
};


