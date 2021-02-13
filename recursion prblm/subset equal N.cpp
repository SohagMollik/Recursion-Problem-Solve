#include<bits/stdc++.h>
using namespace std;
int subset_sum(int a[],int i,int n,int sum,int count)
{
    if(i==n)
    {
        if(sum==0){
            count++;
        }
        return count;

    }

    // Recursively calling the function for two cases
    // Either the element can be counted in the subset
    // If the element is counted, then the remaining sum
    // to be checked is sum - the selected element
    // If the element is not included, then the remaining sum
    // to be checked is the total sum

    count=subset_sum(a,i+1,n,sum-a[i],count);
    count=subset_sum(a,i+1,n,sum,count);

    return count;
}
int main()
{
    int n,sum;
    cin>>n>>sum;
   int a[n];
   for(int k=0;k<n;k++){
    cin>>a[k];
   }
   //if any subset sum is equal to sum then yes print.
   // otherwise no print.
   if((subset_sum(a,0,n,sum,0))>0)cout<<"YES\n";
   else cout<<"NO\n";

  //how many times is equal to sum.
  cout<<subset_sum(a,0,n,sum,0)<<endl;

}
