#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int count_vowels=0;
    int count_const=0;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch== 'a'||ch== 'i'||ch== 'e'||ch== 'o'||ch== 'u'||ch== 'A'||ch== 'E'||ch== 'I'||ch== 'O'||ch== 'U'){
            count_vowels++;
        }
        else{
            count_const++;
        }
    }
    cout<<"Vowels: "<<count_vowels<<endl;
    cout<<"Constants: "<<count_const<<endl;
}