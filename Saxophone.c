#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n = 0;
	const int c[11] = { 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1 };
	const int d[11] = { 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0 };
	const int e[11] = { 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0 };
	const int f[11] = { 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0 };
	const int g[11] = { 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0 };
	const int a[11] = { 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 };
	const int b[11] = { 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 };
	const int C[11] = { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 };
	const int D[11] = { 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0 };
	const int E[11] = { 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0 };
	const int F[11] = { 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0 };
	const int G[11] = { 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 };
	const int A[11] = { 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 };
	const int B[11] = { 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 };
	char notes[201] = { ' ' };
	int pressCount[11] = { 0 };
	int empty[11] = { 0 };
	const int* previous = empty;
	const int* current = empty;
	gets(notes);
	n = atoi(notes);
	for (int h = 0; h < n; h++)
	{
		previous = empty;
		current = empty;
		for (int i = 1; i < 11; i++)
		{
			pressCount[i] = 0;
		}
		gets(notes);
		for (int i = 0; i < strlen(notes); i++)
		{
			switch (notes[i])
			{
				case 'c':
				{
					current = c;
					break;
				}
				case 'd':
				{
					current = d;
					break;
				}
				case 'e':
				{
					current = e;
					break;
				}
				case 'f':
				{
					current = f;
					break;
				}
				case 'g':
				{
					current = g;
					break;
				}
				case 'a':
				{
					current = a;
					break;
				}
				case 'b':
				{
					current = b;
					break;
				}
				case 'C':
				{
					current = C;
					break;
				}
				case 'D':
				{
					current = D;
					break;
				}
				case 'E':
				{
					current = E;
					break;
				}
				case 'F':
				{
					current = F;
					break;
				}
				case 'G':
				{
					current = G;
					break;
				}
				case 'A':
				{
					current = A;
					break;
				}
				case 'B':
				{
					current = B;
					break;
				}
			}
			for (int j = 1; j < 11; j++)
			{
				if (previous[j] < current[j])
				{
					pressCount[j]++;
				}
			}
			previous = current;
		}
		printf("%d", pressCount[1]);
		for (int j = 2; j < 11; j++)
		{
			printf(" %d", pressCount[j]);
		}
		printf("\n");
	}
}