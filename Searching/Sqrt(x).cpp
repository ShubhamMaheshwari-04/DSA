class Solution {
public:
    int mySqrt(int x) {
        if(x < 2){
            return x;
        }    
        int l=1;
        int r=x/2;
        int m=0;

        while(l<=r){

            int m=(l+r)/2;
            if(m>x/m){
                r=m-1;
            } 
            else if(m<x/m){
                l=m+1;
            } 
            
            else{
                return m;  // If the square of the middle value is equal to x, we found the square root.
            }            
        }
        return r;
    }
};
