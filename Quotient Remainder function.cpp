#include <iostream>
using namespace std;

void get_data(int * ptr_dividend, int * ptr_divisor);
void divide(int dividend, int divisor, int * ptr_quotient, int * ptr_remainder);
void print_results(int quotient, int remainder);

int main(void){
	int dividend, divisor, quotient, remainder;
	get_data(&dividend, &divisor);
	divide(dividend, divisor, &quotient, &remainder);
	print_results(quotient, remainder);

	return 0;
}

void get_data(int* ptr_dividend, int* ptr_divisor){
	int dividend, divisor;
	cout << "Enter the dividend and divisor: ";
	cin >> dividend >> divisor;
	*ptr_dividend = dividend;
	*ptr_divisor = divisor;

	return;
}

void divide(int dividend, int divisor, int* ptr_quotient, int* ptr_remainder){
	*ptr_quotient = dividend / divisor;
	*ptr_remainder = dividend % divisor;

	return;
}

void print_results(int quotient, int remainder){
	cout << "The quotient is " << quotient << endl;
	cout << "The remainder is " << remainder << endl;

	return;
}
