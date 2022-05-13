class Solution {
public:
  static  bool mycomp(vector<int>&a,vector<int>&b)
    {
        return a[1] < b[1] || a[1] == b[1] && a[0] < b[0];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        
            int n=pairs.size();
        int n1=pairs[0].size();
        sort(pairs.begin(),pairs.end(),mycomp);
        vector<int>& pair=pairs[0];
        
        
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            
            if(i==0||pairs[i][0]>pair[1])
            {
                cnt++;
                
                pair=pairs[i];
            }
        }
    return cnt;
    }
};
