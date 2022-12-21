class Solution {
public:
    int mySqrt(int x) {
        long long int high = x,low = 1,mid;
        while(low<=high){
            mid = (low+high)/2;
            long long int t = mid*mid;
            if(t==x) return mid;
            else if(t>x) high = mid-1;
            else low = mid+1;
        }
        if(high*high < x) return high;
        else return low;
    }
};
