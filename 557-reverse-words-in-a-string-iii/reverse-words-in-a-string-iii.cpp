class Solution {
public:
    string reverseWords(string s) {
        int j;
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == ' '){
                j=i-1;

                while(k < j){
                    swap(s[j--], s[k++]);
                }
                k= i+1;
            }
        }
        j= s.size()-1;
        while(k < j){
          swap(s[j--], s[k++]);
         }
        return s;
    }
};