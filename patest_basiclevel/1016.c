/*************************************************************************
    > File Name: 1015.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Fri 01 Dec 2017 03:36:17 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main(){
	char a[11];
	char b[11];
	int da;
	int db;
	int flag1=0;
	int flag2=0;
	int i=0;
	long int r=0;

	scanf("%s %d %s %d",a,&da,b,&db);
	while(a[i++]!='\0'){
		if((a[i-1]-48)==da)
			flag1++;
	}
	
	i=0;
	while(b[i++]!='\0'){
		if((b[i-1]-48)==db)
			flag2++;
	}
	
	for(i=0;i<flag1;i++){
		r+=pow(10,i)*da;
	}
	for(i=0;i<flag2;i++)
		r+=pow(10,i)*db;

	printf("%ld",r);
	return 0;
}
