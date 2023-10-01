class Solution {
public:
    string reverseWords(string s) {
        string temp= "";
        int st =0;
        for(int i=0;i<s.length();i++){
           if(s[i] == ' '){
             //st se i-1 tak -->> temp daal do
             int k=0;
              for(int j= st;j<i;j++){
                  s[j] = temp[k++];
              }
               temp = "";
               st = i+1;
           }
          else temp = s[i] + temp;
        }
        int k=0;
        for(int j= st;j<s.length();j++){
         s[j] = temp[k++];
         }
        return s;
    }
};