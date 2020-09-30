#include <windows.h>
#include <stdio.h>
#include "stdafx.h"

struct student
	{
		char famil[20];
		char name[20], facult[20];
		int Nomzach;
	};

int is_equal(student cur_stud, student to_compare) {
	
	if (strcmp(to_compare.famil, "0")) {
		if (strcmp(to_compare.famil, cur_stud.famil)) {
			return 0;
		}
	}
	if (strcmp(to_compare.name, "0")) {
		if (strcmp(to_compare.name, cur_stud.name)) {
			return 0;
		}
	}
	if (strcmp(to_compare.facult, "0")) {
		if (strcmp(to_compare.facult, cur_stud.facult)) {
			return 0;
		}
	}
	if (to_compare.Nomzach != 0) {
		if (to_compare.Nomzach != cur_stud.Nomzach) {
			return 0;
		}
	}
	return 1;
}

int  students(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	student stud[3];
	student to_compare;
	int i;
	int no_students_flag = 1;

	for(i=0;i<3;i++)
	{
		printf("������� ������� ��������\n"); scanf ("%20s",stud[i].famil);
	}
	for(i=0;i<3;i++)
	{
		printf("������� ��� �������� %s\n",stud[i].famil); scanf ("%20s",stud[i].name);
	}
	for(i=0;i<3;i++)
	{
		printf("������� �������� ���������� �������� %s %s\n",stud[i].famil,stud[i].name); scanf ("%20s",stud[i].facult);
	}
	for(i=0;i<3;i++)
	{
		printf("������� ����� �������� ������ �������� %s %s\n",stud[i].famil,stud[i].name); scanf ("%d",&stud[i].Nomzach);
	}

	for(i=0;i<3;i++)
		{
			printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n",stud[i].famil,stud[i].name,
					stud[i].facult,stud[i].Nomzach);
		}
	
	printf("\n������� ������� �������� �������� (���� �� �����, ������� 0)\n"); scanf ("%20s", to_compare.famil);
	printf("������� ��� �������� �������� (���� �� �����, ������� 0)\n"); scanf ("%20s", to_compare.name);
	printf("������� ��������� �������� �������� (���� �� �����, ������� 0)\n"); scanf ("%20s", to_compare.facult);
	printf("������� ����� �������� ������ �������� �������� (���� �� �����, ������� 0)\n"); scanf ("%d", &to_compare.Nomzach);

	for(i=0;i<3;i++){
		if (is_equal(stud[i], to_compare)) {
			printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n",stud[i].famil,stud[i].name,
					stud[i].facult,stud[i].Nomzach);
			no_students_flag = 0;
		}
	}
	if (no_students_flag) {
			printf("�� ������� ��������������� ���������.\n");
	}
	system("pause");
	return 0;
} 
