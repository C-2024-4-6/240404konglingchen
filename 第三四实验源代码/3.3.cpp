#include<iostream>
#include"mytemperature.h"
#include<iomanip>
using namespace std;
int main() {
	cout << "Celsius\t\tFahrenheit\t|\tFahrenheit\tCelsius"<<endl;
	double cel_values[] = { 40.0,39.0,31.0 };
	double fah_values[] = { 120.0,110.0,30.0 };
	
	for (int i = 0; i < 3; i++) {
		cout << fixed << setprecision(1);
		cout << cel_values[i] << "\t\t" << celsius_to_fah(cel_values[i]) << "\t\t";
		cout << "|\t";
		cout <<fah_values[i] << "\t\t" << fixed << setprecision(2) << fahrenheit_to_cels(fah_values[i]) << endl;
		if (i == 1)
			cout << "......    \t......    \t|\t......\t        ......" << endl;
	}
	return 0;

}
