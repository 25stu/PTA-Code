#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int arr[10005];
int ans[105][105];

int sq(int x)
{
    int a;
    
    for(int i = 1;i<=sqrt(x);i++)
    {
        if(x%i == 0)
        {
            a = i;
        }
    }
    return a;
}

int cmp(int a, int b)
{
    return a>b;
}

int main()
{
    int N;
    int n,m;
    scanf("%d", &N);
    n = sq(N);
    m = N/n;
    for(int i = 0;i<N;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    sort(arr, arr+n, cmp);
    int jishu = 0;
    for(int i = 0;;i++)
    {
        for(int si = 1;si<=4;si++)
        {
//             for(int j = i;j<n-i;j++)
//             {
                if(si == 1)
                {
                    for(int j = i;j<n-i;j++)
                    ans[i][j] = arr[jishu++];
                }
                if(si == 2)
                {
                    for(int j = i;j<m-i;j++)
                    ans[j][n-i] = arr[jishu++];
                }
                if(si == 3)
                {
                    for(int j = i;j<n-i;j++)
                    ans[m-i][n-j] = arr[jishu++];
                }
                if(si == 4)
                {
                    for(int j = i;j<m-i;j++)
                    ans[m-j][i] = arr[jishu++];
                }
//             }
            if(jishu >= N)
            {
                break;
            }
            
        }
    }
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            printf("%d ", ans[i][j]);
            if(j != n-1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
