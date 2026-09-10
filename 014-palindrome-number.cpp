class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string s1 = s;
        reverse(s1.begin(), s1.end());
        if(s1 == s){
            int ans = stoi(s);
            return true;
        }
        return false;
    }
};
