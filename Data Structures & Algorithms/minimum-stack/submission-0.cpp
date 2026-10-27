#include <stack>
class MinStack {
public:
    stack<pair<int, int>> lol;

    MinStack() {
        lol = {};
    }
    
    void push(int val) {
        if(!lol.empty()){
            auto x = lol.top();
            if(val < x.second){
                lol.push({val, val});
            }
            else{
                lol.push({val, x.second});
            }
        }
        else{
            lol.push({val, val});
        }
    }
    
    void pop() {
        lol.pop();
    }
    
    int top() {
        return lol.top().first;
    }
    
    int getMin() {
        return lol.top().second;
    }
};
