#include<bits/stdc++.h>
using namespace std;
void print_subarray(int a[],int s,int e)
{
     printf("{");
    for(int i=s;i<e;i++)
        printf("%d ",a[i]);
        printf("%d}",a[e]);
  cout<<endl;
}
void subarray(int a[],int n)
{
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            print_subarray(a,i,j);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    subarray(a,n);
}
