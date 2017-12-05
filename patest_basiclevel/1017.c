/*************************************************************************
    > File Name: 1017.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Tue 05 Dec 2017 02:23:18 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
	char a[1001];
	int b;
	char q[1001];
	int qLen=0;
	int r=0;
	int i=0;
	int num;


	scanf("%s %d",a,&b);
	while(a[i++]!='\0'){
		num=r*10+(a[i-1]-'0');
		q[qLen]=(char)(num/b+'0');
		r=num%b;
		qLen++;
	}
	q[qLen]='\0';
	if(q[0]!='0'){
		printf("%s",q);
	}
	else{
		i=1;
		while(q[i]!='\0')
			printf("%c",q[i++]);
	}
	printf(" %d",r);
	return 0;
}
