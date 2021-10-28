class Solution {
public:
    int findMin(vector<int>& nums) {
        int m=nums[0];
        for(int i=0;i<size(nums);i++)
        {
            if (nums[i]<m)
                m=nums[i];
        }
        return m;
        
    }
};
