#include <algorithm>
#include <cmath>
class Solution {
public:
    int valid(vector<int>& lol, int h, int k){
        long long sum = 0;
        for(int i = 0; i < lol.size(); i++){
            sum += std::max(1, (int)std::ceil((double)lol.at(i) / k));
        }
        if (sum <= h){
            return 0; 
        }
        return 1;
    }


    int minEatingSpeed(vector<int>& piles, int h) {

        sort(piles.begin(), piles.end(), [] (int a, int b) {return a < b;});
        int l = 1;
        int r = piles.back();
        int min_valid = r;
        
        while(l <= r){
            int mid = l + (r-l) / 2;

            int lol2 = valid(piles, h, mid);

            if(lol2 == 0){
                min_valid = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return min_valid;
    }   
};
