class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        int n = recipes.size();
        vector<string> result;
        int count = n;
        unordered_set<string> st(begin(supplies), end(supplies));
        vector<bool> cooked(n,false);
        while(count--){
            for(int j=0; j<n; j++){
                if(cooked[j]) {
                    continue;
                }
                bool bnega = true;
                for(int k=0; k<ingredients[j].size();k++){
                    if(!st.count(ingredients[j][k])){
                        bnega = false;
                        break;
                    }
                }
                if(bnega) {
                    st.insert(recipes[j]);
                    result.push_back(recipes[j]);
                    cooked[j] = true;
                }
            }

        }
        return result;
    }
};