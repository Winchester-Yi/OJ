/*************************************************************************
    > File Name: 1010.c
    > Author: YiShixiang
    > Mail: yishixiang@gmail.com 
    > Created Time: Wed 22 Nov 2017 03:17:30 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    int n, e, flag = 0;
    while (scanf("%d%d", &n, &e) != EOF)
    {
        if (n*e)
        {
            if (flag)
                printf(" ");
            else
                flag = 1;
            printf("%d %d", n*e, e - 1);
        }
    }
    if (!flag) printf("0 0");
    return 0;
}
