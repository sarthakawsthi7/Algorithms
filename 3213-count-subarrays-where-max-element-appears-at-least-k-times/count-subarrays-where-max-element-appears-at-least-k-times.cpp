class Solution {
public:
int max_element(vector<int>& nums){
    int n = nums.size();
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(nums[i] > max)
        max = nums[i];
    }
    return max;
    
}
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int maxE = max_element(nums);
        int i = 0;
        int j = 0;
         long long result = 0;
         int cntMax = 0;
         while(j<n){
            if(nums[j] == maxE){
                  cntMax++;
            }
          
         
         while(cntMax >= k){
            result += (n-j);

            if(nums[i] == maxE){
                cntMax--;
            }
            i++;
         }
         j++;
    }
    return result;
    }
};