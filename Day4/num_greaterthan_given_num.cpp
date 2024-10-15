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
    cout<<"Enter the number from which comparision is to be found:"<<" ";
    cin>>n;
    int max=n;
    for(int i=0;i<=4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        else{
        cout<<n<<"is the greatest";
        }
    }
    cout<<"Number greater than"<<n<<"is"<<max;
}