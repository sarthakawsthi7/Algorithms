class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {
        int n = arr.size();
        bool add = true;
        for(int i=n-1; i>=0;i--){
            if(add){
                arr[i]++;
                if(arr[i] == 10){
                    arr[i] = 0;
                }
                else{
                    add = false;
                }
            }
        }
        if(add){
            arr.insert(arr.begin(),1);
        }
        return arr;

        
    }
};