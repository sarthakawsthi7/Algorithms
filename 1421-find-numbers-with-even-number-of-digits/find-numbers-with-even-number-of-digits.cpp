class Solution {
public:
int digit_count(int n){
    int cnt = 0;
    while(n>0){
    int ans = 0;
    int r = n % 10;
    ans = ans * 10 + r;
    n = n/10;
    cnt++;
    }
    return cnt;
}
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
     
        for(int i=0; i<n; i++){
               int digit = digit_count(nums[i]);
            if(digit % 2 == 0){
                count++;
            }
        
        }
        
        return count;
    }
};