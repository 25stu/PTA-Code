#include<cstdio>
#include<algorithm>
using namespace std;

int a[105];
int b[105];

bool cmp(int a, int b)
{
    return a>b;
}

int main()
{
    int t;
    scanf("%d" ,&t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        for(int i = 0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
        for(int i = 0;i<n;i++)
        {
            scanf("%d", &b[i]);
        }
        sort(a, a+n, cmp);
        sort(b, b+n, cmp);
        int gold = 0;
        int ai = 0;
        int aij = 0;
        for(int i = 0;i<n;i++)
        {
            if(a[ai]<b[i])
            {
                gold -= 200;
                aij++;
            }
            else
            {
                ai++;
                gold += 200;
            }
        }
        printf("%d\n", gold);
    }
    
    return 0;
}
