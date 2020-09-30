#include <stdio.h>
#include <stdlib.h>
#include "stdafx.h"

void dynamic_arr(void) {
	
	int* array;
	int length;
	printf("Enter the length: ");
	scanf("%d", &length);
	array = (int*)malloc(length * sizeof(int));
	for (int i=0; i < length; i++) { 
			array[i] = rand() % 11;
			printf("%d\t", array[i]);
			}
	free(array);
	system("pause");
}