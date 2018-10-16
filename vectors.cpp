#include <stdio.h>
#define x 5
#define y 5


int enter()
{
	int numb=0;
	scanf("%d", &numb);
	while (numb>5||numb<0)
	{
		printf("Your number is to big! Enter number (0<number<=5)");
		scanf("%d", &numb);
	}
	return numb;
}


int auditNumb(int numb1, int numb2)
{
	int numb3;
	if (numb1==numb2)
	{
		numb3=0;
		printf("You enter the same numerical values. Enter another number.\n");
		scanf("%d", &numb3);
	}
	return numb3;
}


void feel(int masuv[][5])
{
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			scanf("%d", &masuv[i][j]);
		}
	}
}


void lineReversal(int masuv[][5], int line1, int line2)
{
	int rocho=0;
	for (int j=4, i=0; j>=0; j--, i++)
	{
		rocho=masuv[line1-1][j];
		masuv[line1-1][j]=masuv[line2-1][i];
		masuv[line2-1][i]=rocho;
	}
}


void printMass(int masuv[][5])
{
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			printf("%d ", masuv[i][j]);
		}
		printf("\n");
	}
}


int main(void)
{
	int a, b;
	int mass[x][y];
	printf("Enter first margin: ");
	a=enter();
	printf("\nEnter second margin: ");
	b=enter();
	b=auditNumb(a,b);
	feel(mass);
	printf("Your First mass\n");
	printMass(mass);
	lineReversal(mass, a, b);
	printf("Your Second mass\n");
	printMass(mass);
	return 0;
}
