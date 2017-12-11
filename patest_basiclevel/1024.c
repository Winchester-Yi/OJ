#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[10010];
    gets(str);
    int i, j, len;
    len = strlen(str);
    if(str[0] == '-')
        printf("-");
    int pos, exp = 0;
    for(i = 1; i < len; i++)
    {
        if(str[i] == 'E')
            break;
    }
    pos = i;
    for(i = pos + 2; i < len; i++)
    {
        exp = exp * 10 + str[i] - '0';
    }
    if(exp == 0)
    {
        for(i = 1; i < pos; i++)
        {
            printf("%c", str[i]);
        }
    }
    else if(str[pos + 1] == '-')
    {
        printf("0.");
        for(i = 0; i < exp - 1; i++)
        {
            printf("0");
        }
        for(i = 1; i < pos; i++)
        {
            if(str[i] != '.')
                printf("%c", str[i]);
        }
    }
    else if(str[pos + 1] == '+')
    {
        for(i = 1; i < pos; i++)
        {
            if(str[i] != '.')
                printf("%c", str[i]);
            if(i == exp + 2 && exp + 2 < pos - 1)
                printf(".");
        }
        for(i = 0; i < exp + 2 - (pos - 1); i++)
        {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}