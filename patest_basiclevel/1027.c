/*************************************************************************
    > File Name: 1027.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Tue 12 Dec 2017 01:44:26 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
	int num,use;
	char c;
	int i,t;

	scanf("%d %c",&num,&c);

	t=(int)((num-1)/2+0.5);
	for(use=21;use>0;use--){
		if(((use+2)*use)<=t)
			break;
	}
	for(i=use;i>0;i--){
		t=use-i;
		while(t>0){
			putchar(' ');
			t--;
		}
		t=i*2+1;
		while(t>0){
			putchar(c);
			t--;
		}
		putchar('\n');
	}
	for(i=use;i>0;i--)
		putchar(' ');
	printf("%c\n",c);
	for(i=1;i<=use;i++){
		t=use-i;
		while(t>0){
			putchar(' ');
			t--;
		}
		t=i*2+1;
		while(t>0){
			putchar(c);
			t--;
		}
		putchar('\n');
	}
	printf("%d",num-((use+2)*use*2+1));
	return 0;
}
