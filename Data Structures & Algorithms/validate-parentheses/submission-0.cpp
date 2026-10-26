#include <stack>

class Solution {
   public:
    bool isValid(string s) {
        stack<char> lol;

        for (int i = 0; i < s.length(); i++) {
            char lol2 = s.at(i);
            if (lol2 == '(' || lol2 == '{' || lol2 == '[') {
                lol.push(s.at(i));
                continue;
            }

            else {
                if (lol.empty()) {
                    return false;
                }

                if (lol2 == ')' && lol.top() == '(') {
                    lol.pop();
                } else if (lol2 == '}' && lol.top() == '{') {
                    lol.pop();
                } else if (lol2 == ']' && lol.top() == '[') {
                    lol.pop();
                } else {
                    return false;
                }
            }
        }
        return lol.empty();
    }
};
