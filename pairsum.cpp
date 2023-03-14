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
cout<<"enter key"<<endl;
int x;
cin>>x;
int count=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==x){
            count++;
        }
        
    }
}
cout<<count;

    t--;
}
return 0;
}