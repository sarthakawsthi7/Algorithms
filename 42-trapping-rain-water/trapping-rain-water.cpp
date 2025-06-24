class Solution {
public:
    int trap(std::vector<int>& height) {
        int n = height.size();
        if (n <= 2) return 0;
        
        int left = 0, right = n - 1;
        int leftMax = 0, rightMax = 0;
        int trappedWater = 0;
        
        while (left < right) {
            leftMax = std::max(leftMax, height[left]);
            rightMax = std::max(rightMax, height[right]);
            if (leftMax < rightMax) {
                trappedWater += leftMax - height[left];
                left++;
            } else {
                trappedWater += rightMax - height[right];
                right--;
                
            }
        }
        
        return trappedWater;
    }
};