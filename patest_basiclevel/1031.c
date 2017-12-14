/*************************************************************************
    > File Name: 1031.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Thu 14 Dec 2017 02:59:40 PM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

int isOrright(const char*s,int *weight,char *m);

int main()
{	
	int num;
	int i;
	char id[19];
	int weight[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char m[]={'1','0','X','9','8','7','6','5','4','3','2'};
	int sum=0;
	
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%s",id);
		sum+=isOrright(id,weight,m);
	}

	if(sum==num)
		printf("All passed");
	return 0;
}

int isOrright(const char *s,int *weight,char *m)
{
	int sum=0;
	int j;
	for(j=0;j<17;j++){
		if(isdigit(*(s+j))==0){
			printf("%s\n",s);
			return 0;
		}else{
			sum+=*(weight+j)*(*(s+j)-'0');
		}
	}
	sum=sum%11;
	if(*(m+sum)==*(s+17))
		return 1;
	else{
		printf("%s\n",s);
		return 0;
	}
}
