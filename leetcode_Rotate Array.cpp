class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l=nums.size();
        k=k%l;
        int num;
        if(k!=0)
        {
            vector<int>ve;
            ve={nums.begin()+(l-k),nums.end()};
            ve.insert(ve.end(),nums.begin(),nums.end()-k);
            nums=ve;
        }
    }
};