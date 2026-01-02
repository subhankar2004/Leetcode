#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        vector<int> sol;
        for (int i = 0; i < nums.size(); i++) {
            if (find(sol.begin(), sol.end(), nums[i]) != sol.end()) {
                return nums[i];
            }
            sol.push_back(nums[i]);
        }
        return -1;
    }
};
