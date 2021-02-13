#include<bits/stdc++.h>
using namespace std;
int subarray(int a[],int n)
{
    int c=0,d=0;
  for(int i=0;i<n;i++){
        int sum=0;
    for(int j=i;j<n;j++)
    {
        sum+=a[j];
        if(sum%2==0){
            c++;
        }
        else {
            d++;
        }
    }
  }
  return c;
  return d;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  cout<<subarray(a,n)<<endl;
  cout<<subarray(a,n)<<endl;
}
