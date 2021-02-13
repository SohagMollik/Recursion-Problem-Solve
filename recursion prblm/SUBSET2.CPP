#include<bits/stdc++.h>
using namespace std;
void print(set<int>&s,set<int>::iterator it){
    cout<<"{";
 for(it=s.begin();it!=s.end();it++)
 {
   cout<<*it<<" ";
 }
 cout<<"}";
 cout<<endl;
}
int subset(int a[],set<int>&s,set<int>::iterator it,int index,int size)
{
   if(index>size)
   {
       print(s,it);
       return 0;
   }
   s.insert(a[index]);
   subset(a,s,it,index+1,size);
   s.erase(a[index]);
   subset(a,s,it,index+1,size);
   return 0;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    set<int>s;
    set<int>::iterator it;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    subset(a,s,it,0,n-1);
}
