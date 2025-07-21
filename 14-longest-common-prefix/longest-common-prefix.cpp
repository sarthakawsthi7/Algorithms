class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i= 0;
        while(true){
            char curr_char = 0;
            for(auto  str: strs){
            if(i >= str.size()){
                curr_char = 0;
                break;
            }
            if(curr_char == 0){
                curr_char = str[i];
            }
            else if(str[i] != curr_char){
                curr_char = 0;
                break;
            }
        }
        if(curr_char == 0){
            break;
        }
        ans.push_back(curr_char);
        i++;
        }
        return ans;
        
      }
};