class MyHashSet {
public:
    int arr[1000001];
    MyHashSet() {
        fill(arr, arr+100000 , -1);
    }
    
    void add(int key) {
        arr[key] = 1;
    }
    
    void remove(int key) {
        arr[key] = -1;
    }
    
    bool contains(int key) {
      if(arr[key] == 1) return true;
      else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */