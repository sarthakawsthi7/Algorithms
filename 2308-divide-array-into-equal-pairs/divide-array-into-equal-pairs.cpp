class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> M;
        int n = nums.size();
        for(int num: nums){
            M[num]++;
        }
        for(auto& it:M){
            if(it.second %2 != 0) 
            return false;
        }
        return true;
    }
};
// class Solution {
// public:
//     bool divideArray(std::vector<int>& nums) {
//         std::unordered_map<int, int> M;
//         int n = nums.size();
        
//         for(int num : nums) {
//             M[num]++;
//         }
        
//         for(auto& it : M) {
//             if(it.second % 2 != 0) 
//                 return false;
//         }
        
//         return true;
//     }
// };