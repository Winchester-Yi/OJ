/*************************************************************************
    > File Name: 1023.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Fri 08 Dec 2017 04:43:24 PM CST
 ************************************************************************/

#include<stdio.h>

int pNum(int i,int num);

int main()
{
	int num[10];
	int i;

	for(i=0;i<10;i++)
		scanf("%d",&num[i]);

	for(i=1;i<10;i++){
		if(num[i]!=0){
			pNum(i,1);
			num[i]--;
			break;
		}
	}
	
	for(i=0;i<10;i++){
		if(num[i]!=0){
			pNum(i,num[i]);
			num[i]=0;
		}
	}
	return 0;
}

int pNum(int i,int num)
{
	while(num--)
		printf("%d",i);
	return 0;
}
