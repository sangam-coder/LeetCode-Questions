class Solution {
public:
    int ans=0;
     int countArrangement(int N) {
        unordered_set<int> st;
        
        dfs(N, st);
        
        return ans;
    }
    
    void dfs(int N, unordered_set<int>& st) {
        if (st.size() == N) {
            ++ans;
            return;
        }
        
        for (int i = 1; i <= N; ++i) {
            if (st.count(i) == 0 && (i % (st.size() + 1) == 0 || (st.size() + 1) % i == 0)) {
                st.insert(i);
                
                dfs(N, st);
                
                st.erase(i);
            }
        }
    }

};