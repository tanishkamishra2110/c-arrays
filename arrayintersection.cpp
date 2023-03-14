#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t>0){
    int n;
    cin>>n;
    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int n1;
    cin>>n1;
int arr1[100];
for(int i=0;i<n1;i++){
    cin>>arr1[i];
}
for(int j=0;j<n;j++){
    for(int k=0;k<n1;k++){

        if(arr[j]==arr1[k])
        {
            cout<<arr[j];
        }
    }
}
t--;
}
return 0;
}