/*************************************************************************
    > File Name: 1011.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Tue 28 Nov 2017 02:07:27 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
	int n;
	long int a;
	long int b;
	long int c;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%ld %ld %ld",&a,&b,&c);
        if(i!=n-1){
            if(a+b>c)
                printf("Case #%d: true\n",i+1);
            else
                printf("Case #%d: false\n",i+1);
        }
        else{
            if(a+b>c)
                printf("Case #%d: true",i+1);
            else
                printf("Case #%d: false",i+1);
        }
	}
	return 0;
}
