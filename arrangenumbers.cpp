#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[100];
//for(int i =0;i<=n/2;i++){
    for(int l=1;l<=n+1/2;l++){
        if(l%2!=0){
            cout<<l<<" ";
        }
    }
//}
for(int j=n+1; j<=2;j--){
    if(j%2==0){
        cout<<j<<"";
    }
}
//for(int k=0;k<=n-1;k++){
    ////cout<<a[k]<<" ";
//}
return 0;
}