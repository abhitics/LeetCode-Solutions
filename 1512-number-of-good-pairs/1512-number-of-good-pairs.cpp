class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int s=0;
        for(int num:nums) mp[num]++;
        for(auto& pair:mp){
            int n=pair.second;
            s+=(n*(n-1))/2;
        }
        
        return s;
        
    }
};