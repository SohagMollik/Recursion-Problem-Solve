#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll nCr(ll n,ll r)
{
 if(n==r)return 1;
  if(r==1)return n;
  return nCr(n-1,r-1)+nCr(n-1,r);
}
int main()
{
   ll n,r;
   cin>>n>>r;
   cout<<nCr(n,r)<<endl;
}
