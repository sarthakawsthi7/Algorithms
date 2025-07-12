class Solution {
public:
int lowerBound(vector<int>&arr, int x){
    int low = 0;
    int high = arr.size()-1;
    int ans = high;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
       
    }
    return ans;
}

    vector<int> binarySearch_Method(vector<int>& arr, int k, int x){
        vector<int>ans;
        int h= lowerBound(arr,x);
        int l = h-1;
        
        while(k--){
             if (l < 0) {
                h++;
            } else if (h >= arr.size()) {
                l--;
            } else if (x - arr[l] <= arr[h] - x) {
                l--;
            } else {
                h++;
            }
        }
    
    for(int i=l+1; i<h; i++){
        ans.push_back(arr[i]);
    }
    return ans;
}

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return binarySearch_Method(arr,k,x);
    }
};