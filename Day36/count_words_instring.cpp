#include<iostream>
#include<string>
using namespace std;

int main(){
    int words=1;    //setting to 1 cause atleast one owrd will be there if not then word is set to 0
    string str;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '){        //checking if space then new word starts
            words++;
        }
    }
    if(str.empty()){
        words=0;
    }
    cout<<words;
}