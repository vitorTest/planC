#include <iostream>
using namespace std;

string separator = "------------------------------------------\n";

template<typename T>
T Max(T x, T y){
	return x > y ? x : y;
}

template<typename T>
T Add(T x, T y){
	return x + y;
}

template<typename A>
A ArraySum(A *pArr, A arrSize){
	A elemSum = 0;
	for(int i = 0; i < arrSize; i++){
		elemSum += pArr[i];
	}
	return elemSum;
}

int main(){

	cout << "Testing Max()" << endl;
	auto num = Max(3, 8);
	cout << num << endl;
	auto name = Max('a', 'V');
	cout << name << endl;
	cout << separator;

	cout << "Testing Add()" << endl;
	auto sum = Add(1.2, 23.4);
	cout << sum << endl;
	cout << separator;

	cout << "Testing ArraySum()" << endl;
	float arr[3] = {1.3, 1.2, 1.3};
	float aSize = (sizeof(arr)/sizeof(*arr)); //Just did that to remember classic C way to determine an array size.
	auto arrSum = ArraySum(arr, aSize);
	cout << arrSum << endl;
	cout << separator;

	return 0;
}