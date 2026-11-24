class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n =piles.size();
        int g=0;
        for(int i=0;i<n;i++){
            if(g<piles[i])g=piles[i];
        }
        int i=1;
        int j=g;
        int mid=0;
        while(i<j){
             mid=(i+j)/2;
            long long  t=0;
            for(int p=0;p<n;p++){
                t+=ceil((double)piles[p]/mid);
                if(t>h)break;
            }
            if(t>h)i=mid+1;
            else j=mid;
        }
        return i;
        
    }
};
