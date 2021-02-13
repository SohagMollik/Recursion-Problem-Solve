#include<bits/stdc++.h>
using namespace std;
void subsetsum(int a[],int n)
{
    int c=0;
    for(int i=0;i<n;i++){
            int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            if(sum%2==0){
                c++;

            }

        }

    }
    if(c>0){
    cout<<c<<endl;
    }
    else cout<<-1<<endl;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   subsetsum(a,n);
}
