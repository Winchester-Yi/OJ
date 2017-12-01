/*************************************************************************
    > File Name: 1014.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Thu 30 Nov 2017 02:24:45 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int printHour(int p,int i,char *s1,char *s2){
	for(p++;p<i;p++){
		if(*(s1+p)==*(s2+p)){
			if(isdigit(*(s1+p))){
				printf("%d:",*(s1+p));
				break;
			}
			else if(isupper(*(s1+p))){
				printf("%d:",*(s1+p)-55);
				break;
			}
		}
	}
	return 0;
}

int main(){
	char day[][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	char s1[60];
	char s2[60];
	char s3[60];
	char s4[60];
	gets(s1);
	gets(s2);
	gets(s3);
	gets(s4);
	int i=(strlen(s1)>strlen(s2))?strlen(s2):strlen(s1);
	int j=(strlen(s3)>strlen(s4))?strlen(s4):strlen(s3);
	int p;

	for(p=0;p<i;p++){
		if(isupper(*(s1+p))){
			if(*(s1+p)==*(s2+p)){
				printf("%s ",day[*(s1+p)-65]);
				printHour(p,i,s1,s2);
				break;
			}
		}
	}
	for(p=0;p<j;p++){
		if(isalpha(*(s3+p))){
			if(*(s3+p)==*(s4+p)){
				printf("%02d",p);
				break;
			}
		}
	}
	return 0;
}
