class Solution {
public:
    string largestGoodInteger(string num) {
        
         int n=num.size(); int cnt=0; string ans;int ind=0;
        
        for(int  i=0;i<n-2;i++)
        {
            
            if(num[i]==num[i+1]&&num[i+1]==num[i+2])
            {
                ans=max(ans,num.substr(i,3));
            }
        
        }
        
        
        
     
        return ans;
    }
};