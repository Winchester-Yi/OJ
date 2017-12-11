/*************************************************************************
    > File Name: 1026.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Mon 11 Dec 2017 03:28:22 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{	
	long int c2;
	long int c1;
	int h=0;
	int m=0;
	int s=0;
	scanf("%ld %ld",&c1,&c2);
	
	c1=(int)((c2-c1)/100.0+0.5);
	s=c1%60;
	c1=(c1-s)/60;
	m=c1%60;
	h=(c1-m)/60;
	printf("%02d:%02d:%02d",h,m,s);
	return 0;
}
