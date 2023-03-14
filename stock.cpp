#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int arr[1000005];


int main() {
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];
        long long int ans=0;
        long long int maxi=arr[n-1];
        int pos=n-1;
        for(int i=n-2;i>=0;i--)
        {
            if(maxi-arr[i]>0)
             {
                ans=ans+(maxi-arr[i]);
             }
            else
             {
                maxi=arr[i];
                pos=i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}