//count vowels
#include<iostream>
using namespace std;
int main(){
    string s="Cow is an animal with four legs";
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]='a' ||'e'||'i'||'o'||'o'||'u'||'A'||'E'||'I'||'O'||'U'){
            count++;
        }
    }
    cout<<count;
}