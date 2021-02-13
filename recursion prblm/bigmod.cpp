#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll big_mod(ll a,ll b, ll m)
{
    if(b==0)return 1;
    else if(b&1)
    {
        ll p=a%m;
        ll q=(big_mod(a,b-1,m))%m;
        return (p*q)%m;
    }
    else{
        ll x=(big_mod(a,b/2,m))%m;
        x=(x*x)%m;
        return x;
    }
}
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    cout<<big_mod(a,b,c)<<endl;
}
