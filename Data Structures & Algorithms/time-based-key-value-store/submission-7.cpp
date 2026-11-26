class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string,vector<pair<int,string>>> mp;
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
        
    }
    
    string get(string key, int timestamp) {
if(mp.find(key) == mp.end()) return "";
        const vector<pair<int,string>> &p =mp[key];
        int i=0;
        int j=p.size()-1;
        int mid=0;
         string ans = "";

        while(i <= j){
            int mid = i + (j-i)/2;

            if(p[mid].first == timestamp)
                return p[mid].second;

            else if(p[mid].first < timestamp){
                ans = p[mid].second;
                i = mid + 1;
            }

            else
                j = mid - 1;
        }

        return ans;
    }
};
