
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double factorial(int num)
{
	double a, r = 1;
	for (a = num; a > 0; a--)
	{
		r = r * a;
	}
	return r;
}

void test_2750()
{
	int num_j = 0, i = 0, j = 0;
	int* p;
	int key;
	char buf;
	scanf("%d%c", &num_j, &buf);
	p = (int*)malloc(sizeof(int) * num_j);

	for (i = 0; i < num_j; i++)
	{
		scanf("%d%c", &p[i], &buf);
	}
	for (i = 1; i < num_j; i++)
	{
		key = p[i];
		for (j = i - 1; j >= 0; j--)
		{
			if (p[j] < key)
			{
				break;
			}
			p[j + 1] = p[j];
		}
		p[j + 1] = key;
	}
	for (i = 0; i < num_j; i++)
	{
		printf("%d\n", p[i]);
	}
}

void test_2108() //시간초과
{
	int num_j = 0, i, j, k = 0, num = 0, hap = 0, count = 1, many;
	int array[8001] = { 0, };
	int* p;
	int* p1;
	int iden = 0;
	double arg = 0.0;
	scanf("%d", &num_j);
	p = (int*)malloc(sizeof(int) * num_j);
	p1 = (int*)calloc(num_j, sizeof(int));
	for (i = 0; i < num_j; i++)
	{
		scanf("%d", &num);
		array[num + 4000] += 1;
	}
	for (i = 0; i < 8001; i++)
	{
		iden = 0;
		for (j = 0; j < array[i]; j++, iden++)
		{
			p[k] = (i - 4000);
			k++;
			hap += (i - 4000);
		}
		if (iden >= count)
		{
			many = p[k - 1];
			count = iden;
		}
	}
	k = 0;
	for (i = 0; i < num_j; i++)
	{
		iden = 1;
		for (j = i + 1; j < num_j; j++)
		{
			if (p[i] == p[j])
			{
				iden += 1;
			}
		}
		if (iden == count)
		{
			p1[k] = p[i];
			k++;
		}
	}
	arg = (double)hap / (double)num_j;
	arg = round(arg);
	printf("%d\n", (int)arg);
	num = (num_j + 1) / 2;
	printf("%d\n", p[num - 1]);
	if (p1[1] == 0)
	{
		printf("%d\n", many);
	}
	else
	{
		printf("%d\n", p1[1]);
	}
	printf("%d\n", p[num_j - 1] - p[0]);
	free(p);
	free(p1);
}

void test_1427()
{
	int num_j, count = 0, num = 0;
	int i, j;
	int array[10] = { 0, };

	scanf("%d", &num_j);
	while (num_j != 0)
	{
		num = num_j % 10;
		num_j /= 10;
		count++;
		array[num]++;
	}
	for (i = 9; i >= 0; i--)
	{
		for (j = 0; j < array[i]; j++)
		{
			printf("%d\n", i);
		}
	}
}



void test_1010()
{
	int num1, num2, num3, i;
	double res = 0;
	char buf;
	scanf("%d%c", &num1, &buf);
	for (i = 0; i < num1; i++)
	{
		scanf("%d", &num2);
		scanf("%d", &num3);
		res = (factorial(num3) / factorial(num3 - num2)) / factorial(num2);
		printf("%.lf\n", res);
	}
}

void test_10989()
{
	int num_j = 0, i = 0, j = 0, num = 0;
	int array[10001] = { 0, };
	char buf;
	scanf("%d", &num_j);
	for (i = 0; i < num_j; i++)
	{
		scanf("%d", &num);
		array[num] += 1;
	}
	for (i = 0; i < 10001; i++)
	{
		for (j = 0; j < array[i]; j++)
		{
			printf("%d ", i);
		}
	}
}

void test_15989() //시간초과
{
	int num1, num2, num3 = 0, i, j, k, cnt = 0, ch, ch1;
	char buf;
	scanf("%d%c", &num1, &buf);
	for (i = 0; i < num1; i++)
	{
		scanf("%d", &num2);
		ch = num2 / 3;
		for (j = 0; j < ch + 1; j++)
		{
			num3 = num2 - (j * 3);
			ch1 = num3 / 2;
			for (k = 0; k < ch1 + 1; k++)
			{
				cnt++;
			}
		}
		printf("%d\n", cnt);
		cnt = 0;
	}
}

int main()
{
	test_15989();
	getchar();
	return 0;
}