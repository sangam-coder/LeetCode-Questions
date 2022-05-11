class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
    vector<int>v;
    int mine=nums[0];
        v.push_back(nums[0]);
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]<mine)
            {
                mine=nums[i];
                v.push_back(mine);
            }
            else 
                v.push_back(mine);
        }
         stack<int>s;
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]<nums[i])
            {
                 
                while(s.size()&&s.top()<=v[i])
                {
                    s.pop();
                }
                
               
               if(s.size()&&nums[i]>s.top()) {
                    return true;
                }
                
                 
                     s.push(nums[i]);
                 
            }
            
        }
        for(int i=0;i<n;i++)
        {
        cout<<v[i]<<" ";
        }
        return false;
    }
};