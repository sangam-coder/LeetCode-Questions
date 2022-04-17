class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
    map<int,int>mp;
        
        int n=tasks.size();
        for(int i=0;i<n;i++)
        {
            mp[tasks[i]]++;
        }
       int mini=0;
        for(auto e: mp)
        {
            if(e.second==1)
            {
                return -1;
                break;
            }
            int cnt=0;
          while(e.second>3)
          {
              e.second-=3;
              
              cnt++;
              
              
          }
            if(e.second)
            {
                cnt++;
            }
            mini+=cnt;
        }
        return mini;
    }
};