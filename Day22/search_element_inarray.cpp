#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"The array entered is :";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int n;
    cout<<"Enter the element which you want to search for :";
    cin>>n;
   bool found=false;
 for (int i = 0; i < 5; i++) {
        if (arr[i] == n) {
            found = true;
            break;  
        }
    }

    if (found) {
        cout << "Element is present" << endl;
    } else {
        cout << "Element is not present" << endl;
    }

    return 0;
}
