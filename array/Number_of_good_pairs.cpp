#include <vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        
        if (n < 2) {
            return 0;  
        }

        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(nums[i]==nums[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};
