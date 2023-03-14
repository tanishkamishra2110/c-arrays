include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[100];
int b[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int i=n-1;
for(int j=0;j<i;j++){
    
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
i--;
    
    }

for(int k=0;k<n;k++){
    cout<<arr[k];
}
return 0;
}