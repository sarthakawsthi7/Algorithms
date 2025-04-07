class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> result = {""};

        for (int i = s.size() - 1; i >= 0; --i) {
            vector<string> temp;
            char c = s[i];

            if (isalpha(c)) {
                for (const string& str : result) {
                    temp.push_back(string(1, tolower(c)) + str);
                    temp.push_back(string(1, toupper(c)) + str);
                }
            } else {
                for (const string& str : result) {
                    temp.push_back(string(1, c) + str);
                }
            }

            result = temp;
        }

        return result;
    }
};
