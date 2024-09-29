class Solution {
public:
    int numberOfSteps(int num) {
        int ans=countsteps(num,0);
        return ans;

        
    }
    public:
    int countsteps(int num,int count){
        if(num==0){
            return count;
        }
        else if(num%2==0){
            count++;
            return countsteps(num/2,count);

        }
        else{
            count++;
            return countsteps(num-1,count);
        }
    }
};
