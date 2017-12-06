/*************************************************************************
    > File Name: 1018.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Tue 05 Dec 2017 02:59:00 PM CST
 ************************************************************************/

#include<stdio.h>

void max(int c,int j,int b);

int main(){
	int n;
	scanf("%d",&n);
	int yes=0;
	int no=0;
	int eq=0;
	int i=0;
	char jia;
	char yi;
	int jiac=0,jiaj=0,jiab=0;
	int yic=0,yij=0,yib=0;

	for(i=0;i<n;i++){
		getchar();
		scanf("%c %c",&jia,&yi);
		if(jia==yi){
			eq++;
		}else if(((jia=='C')&&(yi=='J'))||((jia=='J')&&(yi=='B'))||((jia=='B')&&(yi=='C'))){
			yes++;
			switch(jia){
				case 'C':jiac++;break;
				case 'J':jiaj++;break;
				case 'B':jiab++;break;
			}
		}else{
			no++;
			switch(yi){
				case 'C':yic++;break;
				case 'J':yij++;break;
				case 'B':yib++;break;
			}
		}
	}

	printf("%d %d %d\n",yes,eq,no);
	printf("%d %d %d\n",no,eq,yes);
	
	max(jiac,jiaj,jiab);
	printf(" ");
	max(yic,yij,yib);
	return 0;
}
void max(int c,int j,int b)
{
	if(c>j){
		if(c>b)
			printf("C");
		else if(c<=b)
			printf("B");
	}else if(c==j){
		if(c>b)
			printf("C");
		else if(c<=b)
			printf("B");
	}else{
		if(j<=b)
			printf("B");
		else
			printf("J");
	}
}
