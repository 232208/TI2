#include <stdio.h>

//void swap_tab_wsk(int* tab_a, int* tab_b)
//{
//	int temp = *tab_a;
//	*tab_a = *tab_b;
//	*tab_b = temp;
//}

void swap_tab(int tab_a, int tab_b)
{
	int temp = tab_a;
	tab_a = tab_b;
	tab_b = temp;
}

