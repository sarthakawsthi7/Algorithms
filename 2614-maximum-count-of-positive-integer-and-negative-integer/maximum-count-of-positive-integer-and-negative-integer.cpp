// class Solution {
// public:
//     int maximumCount(vector<int>& nums) {
//         int n = nums.size();
//         int poscnt = 0;
//         int negcnt = 0;
//         for(int i=0;i<n;i++){
//             if(nums[i]>0){
//                 poscnt++;
//             }
//             else if(nums[i]<0){
//                 negcnt++;
//             }
//             else if(nums[i]==0){
//                 return (poscnt + negcnt);
//             }
//         }
//         return max(poscnt,negcnt);
//     }
// };
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int pos_start = lower_bound(nums.begin(), nums.end(), 1) - nums.begin();
        int neg_end = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int pos_count = n - pos_start;
        int neg_count = neg_end;
        return max(pos_count, neg_count);
    }
};