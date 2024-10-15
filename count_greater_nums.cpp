#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<=4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int count=0;
  
    for(int i=0;i<=4;i++){
        if(n<arr[i]){
            count++;
        }
    }
    cout<<count;
}