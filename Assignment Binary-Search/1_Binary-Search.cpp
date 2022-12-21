class Solution {
public:
    int search(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++) if(nums[i] == target) return i;
        // return -1;
        
        int s = 0;
        int e = nums.size();
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid]==target)  return mid;
            else if(nums[mid]>target) e = mid-1;
            else s = mid+1;
        }
    return -1;
    }
};
