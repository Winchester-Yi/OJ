/*************************************************************************
    > File Name: 1019.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Wed 06 Dec 2017 03:22:37 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct r* sort(char *s);

int main()
{
	char n[6];
	struct r{
		int small;
		int large;
	}*re;
	int sub;

	scanf("%s",n);
	if((n-n)==0){
		printf("%d - %d = %4d",atoi(n),atoi(n),0);
		return 0;
	}
	do{
		re=sort(n);
		sub=(re->large)-(re->small);
		printf("%d - %d = %d",re->large,re->small,sub);
	}while((sub!=6174)&&(sub!=0));
	printf("%d - %d = %d",re->large,re->small,sub);
	return 0;
}

struct r* sort(const char *s)
{
	struct r* re;
	char pesu[6];
	char temp;
	int i,j;

	strcpy(pesu,s);
	for(i=0;i<strlen(pesu);i++){
		for(j=i+1;j<strlen(pesu);j++){
			if(pesu[i]>pesu[j]){
				temp = pesu[i];
				pesu[i] = pesu[j];
				pesu[j] = temp;
			}
		}
	}
	
	re->small=atoi(pesu);
	re->large=atoi(strrev(pesu));
	return re;
}

