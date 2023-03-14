#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[100];
int b[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    b[i]=arr[i];
}
int i=0;
for(int l=n-1;l>=0;l--){
    arr[i]=b[l];
    i++;
}
for(int i=0;i<n;i++){
    cout<<arr[i];
}
return 0;
}