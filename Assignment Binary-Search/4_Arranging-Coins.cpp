class Solution {
public:
    int arrangeCoins(int n) {
        long int high = n,low = 1,mid;
        while(low<=high){
            mid = (low+high)/2;
            long int sn = ((mid/2)*(2+(mid-1)));
            if(sn == n) return mid;
            else if(sn > n) high = mid-1;
            else low = mid+1;
        }
        if(high < n) return high;
        else return low;
    }
};
