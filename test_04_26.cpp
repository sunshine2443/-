#include<stdio.h>
int main()
{	\\输出乘法口诀表
	int i,j;
	for(i=1;i<10;i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%-2d\t", j, i, i * j); 
			printf("\n");
	}
	return 0;
}
