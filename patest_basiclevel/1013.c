/*************************************************************************
    > File Name: 1013.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Wed 29 Nov 2017 02:04:27 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int isPrime(long int num){
	long int i;
	float numSqrt=sqrt(num)+1;
	for(i=3;i<numSqrt;i=i+2)
		if(num%i==0)
			return 0;
	return 1;
}

int main(){
	int m,n;
	int flag=1;
	long int num=3;
	scanf("%d %d",&m,&n);
	while(flag<n){
		if(m==1){
			printf("2 ");
		}
		if(isPrime(num)){
			++flag;
			if(flag>=m){
				if((flag-m+1)%10==0 || flag==n)
					printf("%ld\n",num);
				else
					printf("%ld ",num);
						}
			}
		num=num+2;
	}
	return 0;
}
