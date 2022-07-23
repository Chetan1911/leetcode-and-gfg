class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        string s="";
        while(x){
            s = s+ to_string(x%10);
            x = x/10;
        }
        const int n=s.size();
        for(int i=0,j=n-1;i<j;i++,j--){
            if(s[i]!=s[j])return false;
        }
        return true;
    }
};