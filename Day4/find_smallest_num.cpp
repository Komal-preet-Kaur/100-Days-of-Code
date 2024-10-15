//to find smallest number in the array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the elements you want in the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int sm=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<sm){
            sm=arr[i];
        }
    }
    cout<<sm<<endl;
}