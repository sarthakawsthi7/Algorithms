class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        int closest = nums[0];
        for(int i=0;i<n; i++){
        if(abs(nums[i]) < abs(closest)){
            closest = nums[i];
        }
        else if(abs(nums[i]) == abs(closest) && nums[i] > closest){
            closest = nums[i];
        }
        }
        return closest;

    }
};