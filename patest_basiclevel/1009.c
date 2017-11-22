/*************************************************************************
    > File Name: 1009.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Tue 21 Nov 2017 02:19:52 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main()
{
	char s[80];
	gets(s);
	int i;
	i = strlen(s);
	int j = i-1;
	int p;
	while(j--){
		if(j==0){
		for(p=j;p<i;p++)
			printf("%c",s[p]);
		}else{
			if(s[j]!=' ')
				continue;
			else{
				for(p=j+1;p<i;p++)
					printf("%c",s[p]);
				printf(" ");
				i=j;
			}
		}
	}
	return 0;
}
