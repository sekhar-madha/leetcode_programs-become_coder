// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int f=0,l=n,m;
        bool p;
        while(f<=l)
        {
            m=(f+l)/2;
            bool s=isBadVersion(m);
            if(s)
            {
                
                p=isBadVersion(m-1);
                if (p==false)
                    return m;
                else
                    l=m-1;
            }
            else
            {
                f=m+1;
            }
        }
        return m;
    }
};