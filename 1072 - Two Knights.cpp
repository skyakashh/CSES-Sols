#include<bits/stdc++.h>#define SQ(a) ((a)*(a))using namespace std;typedef long long ll;int main(){    ll n,i;    cin>>n;    for(i=1;i<=n;i++){            cout<<((SQ(i)*(SQ(i)-1)/2)-(8*(i-2)*(i-1)/2))<<endl;        }}