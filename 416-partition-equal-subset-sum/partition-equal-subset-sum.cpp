class Solution {
public:
int t[201][10001];
    bool solve(vector<int>& nums, int i , int x){
        if(x == 0){
            return true;
        }
        if(i >= nums.size()){
            return false;
        }
        if (t[i][x] != -1) {
         return t[i][x];
        }
        bool take = false;
        if(nums[i] <= x){
            take = solve(nums, i+1, x-nums[i]);
        }
        bool not_take = solve(nums, i+1, x);
        return t[i][x] = take||not_take;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int S = accumulate(nums.begin(),nums.end(),0);
        if(S%2 != 0){
            return false;
        }
        memset(t,-1,sizeof(t));
        int x = S/2;
        return solve(nums,0,x);
    }
};