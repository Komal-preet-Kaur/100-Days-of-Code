#include <iostream>   
#include <string>     
using namespace std;  

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        // Swapping the  characters at positions i and (n - i - 1)
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;

    return 0;
}

// Method 2
#include <iostream>
#include <string>
using namespace std;
void reverseString(string &str) {
    int start = 0, end = str.length() - 1;
    while(start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}
