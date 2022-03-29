#include <iostream>
using namespace std;

#define PI 3.14
#if 5 > 10
const int N = 10;
#elif 15 > 10
const int N = 15;
#else
const int N = 5;
#endif

#if 1>5
int main() {
	setlocale(LC_ALL, "ru");
	
	cout << "Hello";

	return 0;
}

#else
int main() {
	setlocale(LC_ALL, "ru");

#define M 11
#ifdef M
	cout << "М существует";
#else 
#error "М должно существовать";
#endif

	return 0;   
}
#endif