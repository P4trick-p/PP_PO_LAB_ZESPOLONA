#include <iostream>
#include <math.h>
#include <time.h>
#include <Windows.h>

using namespace std;

int op; void menu();

class Zespolona
{
private:
	double Rm;
	double Im;

public:

	Zespolona(double R = 0, double I = 0)
	{
		Rm = R;
		Im = I;
	}

	Zespolona(int z = 0)
	{
		srand(time(NULL));
		Rm = (rand() % z) - (z / 2);
		Im = (rand() % z) - (z / 2);
	}

	~Zespolona()
	{
	};

	void modul()
	{
		int i;
		i = sqrt(Rm*Rm + Im * Im);
		cout << "|z| = " << i << endl;
		//return sqrt(Rm*Rm + Im * Im);
	};

	void sprzezenie()
	{
		int Rm_sp;
		int Im_sp;
		cout << "Sprzezenie: z = ";
		if ((Rm > 0 && Im > 0) || (Rm < 0 && Im < 0) || (Rm < 0 && Im>0) || (Rm > 0 && Im < 0)) {

		}
		else {
			if (Rm == 0 && Im > 0) {
				cout << "-" << Im << "i";
				Im_sp = -Im;
			}
			if (Rm == 0 && Im < 0) {
				Im_sp = -Im;
				cout << Im_sp << "i";
			}
			if (Rm > 0 && Im == 0) {
				cout << "-" << Rm;
				Rm_sp = -Rm;
			}
			if (Rm < 0 && Im == 0) {
				Rm_sp = -Rm;
			}
		}
	};

	double dodawanie(Zespolona z)
	{
		z.Rm += Rm;
		z.Im += Im;
		return z.Rm, z.Im;
	};

	double odejmowanie(Zespolona z)
	{
		/*Rm = Rm - z.Rm;
		Im = Im - z.Im;
		return Rm, Im;*/
		z.Rm -= Rm;
		z.Im -= Im;
		return z.Rm, z.Im;
	};

	double mnozenie(Zespolona z)
	{
		z.Rm = z.Rm * Rm;
		z.Im = z.Im * Im;
		return z.Rm, z.Im;
	};

	void wyœwietlanie()
	{
		cout << "z = ";
		if (Im > 0)
			cout << Rm << " + " << Im << "i" << endl;
		if (Rm == 0 && Im == 0)
			cout << "0" << endl;
		if (Rm == 0 && Im != 0)
			cout << Im << "i" << endl;
		if (Rm != 0 && Im == 0)
			cout << Rm << endl;
		system("pause");
	};

};

int main()
{
	cout << "++ Kalkulator liczb zespolonych ++" << endl;
	cout << "1. Wlasne" << endl << "2. Losowe" << endl;

	cout << "Wybierz opcjê: ";
	cin >> op;
	system("cls");
	switch (op) {
	case 1:

		double I;
		double R;
		cout << "Wprowadz liczbe rzeczywista: ";
		cin >> R;
		system("cls");
		cout << "Wprowadz liczbe urojona: ";
		cin >> I;
		system("cls");
		{
			Zespolona z1(R, I);
			z1.wyœwietlanie();
		}

		break;
	case 2:
		int zakres;
		cout << "WprowadŸ zakres liczb: ";
		cin >> zakres;
		{
			Zespolona z2(zakres);
			z2.sprzezenie();
			z2.wyœwietlanie();
			z2.modul();
		}
		break;
	default:
		cout << "Nie ma takiej opcji";
		Sleep(1500);
		main();
		break;
	}
	menu();

	system("pause");
	return 0;
}

void menu() {
	int menu;
	cout << "++ MENU ++" << endl;
	cout << "1.Modul" << endl;
	cout << "2.Sprzezenie" << endl;
	cout << "3.Dodawanie" << endl;
	cout << "4.Odejmowanie" << endl;
	cout << "5.Mnozenie" << endl;
	cout << "6.Wyswietlanie" << endl;
	cout << "7.Wyjœcie" << endl;
	cin >> menu;
	switch (menu) {
	case 1:
	{
		if (op == 1) { z1.modul(); }
		if (op == 2) { z2.modul(); }
	}
	break;
	case 2:
	{
		if (op == 1) { z1.sprzezenie(); }
		if (op == 2) { z2.sprzezenie(); }
	}
	break;
	case 3:
	{
		if (op == 1) { z1.dodawanie(); }
		if (op == 2) { z2.dodawanie(); }
	}
	break;
	case 4:
	{
		if (op == 1) { z1.odejmowanie(); }
		if (op == 2) { z2.odejmowanie(); }
	}
	break;
	case 5:
	{
		if (op == 1) { z1.mnozenie(); }
		if (op == 2) { z2.mnozenie(); }
	}
	break;
	case 6:
	{
		if (op == 1) { z1.wyswietlanie(); }
		if (op == 2) { z2.wyswietlanie(); }
	}
	break;
	case 7:
	{
		~Zespolona;
		exit(0);
	}
	default:
		cout << "Nie ma takiej opcji!";
		system("cls");
		menu();
	}