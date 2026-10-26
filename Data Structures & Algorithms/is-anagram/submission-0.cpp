#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() < t.length()){
            return false;
        }

        unordered_map<char, int> lol;
        for(int i = 0 ; i < s.length(); i ++){
            lol[s[i]]++;
        }

        unordered_map<char, int> lol2;
        for(int i = 0 ; i < t.length(); i ++){
            lol2[t[i]]++;
        }

        for(auto& [key, value] : lol){
            if (lol[key] != lol2[key]){
                return false;
            }
        }

        return true;
    }
};
