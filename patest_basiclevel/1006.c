/*************************************************************************
    > File Name: 1006.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Fri 10 Nov 2017 01:59:51 PM CST
 ************************************************************************/

#include<stdio.h>

int p_n(int num)
{
	int i;
	for(i=1;i<num+1;i++)
		printf("%d",i);
	return 0;
}

int p_s(int num)
{
	int i;
	for(i=1;i<num+1;i++)
		printf("S");
	return 0;
}


int p_b(int num)
{
	int i;
	for(i=1;i<num+1;i++)
		printf("B");
	return 0;
}


int  main()
{
	int num;
	int flag=0;
	int digit;
	scanf("%d",&num);
	while(flag==0)
	{
		if(num<10)
		{
			digit=num;
			p_n(digit);
			flag=1;
		}
		else if(num<100)
		{
			digit=num/10;
			num=num%10;
			p_s(digit);
		}
		else if(num<1000)
		{
			digit=num/100;
			num=num%100;
			p_b(digit);
		}
	}
	return 0;
}
