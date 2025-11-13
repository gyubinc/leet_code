class Solution {
public:
    vector<string> sum_vec(const vector<string>& a, const vector<string>& b){
        vector<string> ans;
        for (int i=0; i<a.size(); i++){
            for (int j=0; j<b.size(); j++){
                ans.push_back(string() + a[i] + b[j]);
            }
        }
        return ans;
    }

    vector<string> letterCombinations(string digits) {
        // '2' : "abc" 이렇게 놓고 계산하면 될듯
        // digits의 길이에 따라 전부 분기해야되나?
        // 2개의 vector<string> 합쳐서 통일하기
        map<char, vector<string>> changer = {{'2', {"a", "b", "c"}}, {'3', {"d", "e", "f"}}, {'4', {"g", "h", "i"}}, {'5', {"j", "k", "l"}}, {'6', {"m", "n", "o"}}, {'7', {"p", "q", "r", "s"}}, {'8', {"t", "u", "v"}}, {'9', {"w", "x", "y", "z"}}};

        if (digits.size() == 1){
            return changer[digits[0]];
        }else if (digits.size() == 2){
            return sum_vec(changer[digits[0]], changer[digits[1]]);
        }else if (digits.size() == 3){
            return sum_vec(sum_vec(changer[digits[0]], changer[digits[1]]), changer[digits[2]]);
        }else{
            return sum_vec(sum_vec(changer[digits[0]], changer[digits[1]]), sum_vec(changer[digits[2]], changer[digits[3]]));
        }

    }
};