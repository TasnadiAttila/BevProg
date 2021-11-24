#include "std_lib_facilities.h"

int main(){
    //task 1&2
    int birth_year = 2001;
       cout << birth_year << "\t(decimal)\n" << 
        hex << birth_year << "\t(hexadecimal)\n" << 
        oct << birth_year << "\t(octal)\n";
    
    int my_age = 20;
    cout << dec << my_age << endl;

    int a, b, c, d;
	cout << "Please enter  4 numbers!" << endl;
    //not working for some reason
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << "\nThe first number in decimal: " << a << endl;
	cout << "The second number in octal: " << b << endl;
	cout << "The third and fourth number in hexadecimal: " << c << ", " << d<< endl;
    
   /*int asd = 1234;
    cout << hex << asd << endl;
    */
	
	cout << 1234567.89 << "\t(defaultfloat)" << endl;
	cout << fixed << 1234567.89 << "\t(fixed)" << endl;
	cout << scientific << 1234567.89 << "\t(scientific)" <<  endl;

    cout << '|' << setw(5) << "Attila" << setw(2) << '|' << setw(6) << "Tasnádi"
	<< setw(5) <<  '|' << setw(15) << "tasnadi.attila21@gmail.com"
	<<  '|' << setw(10) << "06209876543" << endl;

	cout << '|' << setw(5) << "Benedek" << '|' << setw(6) << "Körvélyessi"
	<< '|' << setw(15) << "benedek.benedek@gmail.com"
	<< setw(2) << '|' << setw(10) << "06301121845" << endl;

	cout << '|' << setw(4) << "Zita" << setw(4) << '|' << setw(2) << "Para"
	<< setw(8) <<'|' << setw(15) << "parazita@gmail.com"
	<< setw(9) << '|' << setw(10) << "06405554472" << endl;

	cout << '|' << setw(2) << "Git" << setw(5) << '|' << setw(2) << "Áron"
	<< setw(8) << '|' << setw(15) << "gitaron@gmail.com"
	<< setw(10) <<'|' << setw(10) << "06204578942" << endl;

	cout << '|' << setw(5) << "Ebéd" << setw(4) << '|' << setw(2) << "Elek"
	<< setw(8) << '|' << setw(15) << "ebedelek@gmail.com"
	<< setw(9) <<'|' << setw(10) << "06305599874" << endl;
}
