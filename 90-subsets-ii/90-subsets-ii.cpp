class Solution {
public:
    void get(set<vector<int>> &s,int i,vector<int>nums,vector<int>&v)
    {
        s.insert(v);
        for(int j=i;j<nums.size();j++)
        {
          v.push_back(nums[j]);
            get(s,j+1,nums,v);
            v.pop_back();
        }
        
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
vector<int>v;
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
      get(s,0,nums,v);
     vector<vector<int>>ans;
        for(auto itr:s)
        {
            ans.push_back(itr);
        }
    return ans;
    }
};