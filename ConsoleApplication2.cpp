#include <iostream>

#include <string>

using namespace std;

int main()

{


	string ulica, nr;

	int um, st;

	cout << "Podaj nazwe ulicy na ktorej mieszkasz ? "; getline(cin, ulica);

	cout << "Podaj nr domu? "; cin >> nr;

	cout << " Na ile oceniasz swoje umiejetnosci programowania w skali [2 - 6]? "; cin >> um;

	cout << "Twoj staz programistyczny ? "; cin >> st;

	cout << "Adres: " << ulica << " " << nr << endl;

	cout << "Ocena: " << um - 1 << endl;

	cout << "Staz: " << st << " dni";

	return 0;

}
