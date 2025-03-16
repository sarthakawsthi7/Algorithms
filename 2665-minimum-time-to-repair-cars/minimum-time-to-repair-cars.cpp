class Solution {
public:
typedef long long ll;
bool isPossible(vector<int>& ranks, int cars, ll mid){
    ll carPlaced = 0;
for(int i=0; i<ranks.size();i++){
    carPlaced += sqrt(mid/ranks[i]);
}
return carPlaced >= cars;
}
    long long repairCars(vector<int>& ranks, int cars) {
        int n = ranks.size();
        ll l = 1;
        int maxR = *max_element(begin(ranks), end(ranks));
        ll r = 1LL* maxR*cars*cars;
        ll result = -1;
        while(l<=r){
            ll mid = l+(r-l)/2;
            if(isPossible(ranks,cars,mid) == true){
                result = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }      
        }  
        return result;
    }
};