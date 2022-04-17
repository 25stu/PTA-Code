#include<cstdio>
#include<iostream>
using namespace std;

int judge(char a, char b)
{
    if((a == 'r' && b == 'p') || (a == 'p' && b == 's') || (a == 's' && b == 'r'))
    {
        return -1;
    }
    if((b == 'r' && a == 'p') || (b == 'p' && a == 's') || (b == 's' && a == 'r'))
    {
        return 1;
    }
    if(a == b)
    {
        return 0;
    }
    
}



int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        
    
        char c[1005];
        int sc = 0;
        scanf("%s", c);
        int i = 0;
        while(c[i] != '\0')
        {
            char a,b;
            a = c[i];
            if(c[i] == 'r')
            {
                i += 4;
            }
            else if(c[i] == 's')
            {
                i += 8;
            }
            else
            {
                i += 5;
            }
            b = c[i];
            if(c[i] == 'r')
            {
                i += 4;
            }
            else if(c[i] == 's')
            {
                i += 8;
            }
            else
            {
                i += 5;
            }
//             printf("1:%c 2:%c", a, b);
//             printf("%d\n",judge(a,b));
            sc += judge(a,b);
        }
        if(sc == 0)
        {
            printf("Tie");
        }
        else if(sc > 0)
        {
            printf("Win");
        }
        else
        {
            printf("Lose");
        }
        printf("\n");
    }
    return 0;
}
