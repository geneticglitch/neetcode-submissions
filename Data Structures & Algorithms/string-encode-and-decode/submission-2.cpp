#include <string>
#include <cstdlib>
class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";

        for (int i = 0; i< strs.size(); i ++){
            string delim = to_string(strs.at(i).size()) + "#" + strs.at(i);
            result += delim ;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while(i < s.length()){
            int j = s.find('#', i);
            int length = std::stoi(s.substr(i, j-i));

            result.push_back(s.substr(j+1, length));
            i = j+length+1;
        }
       return result; 
    }
};
