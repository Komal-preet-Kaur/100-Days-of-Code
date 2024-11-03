#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"The array entered is :"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    int n;
    int count=0;
    cout<<"Enter the element which you want to search for :";
    cin>>n;
    for(int i=0;i<5;i++){
        if(arr[i]==n){
            count++;
        }
    }
    cout<<"The occurence of "<<n<< "is "<<count<<" times";
}