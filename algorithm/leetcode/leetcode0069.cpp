class Solution {
public:
    int mySqrt(int x) {
        int left=0;
        int right=x;
        while(left<=right){
            int middle =left+(right-left)/2;

            double p=1.0*middle*middle;
            if(p==x)
            return middle;
            if(p<x){
            left=middle+1;
            }else{
                right=middle-1;
            }
        }
        return right;
    }
};