class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
       for(int i=0; i<n;i++){
        int num = nums[i];
        mp[num] = mp[num] +1; 
       } 
       unordered_map<int,int>::iterator it;
       int ans;
       for(it = mp.begin(); it != mp.end(); it++){
        int key = it->first;
        int value = it->second;
        if(value == 1){
            ans = key;
            break;
            // cout << value << endl;
        }
       }
       return ans;
    }
};