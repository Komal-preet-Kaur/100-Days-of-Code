#include<iostream>
using namespace std;
int main(){
    int arr[5],i;
    int sum=0;
    for(int i=0;i<=4;i++){  //taking inputs
        cin>>arr[i];
    }
     for(int i=0;i<=4;i++){ //printing the elements
        cout<<arr[i]<<" ";
    }
     for(int i=0;i<=4;i++){ //finding sum
       sum+=arr[i];
    }
    cout<<endl;
    cout<<sum; 
    
   
}
