class AllOne {
public:

    unordered_map<int,pair<int,int>> starts;
    unordered_map<string,int> m;
    int size=0;
    vector<pair<int,string>> vp;

    AllOne() {
        
    }
    
    void inc(string key) {
        if(m.find(key) == m.end()){
            m[key]=size;
            vp.push_back({1,key});
            if(starts.find(1)==starts.end()){
                starts[1]=make_pair(size,1);
            }
            else{
                starts[1].second++;
            }
            size++;
        }
        else{
            int ind = m[key];
            int currcnt = vp[ind].first;
            int startind = starts[currcnt].first;
            string leader = vp[startind].second;
            if(leader!=key){
                swap(vp[ind],vp[startind]);
                m[key]=startind;
                m[leader]=ind;
            }
            vp[startind].first++;
            starts[currcnt].second--;
            starts[currcnt].first++;
            if(starts[currcnt].second==0) starts.erase(starts.find(currcnt));
            currcnt++;
            if(starts.find(currcnt)==starts.end()){
                starts[currcnt] = make_pair(startind,0);
            }
            starts[currcnt].second++;
        }
    }
    
    void dec(string key) {
        int ind = m[key];
        int currcnt = vp[ind].first;
        int endind = starts[currcnt].first + starts[currcnt].second - 1;
        string slave = vp[endind].second;
        if(slave!=key){
            swap(vp[ind],vp[endind]);
            m[key]=endind;
            m[slave]=ind;
        }
        vp[endind].first--;
        starts[currcnt].second--;
        if(starts[currcnt].second==0) starts.erase(starts.find(currcnt));
        currcnt--;
        if(currcnt==0){
            vp.pop_back();
            m.erase(m.find(key));
            size--;
        }
        else{
            if(starts.find(currcnt)==starts.end()){
                starts[currcnt] = make_pair(endind,1);
            }
            else{
                starts[currcnt].first = endind;
                starts[currcnt].second++;
            }
        }
    }
    
    string getMaxKey() {
        if(size==0) return "";
        return vp[0].second;
    }
    
    string getMinKey() {
        if(size==0) return "";
        return vp[size-1].second;
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */