#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 1; i<=n; i++){
            if(i % 2 != 0){
                int k = (i+1)/2;
                A[k-1] = i;
            }
            else{
                int x = n-(i/2);
                A[x] = i;
            }
        }
        for(int i = 0; i<n; i++){
            cout<<A[i]<<" ";
        }
        cout<<"\n";
    }t--;
    return 0;
}