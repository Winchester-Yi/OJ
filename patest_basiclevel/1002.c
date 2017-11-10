/*************************************************************************
    > File Name: 1002.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Mon 30 Oct 2017 02:15:47 PM CST
 ************************************************************************/

#include<stdio.h>
int main()
{
	int n;
	long sum=0;
	int flag=1;
	int firstdigit=0;
	const char pingyin[10][4]={
		{"ling"},{"yi"},{"er"},{"san"},{"si"},
		{"wu"},{"liu"},{"qi"},{"ba"},{"jiu"}
	};
	while((n=getchar())!='\n')
	{
		sum = sum + n - 48;
	}
	while(flag!=0)
	{
	if(sum<10)
	{
		firstdigit=sum;
		flag=0;
	}
	else if(sum<100)
	{
		firstdigit=sum/10;
		sum=sum%10;
		flag=1;
	}
	else
	{
		firstdigit=sum/100;
		sum=sum%100;
		flag=1;
	}
	if(flag!=0)
		printf("%s ", pingyin[firstdigit]);
	else
		printf("%s",pingyin[firstdigit]);
	}
	return 0;
}
