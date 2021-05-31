
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> check;
        int store;
        for(int i = 0; i < nums.size(); i++){
            store = target - nums[i];
            if(check.find(store) != check.end())
                return {check[store], i};
            else
                check[nums[i]] = i;
        }
        return {};
    }
};

// Time : O(n)
// Space : O(n)
