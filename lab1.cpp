#include <stdio.h>
void uni();
void inter();
void diff();
int main()
{
	int n;
	printf("Enter 1 for union !");
	printf("\n Enter 2 for intersection !");
	printf("\n Enter 3 for difference !");
	scanf("\n%d", &n);
	if (n = 1)
	{
		uni();
	}
	else if (n = 2)
	{
		inter();
	}
	else if (n == 3)
	{
		diff();
	}
	else
	{
		printf("\n please Enter your decision");
	}
	return 0;
}

void uni()
{
	int
		a[100],
		b[100], c[100], i, j, count = 0, s1, s2, size;
	printf("Enter size for set a:");
	scanf("%d", &s1);
	printf("\n enter the element of set a:");
	for (i = 0; i < s1; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n Enter size for set b:");
	scanf("%d", &s2);
	printf("\n Enter the elements of set b:");
	for (i = 0; i < s2; i++)
	{
		scanf("%d", &b[i]);
		// storing element of a and b in c
		for (i = 0; i < s1; i++)
		{
			c[i] = a[i];
		}
		size = s1 + s2;
		for (i = 0; i < s2; i++)
		{
			c[s1 + i] = b[i];
		}
		printf("\n the union of two sets are:");
		printf("%d", c[i]);
		printf(",");
	}
	printf("}");
}
void inter()
{
	int a[100], b[100], i, j, s1, s2, flag = 0;
	printf("Enter size for sets a:");
	scanf("%d", &s1);
	printf("\n Enter the elements of set a:");
	for (i = 0; i < s1; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n the intersection of the two sets are:");
	printf("{");
	for (i = 0; i < s1; i++)
	{
		for (j = 0; j < s2; j++)
		{
			if (a[i] == b[j])
			{
				printf("%d", a[i]);
				printf(",");
			}
		}
	}
	printf("}");
}
void diff()
{
	int a[100], b[100], i, j, s1, s2, s = 0;
	printf("Enter size for set a:");
	scanf("%d", &s1);
	printf("\n Enter the elements of set a:");
	for (i = 0; i < s1; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\n Enter size for set b:");
	scanf("%d", &s2);
	printf("\n Enetr the elements of set b:");
	for (i = 0; i < s2; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("\n the difference of the two sets are:");
	printf("{");
	for (i = 0; i < s1; i++)
	{
		s = 0;
		for (j = 0; j < s2; j++)
		{
			if (a[i] == b[j])
			{
				s++;
				break;
			}
		}
		if (s = 0)
		{
			printf("%d", a[i]);
			printf(",");
		}
	}
	printf("}");
}
