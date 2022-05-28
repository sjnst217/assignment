
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

void test_10872()
{
	int num1, num2;

	scanf("%d", &num1);
	num2 = factorial(num1);
	printf("%d", num2);
}

int fibo(int num1)
{
	if (num1 == 0)
	{
		return 0;
	}
	else if (num1 == 1)
	{
		return 1;
	}
	else
	{
		return (fibo(num1 - 1) + fibo(num1 - 2));
	}
}

void test_10870()
{
	int num1, res = 0;

	scanf("%d", &num1);
	res = fibo(num1);
	printf("%d", res);
}

int what_is_re_func(int num, int cnt)
{
	int i = 0, j = 0, count;
	count = cnt;
	if (num == 0)
	{
		for (i = 0; i < cnt; i++)
		{
			printf("____");
		}
		printf("\"재귀함수가 뭔가요?\"\n");
		for (i = 0; i < cnt; i++)
		{
			printf("____");
		}
		printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
		for (j = 0; j < cnt; j++, count--)
		{
			for (i = count; i > 0; i--)
			{
				printf("____");
			}
			printf("라고 답변하였지.\n");
		}
		return 0;
	}
	else
	{
		for (i = 0; i < cnt; i++)
		{
			printf("____");
		}
		printf("\"재귀함수가 뭔가요?\"\n");
		for (i = 0; i < cnt; i++)
		{
			printf("____");
		}
		printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
		for (i = 0; i < cnt; i++)
		{
			printf("____");
		}
		printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
		for (i = 0; i < cnt; i++)
		{
			printf("____");
		}
		printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
		return what_is_re_func(num - 1, cnt + 1);
	}

}

void test_17478()
{
	int num, cnt = 0;
	scanf("%d", &num);
	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	what_is_re_func(num, cnt);
	printf("라고 답변하였지.");
}
 // 이건 잘 모르겠음 다시 해보길
//void star_p(int i, int j, int num)
//{
//	if ((i / num) % 3 == 1 && (j / num) % 3 == 1)
//	{
//		printf(" ");
//	}
//	else
//	{
//		if (num / 3 == 0)
//		{
//			printf("*");
//		}
//		else
//		{
//			star_p(i, j, num / 3);
//		}
//	}
//}
//
//void test_2447()
//{
//	int num, i, j;
//	scanf("%d", &num);
//
//	for (i = 0; i < num; i++)
//	{
//		for (j = 0; j < num; j++)
//		{
//			star_p(i, j, num);
//		}
//		printf("\n");
//	}
//}

void hanoi_top(int num1, int start, int mid, int end)
{
	if (num1 == 1)
	{
		printf("%d %d\n", start, end);
	}
	else
	{
		hanoi_top(num1 - 1, start, end, mid);
		printf("%d %d\n", start, end);
		hanoi_top(num1 - 1, mid, start, end);
	}
}

void test_11729()
{
	int num1, num2;
	char buf;

	scanf("%d%c", &num1, &buf);
	num2 = pow(2, num1) - 1;
	printf("%d\n", num2);
	hanoi_top(num1, 1, 2, 3);
}

void test_2798()
{
	int num1, num2, check = 0, best = 0;
	int i, j, k;

	scanf("%d", &num1);
	scanf("%d", &num2);
	int* number = (int*)calloc(num1, sizeof(int));
	for (i = 0; i < num1; i++)
	{
		scanf("%d", &number[i]);
	}
	for (i = 0; i < num1; i++)
	{
		for (j = i + 1; j < num1; j++)
		{
			for (k = j + 1; k < num1; k++)
			{
				check = number[i] + number[j] + number[k];
				if (check <= num2 && best <= check)
				{
					best = check;
				}
			}
		}
	}
	printf("%d", best);
}

void test_2231()
{
	int num1, i, cnt = 0;

	scanf("%d", &num1);
	for (i = 1; i < num1; i++)
	{
		cnt = i + ((i / 1000000) % 10) + ((i / 100000) % 10) + ((i / 10000) % 10) + ((i / 1000) % 10) + ((i / 100) % 10) + ((i / 10) % 10) + (i % 10);
		if (cnt == num1)
		{
			printf("%d", i);
			break;
		}

	}
	if (i == num1)
	{
		printf("%d", 0);
	}
}

void test_7568()
{
	int num1, i, j, cnt = 0;

	scanf("%d", &num1);
	int* x_pos = (int*)calloc(num1, sizeof(int));
	int* y_pos = (int*)calloc(num1, sizeof(int));
	int* check = (int*)calloc(num1, sizeof(int));
	for (i = 0; i < num1; i++)
	{
		scanf("%d %d", &x_pos[i], &y_pos[i]);
	}
	for (i = 0; i < num1; i++)
	{
		cnt = 0;
		for (j = 0; j < num1; j++)
		{
			if (x_pos[i] < x_pos[j] && y_pos[i] < y_pos[j])
			{
				cnt++;
			}
		}
		check[i] = cnt;
	}
	for (i = 0; i < num1; i++)
	{
		printf("%d ", check[i] + 1);
	}
}

void test_1018()
{
	int num1, num2, ck1 = 0, ck2 = 0, B1 = 0, W1 = 0, B2 = 0, W2 = 0, min = 64;
	int i, j;
	char chess[50][50];
	scanf("%d", &num1);
	scanf("%d", &num2);
	for (i = 0; i < num1; i++)
	{
		scanf("%s", chess[i]);
	}
	for (ck1 = 0; ck1 < num1 - 7; ck1++)
	{
		for (ck2 = 0; ck2 < num2 - 7; ck2++)
		{
			B1 = B2 = W1 = W2 = 0;
			for (i = ck1; i < ck1 + 8; i++)
			{
				for (j = ck2; j < ck2 + 8; j++)
				{
					if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
					{
						if (chess[i][j] == 'B')
						{
							B1++;
						}
						else
						{
							W2++;
						}
					}
					else
					{
						if (chess[i][j] == 'W')
						{
							W1++;
						}
						else
						{
							B2++;
						}
					}
				}
			}
			if (64 - W1 - B1 < min)
			{
				min = 64 - W1 - B1;
			}
			if (64 - W2 - B2 < min)
			{
				min = 64 - W2 - B2;
			}
		}
	}
	printf("%d", min);
}

void test_1436()
{
	int num1, i, cnt = 0, ch = 0;

	scanf("%d", &num1);
	for (i = 665; ; i++)
	{
		ch = i;
		while (1)
		{
			if (ch % 1000 == 666)
			{
				cnt++;
				break;
			}
			ch = ch / 10;
			if (ch < 666)
			{
				break;
			}
		}
		if (cnt == num1)
		{
			break;
		}
	}
	printf("%d", i);
}

int main()
{
	test_1436();
	getchar();
	return 0;
}