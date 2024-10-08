class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=1,h=num;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(num % mid==0 && mid==num/mid){
                return true;
            }
            else if(mid<num/mid){
                l=mid+1;
            }
            else{
                h=mid-1;
            }        
        }
        return false;
    }
};
