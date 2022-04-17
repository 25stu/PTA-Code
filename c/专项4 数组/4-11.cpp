#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int a[105][105];
int b[105][105];

int main(){
    
    int n,m;
    scanf("%d%d", &n, &m);
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        {
            scanf("%d", &a[i][j]);
            if(i == 1 || j == 1 || i == n || j == m)
            {
                b[i][j] = a[i][j];
            }
            
        }
    }
    
    for(int i = 2;i<n;i++)
    {
        for(int j = 2;j<m;j++)
        {
            b[i][j] = round((a[i][j] + a[i-1][j] + a[i][j-1] + a[i+1][j] + a[i][j+1])/5.0);
        }
    }
    
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        {
            printf("%d", b[i][j]);
            if(j != m)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
