class Solution {
public:
    int xorOperation(int n, int start) {
        int xorResult=start;
        for(int i=1;i<n;i++){
            int tmp=start+2*i;
            xorResult=xorResult^tmp;
        }
        return xorResult;
    }
};