#include <iostream>
#include <windows.h>

using namespace std;

class zespolona {


private:
	int a, b;
	zespolona(int x, int y);
	{
		Re = x;
		Im = y;
	}
public:

	void modul(int Re, int Im) {

	}
	void sprzezenie(int Re, int Im) {
		cout << Re << "-" << Im << "i" << endl;
	}
	int dodawanie(int Re, int Im) {
		cout
	}
	int odejmowanie(int Re, int Im);
	int mnozenie(int Re, int Im);
	void wystwietlanie(int Re, int Im);
};

void modul();

void menu() {
	int m;
	cout << "---MENU---" << endl << "1.Modu³" << endl << "2.Sprzê¿enie" << endl;
	cout << "3.Dodawanie" << endl << "4.Odejmowanie" << endl << "5.Mno¿enie" << endl;
	cout << "6.Wyœwietlenie" << endl;
	cin >> m;
	switch (m) {
	case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
	case 6:

		break;
	default:

		break;
	}

}


int main()
{
	zespolona z;

	cout << "Podaj czêœæ rzeczywist¹: ";
	cin >> z.a;
	system("cls");
	cout << "Podaj czêœæ urojon¹: ";
	cin >> z.b;
	system("cls");
	wyswietlanie();
	menu();
	/*
	{
	case 1:
	zespolona.modul();
	break;
	case 2:
	zespolona.sprzezenie(zespolona.a; zespolona.b);
	break;
	case 3:
	zespolona.dodawanie(zespolona.a; zespolona.b);
	break;
	case 4:
	zespolona.odejmowanie();
	break;
	case 5:
	zespolona.mnozenie();
	break;
	default:
	cout << "B³¹d";
	Sleep(2500);
	main();
	break;
	}
	*/
}

void wyswietlanie() {
	cout << zespolona.a << "+" << zespolona.b << "i" << endl;
}

void modul()
{
}