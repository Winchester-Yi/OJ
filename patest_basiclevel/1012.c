/*************************************************************************
    > File Name: 1012.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Tue 28 Nov 2017 02:30:23 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int A1=0;
	int A2=0;
	int A3=0;
	float A4=0.0;
	int A5=-1;
	int flag=1;
	int i=0;
	int j=0;
	scanf("%d",&n);
	int *num = (int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",num+i);
	for(i=0;i<n;i++){
		switch(*(num+i)%5){
			case 0:{
					   if((*(num+i)%2)==0){
						   A1+=*(num+i);
					   }
					   break;
				   }
			case 1:{
					   A2+=flag*(*(num+i));
					   flag=flag*(-1);
					   break;
				   }
			case 2:{
					   A3++;
					   break;
				   }
			case 3:{
					   A4+=*(num+i);
					   j++;
					   break;
				   }
			case 4:{
					   if(*(num+i)>A5)
						   A5=*(num+i);
					   break;
				   }
		}
	}
	if(A1!=0)
		printf("%d ",A1);
	else
		printf("N ");
	if(A2!=0)
		printf("%d ",A2);
	else
		printf("N ");
	if(A3!=0)
		printf("%d ",A3);
	else
		printf("N ");
	if(j!=0)
		printf("%.1f ",A4/j);
	else
		printf("N ");
	if(A5!=-1)
		printf("%d",A5);
	else
		printf("N");
	return 0;
}
