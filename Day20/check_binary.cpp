//nesting of member functions
#include <iostream>
#include <string>
using namespace std;

class Binary {
public:
    string s;
    void read(void);
    void chk_bin(void);
    void ones_compl(void);
    void display(void);
};

void Binary::read() {
    cout << "Enter a binary number: ";
    cin >> s;
}

void Binary::chk_bin() {
    for (char c : s) {  //used to iterate in the string through char c where c will be each char of s
        if (c != '0' && c != '1') {
            cout << "Incorrect/not binary" << endl;
            return;
        }
    }
    cout << "The number is binary." << endl;
}

void Binary::ones_compl() {
    for (char &c : s) {  // Use reference to modify original characters
        if (c == '0') {
            c = '1';
        } else if (c == '1') {
            c = '0';
        }
    }
}

void Binary::display(){
    cout<<"Displaying your binary number after one's compliment:"<<endl;
    for(char c:s){
        cout<<c;
    }
    cout<<endl;
}

int main() {
    Binary b;       //object b 
    b.read();
    b.chk_bin();    //checking binary
    b.ones_compl();
    b.display();
    return 0;
}

 