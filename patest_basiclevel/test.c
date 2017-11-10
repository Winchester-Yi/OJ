/*************************************************************************
    > File Name: test.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Mon 06 Nov 2017 03:31:13 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>


int main()
{
	int a[10];
	int n;

	scanf("%d",&n);
	while(n--)
		scanf("%d",&a[n]);
	for(n=0;n<10;n++)
		printf("%d ",a[n]);
	return 0;
}
