class Solution {
public:
    int count(vector<int>& nums, int k){
        int len=0;
        int total=0;
        for(int x:nums){
            if(x<=k)
                len++;
            else
                len=0;
            total+=len;
        }
        return total;
    }
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        return count(nums,right)-count(nums,left-1);
    }
};
