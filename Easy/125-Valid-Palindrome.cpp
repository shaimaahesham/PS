#include <string>
#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
       // char* begin = new char;
       // char* end = new char;
        bool p = true;
        string updatedString;

        for (char c : s){
            if (isalnum(c)){
                updatedString += tolower(c);
            }

        }

        int begin = 0;
        int end = updatedString.length()-1;

        for (int i = 0 ;i<updatedString.length();i++){
            if (updatedString[begin] == updatedString[end]){
                begin++;
                end--;
                continue;
            }
            else {
                p = false;
                break;
            }
        }
        return p;
    }
};