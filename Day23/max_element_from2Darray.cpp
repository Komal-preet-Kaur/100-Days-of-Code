#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][3];
    int mx=INT_MIN;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout<< arr[i][j]<<" ";
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>mx){
                mx=arr[i][j];
            }
        }
    }
    cout<<mx<<endl;

}