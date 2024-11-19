#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"Enter the number of rows:";
    cin>>rows;
    cout<<"Enter the number of columns:";
    cin>>cols;
    int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];         //taking input 
        }
    }
    cout<<"The matrix is :"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";        
        }
        cout<<endl;
        
    }
    cout<<endl;
    cout<<"Transpose of the matrix is :"<<endl;
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            cout<<arr[j][i]<<" " ;       
        }
        cout<<endl;
    }


}