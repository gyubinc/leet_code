class Solution {
public:
    void helper(vector<string> &ans, string now, int left, int right){
        if (left == 0 && right == 0){
            ans.push_back(now);
        }
        else{
            if (left == right){
                string n = now + "(";
                helper(ans, n, left-1, right);
            }else{
                string x = now + "(";
                string y = now + ")";
                if (left >= 1) helper(ans, x, left-1, right);
                if (right >= 1) helper(ans, y, left, right-1);
            }
        }
    }

    vector<string> generateParenthesis(int n) {
        // recursion이 아니라 dp로 풀어보자
        vector<string> ans;
        string start = "";
        helper(ans, start, n, n);

        return ans;

    }
};