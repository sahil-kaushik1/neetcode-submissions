class Solution {
public:
    bool isPalindrome(string s) {
      
        string k;
        for(int i =0;i<s.size();i++){
            if(s[i]==' ')continue;
            else if (!((s[i]>=65 && s[i]<=90) ||
           (s[i]>=97 && s[i]<=122) ||
           (s[i]>=48 && s[i]<=57))) continue;
            else if(s[i]<97)k.push_back(char(s[i]+32));
            else k.push_back(s[i]);
        }  
        int i =0;
        int j=k.size()-1;
        while(i<j){     
            if(k[i]!=k[j])return false; 
            i++;j--; 
            }
            return true;
    }
    
};
