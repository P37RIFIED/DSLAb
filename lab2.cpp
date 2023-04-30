#include <stdio.h>
int main()
{
	int a[100], b[100], i, j, n1, n2;
	printf("enter number of elements to be stored in set A:");
	scanf("%d", &n1);
	printf("enter %d elements for set A:", n1);
	for (i = 0; i < n1; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter number of elements to be stored in set B:");
	scanf("%d", &n2);
	printf("enter %d elements for set B:", n2);
	for (i = 0; i < n2; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("cartisean product=");
	printf("{");
	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			printf("(%d ,  %d)", a[i], b[j]);
			printf(",");
		}
	}
	printf("}");
	return 0;
}
