class Solution {
public:
    string convert(string s, int numRows) {
        if (s.size() == 1 || s.size() == 2 || numRows == 1) return s;
        vector<string> ans_vec(s.size(), "");
        int flag = 0;
        int arrow = 0;
        for (int i=0; i<s.size(); i++){
            // 내려가자
            if (flag == 0) arrow = 0;
            // 올라가자
            if (flag == numRows-1) arrow = 1;
            
            if (arrow == 0)ans_vec[flag++]+=s[i];
            else ans_vec[flag--]+=s[i];
        }

        string ans = "";
        for (int i=0; i<ans_vec.size(); i++){
            if (ans_vec[i] != "") ans+=ans_vec[i];
        }

        return ans;

    }
};