class Solution {
public:
 void get(vector<vector<int>>& ans,vector<int>& v,int k,int n)
 {
    if(n==0&&v.size()==k)
    {
        ans.push_back(v);
    }
     
  for(int i=!v.size()?1:v.back()+1;i<=9;i++)
  {
      if(n-i<0) break;
      
     
        v.push_back(i);
      get(ans,v,k,n-i);
      v.pop_back();
  }
     
 }
    vector<vector<int>> combinationSum3(int k, int n) {
  
        vector<vector<int>>ans;
        vector<int>v;
        get(ans,v,k,n);
        return ans;
    }
};