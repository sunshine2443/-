#include<stdio.h>
int main()
{
	int i, j, k,n=0;
	for (i = 1; i < 5; i++)
		for (j = 1; j < 5; j++)
			for (k = 1; k < 5; k++)
				if (i != k && i != j && j != k)
				{
					printf("%d%d%d\t", i, j, k);
					if (++n % 5 == 0)printf("\n");
				}
	printf("\n¹²ÓÐ£º%d\n", n);
	return 0;
}

