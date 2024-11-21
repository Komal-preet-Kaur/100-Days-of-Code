#include<iostream>
#include<string>
using namespace std;

void display(string a){
  cout<<a;
}

void display(string a,string b){
  cout<<a<<"-"<<b<<endl;
}
int main(){
    int T;
    cin>>T;
    
    if(T==1){
        string str;
        getline(cin,str);
        display(str);
    }
    else if(T==2){
        string s1,s2;
        cin>>s1>>s2;
        display(s1,s2);
    }
    
    }