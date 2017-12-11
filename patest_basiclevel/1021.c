/*************************************************************************
    > File Name: 1021.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Fri 08 Dec 2017 02:29:11 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char s[1003];
	int num[10];
	int i;
	
	scanf("%s",s);
	for(i=0;i<10;i++)
		num[i]=0;
	for(i=strlen(s)-1;i>0;i--)
		num[s[i]-48]++;
	for(i=0;i<10;i++){
		if(num[i]!=0)
			printf("%d:%d\n",i,num[i]);
	}

	return 0;
}
