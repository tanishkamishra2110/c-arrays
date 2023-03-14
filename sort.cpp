#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t>0){
    int n;
    cin>>n;
    int arr[100];
    int temp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    temp =arr[j];
                    arr[j]= arr[i];
                    arr[i]=temp;
                }
                
               /* if(arr[j]==0){
               temp = arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
                }*/
            }
        }
        
    }
    for(int k=0;k<n;k++){
    cout<<arr[k];}
    t--;

}


return 0;
}