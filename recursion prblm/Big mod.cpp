#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll bigMod(ll a,ll b,ll m){
    if(b==0) return 1;
    else if(b&1){
            ll p=a%m;
            ll q=(bigMod(a,b-1,m))%m;
            return (p*q)%m;
    }
    else{
        ll x=(bigMod(a,b/2,m))%m;
        x=(x*x)%m;
        return x;
    }
}
int main()
{
    ll a,b,m;
    cin>>a>>b>>m;
    cout<<bigMod(a,b,m)<<endl;
}
