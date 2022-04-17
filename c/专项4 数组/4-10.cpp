#include<cstdio>
using namespace std;

int t[10000];


int main()
{
    int a,b,n;
    scanf("%d%d%d", &a, &b, &n);
    t[1] = a;
    t[2] = b;
    int num = 3;
    
    for(int i = 1;i<=n;i++)
    {
        int temp;
        temp = t[i]*t[i+1];
        if(temp<10)
        {
            t[num++] = temp;
        }
        else
        {
            t[num++] = temp/10;
            t[num++] = temp%10;
        }
        printf("%d", t[i]);
        if(i != n)
        {
            printf(" ");
        }
    }
//     for(int i = 1;i<=n;i++)
//     {
//         printf("%d", t[i]);
//         if(i!=n)
//         {
//             printf(" ");
//         }
//     }
    return 0;
}
