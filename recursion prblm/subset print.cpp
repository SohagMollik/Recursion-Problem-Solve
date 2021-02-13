#include<bits/stdc++.h>
using namespace std;
int print(vector<int>&v){
 cout<<"{";
   for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        }
        cout<<"}";
        cout<<endl;
        return 0;
}
int subset(int a[],vector<int>&v,int k)
{
    if(k<0){
        print(v);
        return 0;
    }
    else{
    v.push_back(a[k]);
    subset(a,v,k-1);
    v.pop_back();
    while(a[k]==a[k-1]){
        k--;
    }
    subset(a,v,k-1);
    }
    return 0;
}
int main()
{
   //vector<int>v;

   int n;
   cin>>n;
   int a[n];
   vector<int>v;
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   subset(a,v,n-1);
   return 0;
}
