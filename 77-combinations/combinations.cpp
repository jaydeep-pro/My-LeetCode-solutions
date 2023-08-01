class Solution {
public:
    void solve(set<vector<int>>&st,vector<int>&temp, int n , int k , int cnt, int ind){
      if(cnt == k ){
          st.insert(temp);
          return;
      }
       if(ind >=n) return;
      //take 
         temp.push_back(ind+1);
         solve(st, temp, n, k, cnt+1, ind+1);
         temp.pop_back();
      //no take
          solve(st, temp, n, k, cnt, ind+1);

      return;
    }
    vector<vector<int>> combine(int n, int k) {
        set<vector<int>>st;
        vector<int>temp;
        solve(st,temp, n , k , 0,0);
         
         vector<vector<int>>ans;

         for(auto it= st.begin(); it != st.end();it++){
             ans.push_back(*it);
         }

         return ans;

    }
};