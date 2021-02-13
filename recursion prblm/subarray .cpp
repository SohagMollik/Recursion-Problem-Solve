#include<bits/stdc++.h>
using namespace std;
void subarray(int a[],int n)
{
    for(int i=0;i<=n-1;i++){
        for(int j=i;j<=n-1;j++){
                cout<<"{";
                for(int k=i;k<=j;k++){

                         printf("%d ",a[k]);
                }
            printf("}");
           cout<<endl;
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
    return 0;
}
