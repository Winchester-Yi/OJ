/*************************************************************************
    > File Name: 1029.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Thu 14 Dec 2017 02:15:16 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char intend[81];
	char real[81];
	int  wrong[37];
	int i=0,j=0;;
	int lenReal,lenIntend;

	scanf("%s",intend);
	scanf("%s",real);
	lenReal=strlen(real);
	lenIntend=strlen(intend);
	

	for(i=0;i<37;i++)
		wrong[i]=0;
	i=0;
	while(i<lenReal){
		if(real[i]!=intend[j]){
			if(isdigit(intend[j])&&(wrong[(intend[j]-'0')]==0)){
				wrong[(intend[j]-'0')]=1;
				printf("%c",intend[j]);
			}
			else if(isupper(intend[j])&&(wrong[(intend[j]-'A'+10)]==0)){
				wrong[(intend[j]-'A'+10)]=1;
				printf("%c",intend[j]);
			}
			else if(islower(intend[j])&&(wrong[(intend[j]-'a'+10)]==0)){
				wrong[(intend[j]-'a'+10)]=1;
				printf("%c",intend[j]-'a'+'A');
			}
			else if((intend[j]=='_')&&(wrong[36]==0)){
				wrong[36]=1;
				printf("_");
			}
			j++;
		}else{
			i++;
			j++;
		}
	}
	while(j<lenIntend){
		if(isdigit(intend[j])&&(wrong[(intend[j]-'0')]==0)){
			wrong[(intend[j]-'0')]=1;
			printf("%c",intend[j]);
		}
		else if(isupper(intend[j])&&(wrong[(intend[j]-'A'+10)]==0)){
			wrong[(intend[j]-'A'+10)]=1;
			printf("%c",intend[j]);
		}
		else if(islower(intend[j])&&(wrong[(intend[j]-'a'+10)]==0)){
			wrong[(intend[j]-'a'+10)]=1;
			printf("%c",intend[j]-'a'+'A');
		}
		else if((intend[j]=='_')&&(wrong[36]==0)){
			wrong[36]=1;
			printf("_");
		}
		j++;
	}

	return 0;
}
