//hackerrank
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string str;
    cin>>n;
    if(n<=9 && n>=1){
        switch (n){
        case 1:
        cout<<"one";
        break;
        
        case 2:
        cout<<"two";
        break;
        
        case 3:
        cout<<"three";
        break;
        
        case 4:
        cout<<"four";
        break;
        
        case 5:
        cout<<"five";
        break;
        
        case 6:
        cout<<"six";
        break;
        
        case 7:
        cout<<"seven";
        break;
        
        case 8:
        cout<<"eight";
        break;
        
        case 9:
        cout<<"nine";
        break;   
    }

    }
    
    else if(n>9){
        cout<<"Greater than 9";
    }
    return 0;
        
}