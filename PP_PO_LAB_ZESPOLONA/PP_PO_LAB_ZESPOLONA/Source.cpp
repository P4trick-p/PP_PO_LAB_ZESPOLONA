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

	Zespolona(int z = 100)
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
		double i;
		i = sqrt((Rm * Rm) + (Im * Im));
		cout << "|z| = " << i << endl;
	};

	void sprzezenie()
	{
		cout << "Sprzezenie: z = ";
		if (Im > 0) {
			if (Rm != 0) {
				cout << Rm << "-" << Im << "i";
			}
			if (Rm == 0) {
				cout << "-" << Im << "i";
			}
		}
		if (Im < 0) {
			if (Rm != 0) {
				cout << Rm << "+" << -Im << "i";
			}
			if (Rm == 0) {
				cout << -Im << "i";
			}
		}
		if (Im == 0) {
			if (Rm != 0) {
				cout << Rm;
			}
			if (Rm ==0) {
				cout << "0";
			}
		}
		cout << endl;
	};

	double dodawanie(double Rm2, double Im2)
	{
		Rm += Rm2;
		Im += Im2;
		return Rm, Im;
	};

	double odejmowanie(double Rm2, double Im2)
	{
		Rm -= Rm2;
		Im -= Im2;
		return Rm, Im;
	};

	double mnozenie(double Rm2, double Im2)
	{
		Rm = (Rm*Rm2)-(Im*Im2);
		Im = (Rm*Im2)+(Im*Rm2);
		return Rm, Im;
	};

	void wyswietlanie()
	{
		cout << "z = ";
		if (Rm > 0 || Rm < 0 ) {
			if (Im > 0) {
				cout << Rm << "+" << Im << "i";
			}
			if (Im < 0) {
				cout << Rm << Im << "i";
			}
			if (Im == 0) {
				cout << Rm;
			}
		}
		if (Rm == 0) {
			if (Im > 0 || Im < 0) {
				cout << Im << "i";
			}
			if (Im == 0) {
				cout << "0";
			}
			
		}
		cout << endl;
		system("pause");
	};

	double copy(double r, double u) {
		 r = Rm;
		 u = Im;
		return r, u;
	}
};

int main()
{
	cout << "++ Kalkulator liczb zespolonych ++" << endl;
	cout << "1. Wlasne" << endl << "2. Losowe /* Obecnie nie dziala! */" << endl << "3. Stworz tablice n-elementowa liczb zespolonych" << endl;

	cout << "Wybierz opcje: ";
	cin >> op;
	system("cls");
	switch (op) {
	case 1:
	{
		double I;
		double R;
		char i;
		cout << "Wprowadz liczbe zespolona:" << endl;
		cout << "z= ";
		cin >> R >> I >> i;


		system("cls");
		{
			Zespolona z1(R, I);
			z1.wyswietlanie();
			z1.modul();
			z1.sprzezenie();
			double R2, I2;
			cout << "Dodaj inna liczbe zespolona:" << endl;
			cout << "z= ";
			cin >> R2 >> I2 >> i;
			z1.dodawanie(R2, I2);
			z1.wyswietlanie();
			cout << "Teraz odejmij inna liczbe zespolona:" << endl;
			cout << "z= ";
			cin >> R2 >> I2 >> i;
			z1.odejmowanie(R2, I2);
			z1.wyswietlanie();
			cout << "A na koniec pomnoz przez:" << endl;
			cout << "z= ";
			cin >> R2 >> I2 >> i;
			z1.mnozenie(R2, I2);
			z1.wyswietlanie();
		}

	}
	break;

	case 2:
		//main();
	
	{
		int zakres;
		cout << "WprowadŸ zakres liczb: ";
		cin >> zakres;
		{
			double r=0;
			double u=0;
			Zespolona z1(zakres);
			z1.wyswietlanie();
			z1.modul();
			z1.sprzezenie();
			cout << "Dodawanie: ";
			Zespolona z2(zakres);
			z2.wyswietlanie();
			//z2.copy(r,u);
			z1.dodawanie(z1,z2);
			z1.wyswietlanie();
		}
	}
	
		break;
	
	case 3: {
		//int ile=0;
		cout << "Ilu elementowa ma byc tablica?" << endl << "n = ";
		//cin >> ile;
		//Zespolona z1[5];
		//for (int i = 0; i < ile; i++) {		}
	}
		break;

	default:
		cout << "Nie ma takiej opcji";
		Sleep(1500);
		main();
		break;
	}
	
	//	menu();


	system("pause");
	return 0;
	
}


/*//// MENU NIE DZIALA!!! ////
void menu(int op, double R, double I, int zakres) {
	int men;
	cout << "++ MENU ++" << endl;
	cout << "1.Modul" << endl;
	cout << "2.Sprzezenie" << endl;
	cout << "3.Dodawanie" << endl;
	cout << "4.Odejmowanie" << endl;
	cout << "5.Mnozenie" << endl;
	cout << "6.Wyswietlanie" << endl;
	cout << "7.Wyjœcie" << endl;
	cin >> men;

	switch (op) {
	case 1:
	{
		Zespolona z1(R, I);
		switch (men) {
		case 1:
			z1.modul();
			break;
		case 2:
			z1.sprzezenie();
			break;
		case 3:
			z1.dodawanie();
			break;
		case 4:
			z1.odejmowanie();
			break;
		case 5:
			z1.mnozenie();
			break;
		case 6:
			z1.wyswietlanie
			break;
		case 7:
			~Zespolona;
			exit(0);
			break;
	}
	break;
	case 2:
		Zespolona z2(zakres);
		switch (men) {
		case 1:
			z2.modul();
			break;
		case 2:
			z2.sprzezenie();
			break;
		case 3:
			z2.dodawanie();
			break;
		case 4:
			z2.odejmowanie();
			break;
		case 5:
			z2.mnozenie();
			break;
		case 6:
			z2.wyswietlanie
				break;
		case 7:
			~Zespolona;
			exit(0);
			break;
	break;
	

	/*
	switch (men) {
	case 1:
	{
		switch (op) {
		case 1:
			Zespolona z1;
			z1.modul(); 
			break;
		case 2:
			{ z2.modul(); }
			break;
		}

		
		//if (op == 1) { z1.modul(); }
		//if (op == 2) { z2.modul(); }
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
	{cout << "Nie ma takiej opcji!";
	system("cls");
	menu();
	break;
	}
	
	}
	*/