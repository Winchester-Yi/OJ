/*************************************************************************
    > File Name: 1022.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Fri 08 Dec 2017 02:40:09 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{	
	long int a;
	long int b;
	int d;
	int result[31];
	int i=0;

	scanf("%ld %ld %d",&a,&b,&d);
	a=a+b;
	do{
		result[i++]=a%d;
		a=a/d;
	}while(a!=0);
	while(i>0){
		printf("%d",result[--i]);
	}
	return 0;
}
