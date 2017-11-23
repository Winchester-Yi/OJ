/*************************************************************************
    > File Name: 1010.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Wed 22 Nov 2017 03:17:30 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
	int a[2];
	int i=0;
	while(scanf("%d",&a[i])==1){
		if(i!=1)
			i++;
		else{
			i=0;
			printf("%d %d\n",a[0]*a[1],a[1]-1);
		}
	}
	return 0;
}
