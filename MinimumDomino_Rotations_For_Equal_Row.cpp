//https://leetcode.com/problems/minimum-domino-rotations-for-equal-row/
class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t=0,b=0;
        int i=1,f=1;
        for(i=0;i<tops.size() and f;i++){
            if(tops[i]==tops[0] and bottoms[i]==tops[0]) continue;
            else if(tops[i]==tops[0]) b+=1;
            else if(bottoms[i]==tops[0]) t+=1;
            else f=0;
        }
        if(f) return min(b,t);
        cout<<b<<" "<<t;
        if(i==tops.size()) return min(t,b);
        t=0,b=0,i=1,f=1;
        for(i=0;i<tops.size() and f;i++){
            if(tops[i]==bottoms[0] and bottoms[i]==bottoms[0]) continue;
            else if(bottoms[i]==bottoms[0]) t+=1;
            else if(tops[i]==bottoms[0]) b+=1;
            else f=0;
        }
        if(f) return min(t,b);
        return -1;
    }
};
