class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        int temp=nums[0]*nums[0],ind=0;
        while(i<=j)
        {
            
            nums[i]=nums[i]*nums[i];
            if(nums[i]<temp)
            {
                temp=nums[i];
                ind=i;
            }
            if(i!=j)
            {
                nums[j]=nums[j]*nums[j];    
            }
            i+=1;
            j-=1;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};