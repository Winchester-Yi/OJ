/*************************************************************************
    > File Name: 1001.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Mon 30 Oct 2017 01:59:08 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int i = 0;
	int input;
	scanf("%d", &input);
	while(input!=1)
	{
		if((input%2)==0)
		{
			input = input/2;
			i++;
		}
		else
		{
			input = (3*input+1)/2;
			i++;
		}
	}
	printf("%d",i);
	return 0;
}
