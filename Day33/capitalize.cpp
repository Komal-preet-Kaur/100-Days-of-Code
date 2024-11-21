#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "get better at coding";

    for (int i = 0; i < str.length(); i++) {
        if (i == 0 || str[i - 1] == ' ') {      //checking if the char is first one from the characters
            str[i] = toupper(str[i]);           //converting to uppercase
        }
    }

    cout << "Capitalized String: " << str << endl;

    return 0;
}

//with functions
// Alter the string according to specifications above

// void capitalizeFirstChar(string &str)
// {
//   bool newWord=true;
//   for(int i=0;i<str.length();i++){
//     if(newWord && str[i]!=' '){
//       str[i]=toupper(str[i]);
//       newWord=false;
//     }
//     else if(str[i]==' '){
//       newWord=true;
//     }
//   }

// }
