/*************************************************************************
    > File Name: 1030.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Wed 13 Dec 2017 01:55:58 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(const void* a,const void* b){
    return *(double*) a>*(double*) b?1:-1;
}
int main(){
    int n,p;
    scanf("%d %d",&n,&p);
    double a[100100];
    for(int i=0;i<n;i++){
        scanf("%lf",&a[i]);
    }
    int max = 0;
    int count = 0; 
    qsort(a,n,sizeof(a[0]),cmp);
    double temp;
    int i,j;
    for(i=0;i<n;i++){
        temp = a[i]*p;
        for(j=count;j<n;j++){
            if(a[j]>temp){
                break;
            }
            if(j-i>=max)
                max = j-i+1;
            
        }
        count  = j;
        
    }
    printf("%d",max);