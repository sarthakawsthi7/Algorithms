class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long n = nums.size();
        long long  result = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    result = max(result, (nums[i] - nums[j]) * 1LL * nums[k]);
                }
            }
        }
        return result;
    }
};