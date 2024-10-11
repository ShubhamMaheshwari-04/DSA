class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(0,s);
    }

    void reverse(int i,vector<char>&s){
        if(i>=s.size()/2){
            return;
        }
        swap(s[i],s[s.size()-i-1]);
        reverse(i+1,s);

    }
};
