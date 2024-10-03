#include <math.h>

class Solution {
public:
    int mySqrt(int x) {
        double x0=x/2.0,next;
        while(true){
            next=(x0+x/x0)/2.0;
            if(abs(next-x0)<0.0000001){
                return next;
            }
            x0=next;
        }
    }
};