#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fibo(ll n)
{
    if(n==0)
        return 0;
      if(n==1)
        return 1;
    return fibo(n-1)+fibo(n-2);

}
int main()
{
    ll n;
    cin>>n;
    cout<<fibo(n);
}
