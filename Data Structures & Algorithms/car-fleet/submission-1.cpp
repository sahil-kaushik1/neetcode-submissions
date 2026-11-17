class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>>v;
        for(int i =0;i<speed.size();i++){
            v.push_back({position[i], double(target-position[i])/speed[i]});
        }
        sort(v.begin(),v.end(),greater<pair<int,double>>());
        int fleet=speed.size();
        int a=0;
        for(int i=1;i<speed.size();i++){
            if(v[a].second>=v[i].second){
                fleet--;
            }
            else a=i;
            
        }
        return fleet;
    }
};
