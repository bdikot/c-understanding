/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Description : Quick c challenges - read program, answer the following questions:
 1. What output is printed by f1() ?
 2. What output is printed by f2() ?
 3. What is the lowest possible output printed by f3() ?
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct struct1
{
	struct struct1* p;
	char s1[16];
} st1;

typedef struct
{
	st1 a2[10];
	char s2[20];
} st2;

st2 v2;
st1 *v1;
int a[10] = {2, 8, 3, 7, 10, 5, 1, 4, 3, 9};

//           0  1  2  3   4  5  6  7  8  9


void f1()
{
	printf("\n\r f1() output:\n\r");
	for(int i=0; i<10; i++)
	{
		v1->p = v1+1;
		for(int i1=0; i1<10; i1++)
		{
			v1->s1[i1] = 'A';
			v1->s1[i1] += (i > i1);
		}
		v1->s1[10] = '\x00';
		v1 = v1->p;
		printf("%s\n\r", v2.a2[i].s1);
	}
}

void f2()
{
	int i = 0;
	printf("\n\r f2() output:\n\r");
	while(i < 10)
	{
		printf("%s\n\r", v2.a2[a[i]].s1);
		i = a[i];
	}
}

void f3()
{
	unsigned short i1 = 0;
	unsigned short i2 = 0;
	unsigned long l = 0;
	printf("\n\r f3() output:\n\r");
	printf("Enter the first number\n\r");
	scanf("%hu", &i1);
	printf("Enter the second number\n\r");
	scanf("%hu", &i2);
	if(i1 * i2 < 40000) i1 = i2 = 1000;
	while(i2 > 0)
	{
		i1++;
		l += i1;
		i2--;
	}
	printf("Output is %lu\n\r", l);
}

int main(void) {
	strcpy(v2.s2, "123456780123456789");
	v1 = (st1 *)&v2;
	f1();
	f2();
	f3();
	return EXIT_SUCCESS;
}
