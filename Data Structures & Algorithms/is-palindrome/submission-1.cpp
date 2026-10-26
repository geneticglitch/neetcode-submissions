#include <cctype> 

class Solution {
public:
    bool isPalindrome(string s) {
        int right = s.length() - 1;
        int left = 0;

        while(left < right){
            if (!(isalnum(s.at(left))) ){
                left++;
                continue;
            }
            else if (!(isalnum(s.at(right)))){
                right--;
                continue;
            }
            if(tolower(s.at(left)) != tolower(s.at(right))){
                return false;
            }
            right--;
            left++;
        }

        return true;
    }
};
