#include <iostream>
#include <iomanip>
using namespace std;

double get_celsius();
double convert(double cels);
void display_results(double cels, double fahr);

int main(){

	double cels = get_celsius();
	double fahr = convert(cels);
	display_results(cels, fahr);

	return 0;
}

double get_celsius(){

	double cels;
	cout << "Enter the temperature in degrees Celsius: ";
	cin >> cels;

	return cels;
}

double convert(double cels){

	return 9.0 / 5 * cels + 32;
}

void display_results(double cels, double fahr){

	cout << "Celsius Fahrenheit\n";
	cout << fixed << setprecision(2);
	cout << setw(7) << cels << " ";
	cout << setw(10) << fahr << endl;
}
