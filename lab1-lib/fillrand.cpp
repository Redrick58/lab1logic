#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stdafx.h"

int fillrand()
{
	int i, n, mas[10];
		srand(time(0));
		for (i=0; i<10; i++) {
			mas[i] = rand() % 11;
			printf("%d ", mas[i]);
			}
		putchar('\n');
		system("pause");
		return 0;
		}