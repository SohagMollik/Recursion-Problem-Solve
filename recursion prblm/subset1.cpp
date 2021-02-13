#include<bits/stdc++.h>
using namespace std;

int print(set<int>&v,set<int>::iterator it)
{

    cout<<"{";
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";}
        cout<<"}";
        cout<<endl;
        return 0;
}
int subset(int a[],set<int>&v,set<int>::iterator it,int index,int size)
{
    if(index>size){
        print(v,it);
        return 0;
    }
    v.insert(a[index]);
    subset(a,v,it,index+1,size);
    v.erase(a[index]);
    subset(a,v,it,index+1,size);
    return 0;
}
int main()
{
 set<int>v;
 set<int>::iterator it;
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  subset(a,v,it,0,n-1);
}
