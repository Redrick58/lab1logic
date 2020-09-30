#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stdafx.h"
    
int fill_dynamic_arr(void) {
	srand(time(NULL));
	int length;
	//int array[10][10];
	printf("Enter the length: ");
	scanf("%d", &length);
	int** array = (int**)malloc(length * sizeof(int));
	for (int i=0; i < length; i++) {
		array[i] = (int*)malloc(length * sizeof(int));
	}
	int* rowsums = (int*)malloc(length * sizeof(int));
	int* colsums = (int*)malloc(length * sizeof(int));
	memset(rowsums, 0, length * sizeof(int));
	memset(colsums, 0, length * sizeof(int));

	for (int i=0; i < length; i++) { 
		for (int j=0; j < length; j++) { 
			array[i][j] = rand() % 11;
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i=0; i < length; i++) { 
		for (int j=0; j < length; j++) {
			rowsums[i] += array[i][j];
			colsums[j] += array[i][j];
		}
	}
	for (int i=0; i < length; i++) {
		printf("%d ", rowsums[i]);
	}
	printf("\n");
	for (int i=0; i < length; i++) {
		printf("%d ", colsums[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}