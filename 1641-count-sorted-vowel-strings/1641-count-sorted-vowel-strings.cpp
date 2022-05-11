class Solution {
public:
    int a=1,e=1,i=1,o=1,u=1;
    void increament()
    {
        a=a+e+i+o+u;
        e=e+i+o+u;
        i=i+o+u;
        o=o+u;
    
        
    }
    int countVowelStrings(int n) {
             for(int j=1;j<n;j++)
             {
                    increament();
             }
        return  a+e+i+o+u;
    }
};