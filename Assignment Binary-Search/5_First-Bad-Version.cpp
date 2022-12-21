class Solution {
public:
    int firstBadVersion(int n) {
        long long int high = n, low = 1,mid;
        
        while(high > low){
            mid = (high + low) / 2;
            if (isBadVersion(mid)) high = mid; 
            else low = mid + 1;
        }
        return low;
    }
};
