#include<bits/stdc++.h>
using namespace std;
long long int fibo(long long int n){
if(n<=1)return n;
 else return fibo(n-1)+fibo(n-2);
}
int main()
{
  long long int n;
  cin>>n;
  cout<<fibo(n)<<endl;
}
