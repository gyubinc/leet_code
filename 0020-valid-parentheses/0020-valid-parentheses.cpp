class Solution {
public:
    bool isValid(string s) {
        stack<char> q;
        int now = 0;
        map<char, char> x = {{'(', ')'}, {'{', '}'}, {'[',']'}};
        while (s[now] != '\0'){
            if (s[now] == '(' || s[now] == '{' || s[now] == '['){
                q.push(s[now++]);
            }else{
                if (!q.empty() && s[now] == x[q.top()] ){
                    q.pop();
                    now++;
                }else return false;
            }
        }

        if (!q.empty()){
            return false;
        }else return true;
    }
};