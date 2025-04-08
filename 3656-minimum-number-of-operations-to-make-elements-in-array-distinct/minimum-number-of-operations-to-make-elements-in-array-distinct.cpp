class Solution {
public:
    // bool check(vector<int>& nums){
    //     unordered_set<int> st;
    //     for (int num : nums){
    //         if (st.count(num)) return false;
    //         st.insert(num);
    //     }
    //     return true;
    // }
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        int result = 0;
        for(int i=n-1; i>=0; i--){
            if(st.count(nums[i])){
                return ceil((i+1)/3.0);
            }
            st.insert(nums[i]);
        }
        return result;
        //  for (int i = 0; i < n; i += 3){
        //     vector<int> temp;
        //     for (int j = i; j < i + 3 && j < n; ++j){
        //         temp.push_back(nums[j]);
        //     }
        //     if (check(temp)) {
        //         return count;
        //     }
        //     count++;
        // }
        // return count; 
    }
};