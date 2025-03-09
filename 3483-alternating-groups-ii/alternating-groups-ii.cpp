class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int Length = 1, ans = 0, n = colors.size(); 
        for(int i=1; i<=n+k-2; i++){ 
            if (colors[i%n]!= colors[(i-1+n)%n]){ 
                Length++; 
            }else{ 
                Length= 1; 
            }
            if (Length >= k) ans++;
        }
        return ans;
    }
};