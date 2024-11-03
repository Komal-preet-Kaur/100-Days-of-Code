#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    cout<<"The string entered is :"<<str<<endl;
    char ch;
    int count=0;
    cout<<"Enter the character which you want to search for :";
    cin>>ch;
    for( int i=0;i<str.length();i++){
        if(str[i]==ch){
            count++;
        }
    }
    cout<<"The occurence of "<<ch<< " is "<<count<<" times";
}