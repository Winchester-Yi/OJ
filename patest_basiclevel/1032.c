/*************************************************************************
    > File Name: 1032.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Thu 14 Dec 2017 03:40:36 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int n;
	int i;
	int score[100000];
	int school,s;
	int maxSchool=0;

	for(i=0;i<100000;i++)
		score[i]=0;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&school,&s);
		score[school]+=s;
		if(maxSchool<school)
			maxSchool=school;
	}
	for(i=0,s=0;i<n;i++){
		if(s<score[i]){
			school=i;
			s=score[i];
		}
	}
	printf("%d %d",school,s);
	return 0;
}
