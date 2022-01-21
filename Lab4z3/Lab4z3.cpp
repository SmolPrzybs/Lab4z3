#include <iostream>
using namespace std;
void zamiana(int liczba);


int main()
{
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	cout << liczba << " Postac binarna: ";
	zamiana(liczba);
	cout << endl;
	return 0;
}


void zamiana(int liczba)
{
	int i = 0, tab[31];
	while (liczba)
	{
		tab[i++] = liczba % 2;
		liczba /= 2;
	}
	for (int j = i - 1; j >= 0; j--)
		cout << tab[j];
}