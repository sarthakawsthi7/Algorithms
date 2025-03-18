class Solution {
public:
double slidingWindow(vector<int>& nums, int& k){
        int sum = 0;
        int i=0, j= k-1;
        for(int s=i; s<=j;++s)
            sum += nums[s];
            int maxSum = sum;
            j++;
            while(j < nums.size()){
                sum -= nums[i++];
                sum += nums[j++];
                maxSum = max(maxSum,sum);
            }
        
              double maxAvg = maxSum / double(k);
        
            return maxAvg;
 
}

    double findMaxAverage(vector<int>& nums, int k) {
 return slidingWindow(nums,k);

    }
};