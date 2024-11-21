#include <iostream>
#include <string>
using namespace std;

int checkPalindrome(string s) {
    int word = 0;
    bool pali = true;

    for (int i = 0; i <= s.length() / 2; i++) {
        if (s[i] != s[s.length() - 1 - i]) {
            pali = false;
            break; // Exit loop early if it's not a palindrome
        }
    }

    if (pali) {
        word++;
    }

    return word;
}

int main() {
    string str;
    int palindromeCount = 0;

    // Input full string
    getline(cin, str);

    // Parse the string manually to extract words
    string word = "";
    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') { // Word boundary
            if (!word.empty()) {
                palindromeCount += checkPalindrome(word);
            }
            word = ""; // Reset word for the next token
        } else {
            word += str[i];
        }
    }

    // Output the count of palindromic words
    cout << "Number of palindromic words: " << palindromeCount << endl;

    return 0;
}



//method 2


// #include <iostream>
// #include <string>
// #include <sstream> // For string stream to split words
// using namespace std;

// int checkPalindrome(string s) {
//     int word = 0;
//     bool pali = true;

//     for (int i = 0; i <= s.length() / 2; i++) {
//         if (s[i] != s[s.length() - 1 - i]) {
//             pali = false;
//             break; // Exit loop early if it's not a palindrome
//         }
//     }

//     if (pali) {
//         word++;
//     }

//     return word;
// }

// int main() {
//     string str, word;
//     int palindromeCount = 0;

//     // Input full string
//     getline(cin, str);

//     // Split the string into words
//     stringstream ss(str);
//     while (ss >> word) { // Extract each word
//         palindromeCount += checkPalindrome(word);
//     }

//     // Output the count of palindromic words
//     cout << "Number of palindromic words: " << palindromeCount << endl;

//     return 0;
// }
