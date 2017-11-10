/*************************************************************************
    > File Name: 1005.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Thu 09 Nov 2017 01:26:39 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int compare(const void *val1, const void *val2)
{
	return *(int *)val2 - *(int *)val1;
}

int main()
{
	int n;
	int num[100];
	int i,j;
	int temp;
	scanf("%d",&n);
	i=n;
	while(i--)
		scanf("%d",&num[i]);
	for(i=0;i<n;i++)
	{
		if(num[i]==101)
			continue;
		temp=num[i];
		while(temp!=1)
		{
			for(j=0;j<n;j++){
				if(j!=i && num[j]==temp)
					num[j]=101;
			}
			if((temp%2)==0)
				temp=temp/2;
			else
				temp=(temp*3+1)/2;
		}

	}
	qsort(num, n, sizeof(int), compare);
	for(i=0,j=0;i<n;i++)
		if(num[i]==101)
			j++;
	for(i=j;i<n-1;i++)
			printf("%d ",num[i]);
	printf("%d",num[n-1]);
	return 0;
}
