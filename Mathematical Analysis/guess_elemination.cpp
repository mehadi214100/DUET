#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;cin>>n;
    float arr[10][10],ans[10];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+1; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = i+1; j <= n; j++)
        {
            float ratio = arr[j][i]/arr[i][i];
            for (int k = 1; k <= n+1; k++)
            {
                arr[j][k] = arr[j][k] - ratio*arr[i][k];
            }
            
        }
        
    }
    ans[n] = arr[n][n+1]/arr[n][n];
    for (int i = n-1; i>=1; i--)
    {
        ans[i] = arr[i][n+1];
        for (int j = i+1; j<=n; j++)
        {
            ans[i] = ans[i]-arr[i][j]*ans[j];
        }
        ans[i] = ans[i]/arr[i][i];
    }
    char c= 'x';
    for (int i = 1; i <= n ; i++)
    {
        cout<<c<<":"<<ans[i]<<endl;
        c++;
    }
    
    return 0;
}