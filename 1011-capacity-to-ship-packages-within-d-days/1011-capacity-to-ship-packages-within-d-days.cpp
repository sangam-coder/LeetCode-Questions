class Solution {
public:
    bool check(vector<int>weight,int pages,int student)
    {
        int allote=0;
        int cnt=0;
        for(int i=0;i<weight.size();i++)
        {

                    if(allote+weight[i]>pages)
                    {
                        cnt++;
                        
                        
                        allote=weight[i];
                        if(allote>pages)
                        {
                            return false;
                        }
                    }
            else
            {
            
                allote+=weight[i];
            }
            
        }
        if(cnt<student)
        {
           return true; 
        }
        else 
            return false;
        
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
     
        int n=weights.size();
            
    int l=weights[0];
        int r=0;
        
        for(int i=0;i<n;i++)
        {
            r+=weights[i];
            
            l=min(l,weights[i]);
        }
        while(l<=r)
        {
            
            
            int mid=l+(r-l)/2;
            
            
               if(check(weights,mid,days))
               {
                   r=mid-1;
               }
            else
            {
                    l=mid+1;
            }
                
        }
        return l;
        }
    
};