class Solution {
public:
    bool areNumbersAscending(string s) {
        int last= -1e9;
        for(int i=0;i<s.size();i++){
            if(s[i] >= '0' && s[i] <= '9'){
                int temp =0;
                while(s[i] >= '0' && s[i] <= '9' && i< s.size()){
                    temp = temp*10 + (s[i] - '0');
                    i++;
                }
                if(temp <= last) return false;
                last = temp;
            }
        }
        return true;
    }
};