#include<iostream>
using namespace std;
int main(){
    int elements;
    cin>>elements;
    int arr[elements];
    for(int i=0;i<elements;i++){
        cin>>arr[i];
    }
    bool isPalindrome=true;
    for(int i=0;i<elements/2;i++){
        if(arr[i]!=arr[elements-1-i]){
            isPalindrome=false;
        }
    }
    if(isPalindrome){
        cout<<"The given array is palindrome";
    }
    else{
        cout<<"The given array is not a palindrome ";
    }

    return 0;
}