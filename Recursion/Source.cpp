#include <iostream>
using namespace std;


int Fib(int number)
{
	if (number == 1 || number == 2)
		return 1;
	return Fib(number - 1) + Fib(number - 2);
}

int Pow(int base, int power)
{
	if (power == 1)
		return base;
	return base * Pow(base, power - 1);
}

void main()
{
	cout << Pow(2, 10) << endl;
	cout << Fib(15) << endl;
}