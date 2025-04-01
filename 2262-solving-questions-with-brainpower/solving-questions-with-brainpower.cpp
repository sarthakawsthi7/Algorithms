class Solution {
public:
    long long n;
    long long solve(long long i, vector<vector<int>>& questions, vector<long long>& t) {
        if (i >= n) return 0;  
        if (t[i] != -1) return t[i]; 
        long long nextIndex = i + questions[i][1] + 1;
        long long taken = questions[i][0] + (nextIndex < n ? solve(nextIndex, questions, t) : 0);
        long long not_taken = solve(i + 1, questions, t);

        return t[i] = max(taken, not_taken);  
    }

    long long mostPoints(vector<vector<int>>& questions) {
        n = questions.size();
        vector<long long> t(n, -1); 
        return solve(0, questions, t);
    }
};
