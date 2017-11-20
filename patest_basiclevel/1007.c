/*************************************************************************
    > File Name: 1007.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Sat 11 Nov 2017 02:51:55 PM CST
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    unsigned long int n;
    unsigned long int i;
    unsigned long int j;
    int sum=0;
    scanf("%lu", &n);
    char* isprime;
    unsigned long int sqrt_n = sqrt(n);
    isprime = (char *)malloc(n * sizeof(char));
    if (isprime == NULL)
        return -1;
    else {
        for (i = 0; i <= n; i++)
            isprime[i] = 0;
        for (i = 2; i <= sqrt_n; i++)
        {
            if (isprime[i] == 0)
                for (j = i + i; j <= n; j += i)
                     isprime[j] = 1;
        }
    }
    for (i = 2; i < n; i++)
        if ((isprime[i] == 0)&&(isprime[i + 2] == 0))
            sum++;
    printf("%d", sum);
    free(isprime);
    return 0;
}
