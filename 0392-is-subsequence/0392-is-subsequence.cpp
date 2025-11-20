class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s == ""){
            return true;
        }
        int x = 0;
        for (int i=0; i<t.size(); i++){
            if (x == s.size()){
                return true;
            }
            if (t[i] == s[x]){
                x++;
            }
        }
        if (x == (s.size())){
            return true;
        }else{
            return false;
        }
    }
};