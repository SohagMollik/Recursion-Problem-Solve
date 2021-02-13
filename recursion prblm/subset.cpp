#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&v)
{
    cout<<"{";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"}"<<endl;
}
void subset(int a[],vector<int>&v,int k,int n)
{
    if(k>n){
        print(v);
    }
    else
    {
        v.push_back(a[k]);
        subset(a,v,k+1,n);
        v.pop_back();
        subset(a,v,k+1,n);
    }
}
int main()
{
  int n;
  cin>>n;
  vector<int>v;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];

  }
  subset(a,v,1,n);
}
