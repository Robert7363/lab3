

#include <iostream>
#include <time.h>

using namespace std;
int main()
{
	
	
	
	int tab[4][4], suma=0;
	srand(time(NULL));
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			tab[i][j] = rand() % 74 - 23;
			cout << tab[i][j] << " \t";

			if (i == j) suma += tab[i][j];
		}
		cout << endl;
		
	}
	cout << "suma glownej przekatnej: " << suma << endl;

	/*int tab[10],a,b=0;
	cout << "Podaj a ", cin >> a;
	for (int i = 9; i >= 0; i--)
	{
		tab[i] = a-b ;
		b += 5;
          }
	for (int i = 0; i < 10; i++) {
		cout << tab[i] << " ";
	}*/
}
