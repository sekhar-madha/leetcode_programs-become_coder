//https://leetcode.com/problems/arithmetic-slices/
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<=2) return 0;
        int d=nums[0]-nums[1], cnt=1,ans=0,t=0;
        for(int i=1;i<nums.size()-1;i++){
            if(d==nums[i]-nums[i+1]) cnt++;
            else{
                cnt=1;
                d=nums[i]-nums[i+1];
                t=0;
            }
            if(cnt>=2){
                t++;
                ans+=t;
            } 
        }
        return ans;
        
    }
};
