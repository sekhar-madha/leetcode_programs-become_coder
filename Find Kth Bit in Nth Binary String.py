class Solution {
public:
    char findKthBit(int n, int k) {
        if(n==1)
        {
            return '0';
        }
        int len=(1<<n)-1;
        int mid=(1+len)>>1;
        if(mid==k)
        {
            return '1';
        }
        else if(k<mid)
        {
            return findKthBit(n-1,k);
        }
        else{
            char s=findKthBit(n-1,mid-(k-mid));
            if(s=='0')return '1';
            return '0';
        }
        
    }
};
