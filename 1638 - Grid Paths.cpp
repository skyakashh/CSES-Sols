#include <bits/stdc++.h>using namespace std; #define lli long long int#define modulo 1000000007int main(){    ios_base::sync_with_stdio(false);cin.tie(NULL);     #ifndef ONLINE_JUDGE    freopen("input.txt", "r" , stdin);    freopen("output.txt", "w", stdout);    #endif    int t=1;    // cin>>t;    while(t--){        lli n;        cin>>n;        char arr[n][n];        for(lli i=0;i<n;i++){            for(lli j=0;j<n;j++){char x;cin>>x;arr[i][j]=x;}        }        lli dp[n][n];        lli i;        for(i=0;i<n;i++){            if(arr[0][i]=='*')break;            else dp[0][i]=1;        }        for(;i<n;i++)dp[0][i]=0;        for(i=0;i<n;i++){            if(arr[i][0]=='*')break;            else dp[i][0]=1;        }        for(;i<n;i++)dp[i][0]=0;        for(lli i=1;i<n;i++){            for(lli j=1;j<n;j++){                if(arr[i][j]=='.')dp[i][j]=(dp[i-1][j]+dp[i][j-1])%modulo;                else dp[i][j]=0;            }        }        cout<<dp[n-1][n-1];    }}