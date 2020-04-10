
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include "Menu.h"
#include "Działania.h"


int main()
{
	int liczba_1 = 0;
	int liczba_2 = 0;
	int wynik = 0;

	printf_s("\nProgram sluzy do prostych obliczen na dwoch liczbach.\n\n");



	char opcja = 0;

	while (opcja != '0')
	{
		
		menu();
		opcja = _getch();

		switch (opcja)
		{
		case '1':
			printf_s("Podaj Pierwsza liczbe:\n");
			scanf_s("%d", &liczba_1);
			printf_s("Podaj druga liczbe:\n");
			scanf_s("%d", &liczba_2);

			wynik = dodawanie(liczba_1, liczba_2);
			printf_s("Wynikiem dzialania jest liczba: %d\n\n", wynik);
			printf_s("Twoje dzialanie ma postac: %d + %d = %d\n\n", liczba_1, liczba_2, wynik);

			break;

		case '2':
			printf_s("Podaj Pierwsza liczbe:\n");
			scanf_s("%d", &liczba_1);
			printf_s("Podaj druga liczbe:\n");
			scanf_s("%d", &liczba_2);

			wynik = odejmowanie(liczba_1, liczba_2);
			printf_s("Wynikiem dzialania jest liczba: %d\n", wynik);
			printf_s("Twoje dzialanie ma postac: %d - %d = %d\n\n", liczba_1, liczba_2, wynik);

			break;

		case '3':
			printf_s("Podaj Pierwsza liczbe:\n");
			scanf_s("%d", &liczba_1);
			printf_s("Podaj druga liczbe:\n");
			scanf_s("%d", &liczba_2);

			wynik = mnozenie(liczba_1 , liczba_2);
			printf_s("Wynikiem dzialania jest liczba: %d\n", wynik);
			printf_s("Twoje dzialanie ma postac: %d * %d = %d\n\n", liczba_1, liczba_2, wynik);

			break;

		case '4':
			printf_s("Podaj Pierwsza liczbe:\n");
			scanf_s("%d", &liczba_1);
			printf_s("Podaj druga liczbe:\n");
			scanf_s("%d", &liczba_2);

			if (liczba_2 == 0)
			{
				printf_s("Nie wolno dzielic przez zero!!!\n\n");
			}
			else
			{
				wynik = dzielenie(liczba_1, liczba_2);
				printf_s("Wynikiem dzialania jest liczba: %d\n", wynik);
				printf_s("Twoje dzialanie ma postac: %d / %d = %d\n\n", liczba_1, liczba_2, wynik);
			}
			break;


		case '0':
			
			break;

		default:
			printf_s("Niepoprawny wybor!!!\n\n");
			break;
		}
	}

	return 0;
}


