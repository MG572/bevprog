#include "std_lib_facilities.h"

int main()
{

	int birth_year = 2002;
	cout << "Decimal: " << '\t' << birth_year << dec <<  '\t' << birth_year <<endl;
	cout << "Hexadecimal: "<< '\t'<< hex << birth_year << '\t' << dec << birth_year << endl;
	cout << "Octal: "<< '\t' << oct << birth_year << '\t'<<  dec << birth_year <<endl;
	cout << dec << 19 << endl;
	int a, b ,c, d;
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
	float number = 1234567.89;
	cout << defaultfloat << number << endl;
	cout << fixed << number << endl;
	cout << scientific<< number << endl;
	cout << '\t' << setw(10) << "First name" <<  '\t' << setw(10) <<"Second name" << '\t' << setw(10) <<"Telephone number" << '\t' <<"E-mail address"<<'\t' << endl;
	cout << '\t' << setw(10) <<"Gergely" << '\t' << setw(10) <<"Márton" << '\t' << setw(10) <<"0655991576" << '\t' << setw(30) <<"martongergely2802@gmail.com" << endl;
	cout << '\t' << setw(10) <<"János" << '\t' << setw(10) <<"Kis" << '\t' << setw(10) <<"0655994767" << '\t' << setw(30) <<"kisjanos55@gmail.com" << endl;
	cout << '\t' << setw(10) <<"Anna" << '\t' << setw(10) <<"Nagy" << '\t' << setw(10) <<"0655011262" << '\t' << setw(30) <<"nagyanna25@gmail.com" << endl;
	cout << '\t' << setw(10) <<"Péter" << '\t' << setw(10) <<"Kovács" << '\t' << setw(10) <<"0655578629" << '\t' << setw(30) <<"kovacspeter487@gmail.com" << endl;
	cout << '\t' << setw(10) <<"István" << '\t' << setw(10) <<"Szabó" << '\t' << setw(10) <<"0655914050" << '\t' << setw(30) <<"szaboistvan78@gmail.com" << endl;
	cout << '\t' << setw(10) <<"Máté" << '\t' << setw(10) <<"Orosz" << '\t' << setw(10) <<"0655176409" << '\t' << setw(30) <<"oroszmate7891@gmail.com" << endl;
	return 0;

}