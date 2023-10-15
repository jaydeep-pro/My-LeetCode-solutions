
struct Node{
    Node *links[26];
    bool flag = false;
    bool containsKey(char ch){
        return (links[ch-'a'] != NULL);
    }
    void put(char ch){
        links[ch-'a'] =new Node();
    }
    Node* get(char ch){
        return links[ch-'a'];
    }

    void setEnd(){
        flag = true;
     
    }
    bool isEnd(){
        return flag;
    }
};

class Trie {
private:
    Node* root;
   
public:
    Trie() {
        root = new Node(); 
    }
    
    void insert(string word) {
        Node* node = root;
        for(int i=0;i<word.length();i++){
         if(!node->containsKey(word[i])){
            node->put(word[i]);
         }
         //moves to the reference trie
       node =  node->get(word[i]);
        }
        node->setEnd();
    }
    
    bool search(string word) {
        Node* node = root;
        for(int i=0;i<word.length();i++){
            if(!node->containsKey(word[i])){
                return false;
            }
            node = node->get(word[i]);
        }
        return node->isEnd();
    }
    
    bool startsWith(string prefix) {
        Node* node = root;
            for(int i=0;i<prefix.length();i++){
                if(!node->containsKey(prefix[i])){
                    return false;
                }
                node = node->get(prefix[i]);
            }
            return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */