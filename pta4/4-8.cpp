#include<cstdio>
#include<cstring>
using namespace std;

int a[35];

int main()
{
    int n;
    scanf("%d", &n);
    memset(a, 0 ,sizeof(0));
    for(int i = 0;i<n;i++)
    {
        int x;
        scanf("%d", &x);
        x += a[i];
        a[i] = x/3;
        
        if(i == 0)
        {
            a[n-1] += x/3; 
        }
        else{
            a[i-1]+= x/3;
        }
        
        if(i == n-1)
        {
            a[0] += x/3;
        }
        else{
            a[i+1] += x/3;
        }
        
    }
    for(int i = 0;i<n;i++)
    {
        printf(" %d", a[i]);
    }
    
    
    
    return 0;
}
