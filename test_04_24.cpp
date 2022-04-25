#include<stdio.h>
int main()\\判断由1,、2、3、4四个数字组成不相同无重复的数字的三位数并输出
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
	printf("\n共有%d\n", n);
	return 0;
}

