//#include<stdio.h>
//#include<string.h>
////main()\\输入三个字符串按由大到小顺序输出
////{	char str[3][20],*pstr0,*pstr1,*pstr2;
////	int i;
////	printf("Please enter three strings:\n");
////	for(i=0;i<3;i++)
////		gets(str[i]);
////	if(strcmp(str[0],str[1])<0)
////	{	pstr0=str[0];
////		pstr1=str[1];
////	}
////	else
////	{	pstr0=str[1];
////		pstr1=str[0];
////	}
////	if(strcmp(str[2],pstr0)<0)
////	{	pstr2=pstr1;
////		pstr1=pstr0;
////		pstr0=str[2];
////	}
////	else
////	{if(strcmp(str[2],pstr1)>=0)
////		pstr2=str[2];
////	else
////	{	pstr2=pstr1;
////		pstr1=str[2];
////	}
////	}
////	printf("The tring is in ascending order;\n");
////	puts(pstr0);
////	puts(pstr1);
////	puts(pstr2);
////}
////main()\\输入两个字符串并能输出最长的公共子串
////{	char str[2][20],substr[20],*pstr;
////	int i,j;
////	for(i=0;i<2;i++)
////		gets(str[i]);
////	for(i=strlen(str[1]);i>0;i--)
////	{	for(j=0;j<strlen(str[1])-1;j++)
////		{	pstr=str[1]+j;
////			strncpy(substr,pstr,i);
////			substr[i]='\0';
////			if(strstr(str[0],substr))
////				goto end;
////		}
////	
////	}
////end:puts("The max lenth substring is:\n");
////	puts(substr);
////
////}
////main()\\输入一个字符串并统计字符串中每个字符出现的次数
////{	char str[40];
////	char *chr,*pstr;
////	int sum,n;
////	gets(str);
////	for(n=0;n<strlen(str);n++)
////	{	chr=str+n;
////		pstr=chr+1;
////		sum=1;
////		if(strchr(str,*chr)<chr)
////				continue;
////		else
////		{	while(pstr=strchr(pstr,*chr))
////			{	sum++;
////				 pstr++;
////			}
////		}
////	printf("%c%d\n",*chr,sum);
////	
////
////	}
////   return 0;
#include<stdio.h>\\输入一个字符串把该字符串的前三个字母移到最后并输出变化后的字符串
#include<string.h>
int main()
{	void moveone(char*);
	char str[20];
	int i;
	gets(str);
	for(i=1;i<4;i++)
		moveone(str);
	printf("\n%s",str);
	return 0;
}
moveone(char *array)
{	char *p=array+1,temp;
	temp=*(p-1);
	while(*p)
		*(p-1)=*p,p++;
	*(p-1)=temp;
}
