#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int n;

void init(int l[])
{
    for(int i = 0;i<6;i++)
    {
        l[i] = n*10;
    }
}

int a[20];
int b[20];
int c[10];
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
//         int n;
        scanf("%d", &n);
//         memset(a, n*10, sizeof(a));
//         memset(b, n*10, sizeof(b));
        init(a);
        init(b);
        init(c);
//         printf("%d", a[1]);
        char ch[10];
//         char temp2[100];
        while(1)
        {
            scanf("%s", ch);
            if(strcmp(ch,"finish") == 0)
            {
                break;
            }

            if(strcmp(ch, "angry") == 0)
            {
                scanf("%d%d%d%d%d%d", &c[0], &c[1], &c[2], &c[3], &c[4], &c[5]);
                for(int i = 0;i<6;i++)
                {
    //                 int x;
    //                 scanf("%d", &x);
                    b[i] -= c[i];
                    if(b[i]<0)
                    {
                        printf("impossible\n");
                        for(int ababa = 0; ababa<6;ababa++)
                        {
                            b[ababa] = a[ababa];
                        }
                        break;
                    }
                }
            }
            if(strcmp(ch, "happy") == 0)
            {
                scanf("%d%d%d%d%d%d", &c[0], &c[1], &c[2], &c[3], &c[4], &c[5]);
                for(int i = 0;i<6;i++)
                {
    //                 int x;
    //                 scanf("%d", &x);
                    b[i] -= c[i];
                    if(b[i]>n*10)
                    {
                        printf("impossible\n");
                        for(int ababa = 0; ababa<6;ababa++)
                        {
                            b[ababa] = a[ababa];
                        }
                        break;
                    }
                }
            }

            for(int ababa = 0; ababa<6;ababa++)
            {
                a[ababa] = b[ababa];
            }

            if(strcmp(ch, "count") == 0)
            {
                for(int i = 0;i<6;i++)
                {
                    printf("%d ", a[i]);
                }
                printf("\n");
            }
        }
    }
    
    
    
    return 0;
}
