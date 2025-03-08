class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int minWhite = k;
        for(int i=0;i<=n-k;i++){
            int whiteCount = 0;
            for(int j=i;j<i+k;j++){
                if(blocks[j] == 'W') whiteCount++;
            }
            minWhite = min(minWhite,whiteCount);
        }
        return minWhite;
    }
};