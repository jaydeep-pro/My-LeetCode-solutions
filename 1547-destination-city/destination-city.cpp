class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, string>mp;

        for(int i=0;i<paths.size();i++){
            mp[paths[i][0]] = paths[i][1];
        }

        string start = paths[0][0];
        string end = paths[0][1];
        while(true){
           
           if(mp.find(end) == mp.end()){
               return end;
           }else{
               start = end;
               end = mp[end];
           }

        }
        return "";
    }
};