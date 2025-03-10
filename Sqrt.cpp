class Solution {
    public:
        int mySqrt(int x) {
            int i=0;
            int j=x;
            while(i<=j){
                long unsigned int mid=(i+j)/2;
                long unsigned int sqr=mid*mid;
    
                if(sqr>x){
                   j=mid-1;
                }
                else if(sqr<x){
                    i=mid+1;
                }
                else {
                    return mid;
                }
    
            }
            return i-1;
        }
    };