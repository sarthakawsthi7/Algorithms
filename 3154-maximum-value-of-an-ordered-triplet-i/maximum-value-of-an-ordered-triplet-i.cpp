class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long n = nums.size();
        long long  result = 0;
        // for(int i=0; i<n; i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             result = max(result, (nums[i] - nums[j]) * 1LL * nums[k]);
        //         }
        //     }
        // }
        vector<int> leftMaxi(n, 0);
vector<int> rightMaxk(n, 0);

// Compute leftMaxi
leftMaxi[0] = nums[0];  // Initialize first element
for (int j = 1; j < n; j++) {
    leftMaxi[j] = max(leftMaxi[j - 1], nums[j]);
}

// Compute rightMaxk
rightMaxk[n - 1] = nums[n - 1];  // Initialize last element
for (int j = n - 2; j >= 0; j--) {
    rightMaxk[j] = max(rightMaxk[j + 1], nums[j]);
}

// long long result = 0;
for (int j = 1; j < n - 1; j++) {  // Ensure `j` is within bounds
    result = max(result, (long long)(leftMaxi[j - 1] - nums[j]) * rightMaxk[j + 1]);
}

return result;
}
};