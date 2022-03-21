//https://leetcode.com/problems/koko-eating-bananas/submissions/
class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
        long long int mx=p[0],mi=1;
        long long int mid;
        for(int i=0;i<p.size();i++) {
            if(p[i]>mx) mx=p[i];
        };
        while(mi<=mx){
            int c=0;
            mid=(mi+mx)/2;
            for(int i=0;i<p.size();i++){
                if(p[i]%mid)c++;
                c+=(p[i]/mid);
            }
            if(c==h) mx=mid-1;
            else if(c>h) mi=mid+1;
            else mx=mid-1;
        }
        return mi;
    }
};
