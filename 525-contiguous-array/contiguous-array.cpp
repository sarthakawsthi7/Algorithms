class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int currentSum = 0;
        mp[0] = -1;
        int result = 0;
        for(int i=0; i<n;i++){
            currentSum += (nums[i] == 1) ? : -1;
            if(mp.find(currentSum) != mp.end()){
                result = max(result, i-mp[currentSum]);
            }
            else{
                mp[currentSum]=i;
            }
        }
        return result;
    }
};