class MyHashSet {
public:
    vector<int>v;
    MyHashSet() {
        
        
    }
    
    void add(int key) {
        bool a = false;
        for(int i = 0; i<v.size(); i++){
            if(v[i] == key){
                a = true;
                break;
            }
        }
        if(a == false){
            v.push_back(key);
        }
        
    }
    
    void remove(int key) {
        for(int i = 0; i<v.size(); i++){
            if(v[i] == key){
                v[i] = -1;
                break;
            }
        }
    }
    
    bool contains(int key) {
        for(int i = 0; i<v.size(); i++){
            if(v[i] == key){
                return true;
            }
        }
        return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */