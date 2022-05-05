class Solution {
public:
    vector<int> searchRange(vector<int>& A, int target) {
        
    
    int n=A.size();
            if(n==0)
            {
            return {-1,-1};
            }
     int i = 0, j = n - 1;
    vector<int> ret(2, -1);
    // Search for the left one
    while (i < j)
    {
        int mid = (i + j) /2;
        if (A[mid] < target) i = mid + 1;
        else j = mid;
    }
    if (A[i]!=target) return ret;
    else ret[0] = i;
    
    
    j = n-1;  
    while (i < j)
    {
        int mid = (i + j) /2 + 1;	
        if (A[mid] > target) j = mid - 1;  
        else i = mid;				
    }
    ret[1] = j;
    return ret; 
    }
};