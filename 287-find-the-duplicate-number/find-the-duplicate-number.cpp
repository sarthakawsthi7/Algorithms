class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //    sort(nums.begin(),nums.end());
    //    int d;
    //    for(int i=0;i<nums.size()-1;i++){
    //         if(nums[i] == nums[i+1]){
    //             return nums[i];
    //         }
    //    }
    //    return -1;

    // VISITED SOLUTION -- O(N)

    // int ans = -1;
    // for(int i=0; i<nums.size();i++){
    //     int index = abs(nums[i]);
    //     if(nums[index] < 0){
    //         ans = index;
    //         break; 
            
    //     }
    //     nums[index] *= -1;

    // }
    //     return ans;

    // POSITIONING 
    while(nums[0] != nums[nums[0]]){
        swap(nums[0], nums[nums[0]]);
    }
    return nums[0];
    }
};