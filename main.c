#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


FILE * plik;
int main() {
	srand(time(NULL));
	int * tab = (int *)malloc(sizeof(int) * 10);
	int t[10];
	int i;
	for (i = 0; i < 10; ++i)
	{
		tab[i] = rand() % 100;
	}

	for (i = 0; i < 10; ++i)
	{
		printf("%d\n", tab[i]);
	}
	
	_getch();
	return 0;
}
