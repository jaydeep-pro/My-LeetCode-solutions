class Solution {
public:
    string largestGoodInteger(string num) {
        string ans= "";
        string temp = "";
        for(int i=0;i<num.size()-2;i++){
          if(num[i] == num[i+1] && num[i+1] == num[i+2]){
              temp = num.substr(i,3);
             int a= stoi(temp);
             if(ans != ""){ int b = stoi(ans);
              if(a>b) ans= temp;
             }

             else{
                  ans = temp;
              }
          } 
        }
        return ans;
    }
};