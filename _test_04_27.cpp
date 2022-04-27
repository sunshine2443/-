//#include<stdio.h>
//int main()
//{
//	int i,j,a[3][3] = {1,2,3,4,5,6,7,8,9};
//	for(i =0;i<=2;i++)
//	{
//		for(j=0;j<=2;j++)
//			printf("%3d",a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	int i, j, n;
	printf("请输入一串字符;\n");
	gets(s);
	n = strlen(s);
	for (i = 0, j = n - 1; i < j; i++, j--)
		if (s[i] != s[j])
			break;
	if (i < j)
		printf("不是回文串\n");
	else
		printf("是回文串\n");
	return 0;

}