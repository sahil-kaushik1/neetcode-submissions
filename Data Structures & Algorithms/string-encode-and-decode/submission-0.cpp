class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(int i =0;i<strs.size();i++){
            s=s+to_string(strs[i].size())+"#"+strs[i];
        }
        return s;

    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;int j=0;
        while(i!=s.size()){
            if(s[i]=='#'){
                int num = stoi(s.substr(j,i-j));
                res.push_back(s.substr(i+1,num));
                i+=num;
                j=i+1;
            }
            i++;
        }
        return res;
    }
};
