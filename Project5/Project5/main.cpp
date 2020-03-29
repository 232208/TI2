// PrzykladMenu.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

// tablica4x4_v01_C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Under "Project -> Properties -> C/C++ -> Preprocessor -> Preprocessor Definitions" add _CRT_SECURE_NO_WARNINGS

//#include "pch.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "menu.h"
#include "funkcje_swap.h"

#define L_WIERSZY 4
#define L_KOLUMN 4


void wprowadz_dane_a(int tab_a[][L_KOLUMN])
{
	printf_s("Wprowadz dane do tablicy o wymiarach: %d x %d:\n\n", L_WIERSZY, L_KOLUMN);
	for (int wiersz = 0; wiersz < L_WIERSZY; wiersz++)
	{
		for (int kolumna = 0; kolumna < L_KOLUMN; kolumna++)
		{
			printf_s("Wprowadz liczbe w %d wierzu i w %d kolumnie\n", wiersz+1, kolumna+1);
			scanf_s("%d", &tab_a[wiersz][kolumna]);
		}
	}
}

void wprowadz_dane_b(int tab_b[][L_KOLUMN])
{
	printf_s("Wprowadz dane do tablicy o wymiarach: %d x %d:\n\n", L_WIERSZY, L_KOLUMN);
	for (int wiersz = 0; wiersz < L_WIERSZY; wiersz++)
	{
		for (int kolumna = 0; kolumna < L_KOLUMN; kolumna++)
		{
			printf_s("Wprowadz liczbe w %d wierzu i w %d kolumnie\n", wiersz + 1, kolumna + 1);
			scanf_s("%d", &tab_b[wiersz][kolumna]);
		}
	}
}

void wyswietl_dane(int tab_a[][L_KOLUMN], int tab_b[][L_KOLUMN])
{
	int temp = 0;
	printf_s("Tablica a:\n");
	for (int wiersze_a = 0; wiersze_a < L_WIERSZY; wiersze_a++)
	{
		for (int kolumny_a = 0; kolumny_a < L_KOLUMN; kolumny_a++)
		{
			printf_s("%4d", tab_a[wiersze_a][kolumny_a]);
		}
		printf_s("\n");
	}
	printf_s("\n");
	printf_s("Tablica b:\n");
	for (int wiersze_b = 0; wiersze_b < L_WIERSZY; wiersze_b++)
	{
		for (int kolumny_b = 0; kolumny_b < L_KOLUMN; kolumny_b++)
		{
			printf_s("%4d", tab_b[wiersze_b][kolumny_b]);
		}
		printf_s("\n");
	}
	printf_s("\n");
}

void zamien_dane(int tab_a[][L_KOLUMN], int tab_b[][L_KOLUMN])
{
	int temp = 0;
	for (int wiersze = 0; wiersze < L_WIERSZY; wiersze++)
	{
		for (int kolumna = 0; kolumna < L_KOLUMN; kolumna++)
		{
			swap_tab(tab_a[wiersze][kolumna], tab_b[wiersze][kolumna]);
		}
	}
}





int main()
{
	int tablica_a[L_WIERSZY][L_KOLUMN] = { 0 };
	int tablica_b[L_WIERSZY][L_KOLUMN] = { 0 };
	char opcja = 0;

	while (opcja != 'k')
	{
		menu();
		opcja = _getch();

		switch (opcja)
		{
		case '1':
			wprowadz_dane_a(tablica_a);
			break;

		case '2':
			wprowadz_dane_b(tablica_b);
			break;

		case '3':
			wyswietl_dane(tablica_a, tablica_b);
			break;




		case '6':
			zamien_dane(tablica_a, tablica_b);
			printf_s("Uzyta funkcja swap().\n");
			break;




		case 'k':
			//zakonczenie programu
			break;

		default:
			printf_s("Wybierz wlasciwa opcje.\n\n");
			break;
		}
	}

	return 0;
}

