class Solution {
public:
    set<vector<int>>s;
    void get(vector<int>& nums,vector<vector<int>>& ans,vector<int>& ds,vector<int>& freq)
{
    if(ds.size()==nums.size())
    {
        s.insert(ds);
    
        return;
    }
    
    for(int i=0;i<nums.size();i++)
    {
        if(freq[i]==0)
        {
            freq[i]=1;
            ds.push_back(nums[i]);
            get(nums,ans,ds,freq);
            freq[i]=0;
            ds.pop_back();
        }
        
    }
}
 
    vector<vector<int>> permuteUnique(vector<int>& nums) {
    
         int n=nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
        vector<int>freq(n);
        for(int i=0;i<n;i++)
        {
            freq[i]=0;
        }
 
        get(nums,ans,ds,freq);
        for(auto e:s)
        {

        ans.push_back(e);
        }
    
        return  ans;
    }
};