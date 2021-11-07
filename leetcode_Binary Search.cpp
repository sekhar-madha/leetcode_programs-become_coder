/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int fst,mid,lst;
        fst=0;
        lst=nums.size()-1;
        while(lst-fst>1)
        {
            mid=(fst+lst)/2;
            if (nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                lst=mid;
            }
            else
            {
                fst=mid;
            }
        }
        if(nums[fst]==target)
            return fst;
        else if(nums[lst]==target)
            return lst;
        return -1;
    }
};
*/
class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while(l <= r){
            int mid = (l + r) / 2;
            if(nums[mid] == target)
                return mid;
            if(nums[mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return -1;
    }
};