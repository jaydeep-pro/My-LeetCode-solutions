class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>st(wordList.begin(), wordList.end());

        queue<pair<string, int>>q;
        q.push({beginWord,1});

        while(!q.empty()){
            string tempWord = q.front().first;
            int level=q.front().second;
            q.pop();

            if(tempWord == endWord) return level;

            st.erase(tempWord);

            for(int i=0;i<tempWord.length();i++){
                char tempChar = tempWord[i];
                for(char ch= 'a';ch<='z';ch++){
                    tempWord[i]= ch;

                    if(st.find(tempWord) != st.end()){
                        q.push({tempWord, level + 1});
                        st.erase(tempWord);
                    }
                     tempWord[i] = tempChar;
                }
            }
        }
        return 0;
    }
};