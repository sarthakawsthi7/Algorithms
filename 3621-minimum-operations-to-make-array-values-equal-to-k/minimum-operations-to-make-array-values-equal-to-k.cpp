class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> mp;
        for(int &x : nums){
            if(x < k){
                return -1;
            }
            else if(x > k){
                mp.insert(x);
            }
        }
     return mp.size();
    }
};