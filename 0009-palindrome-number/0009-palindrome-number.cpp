class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        vector<int> q;
        while(x>0){
            q.push_back(x%10);
            x = x/10;
        }
        
        int left = 0;
        int right = q.size()-1;
        while (left < right){
            if (q[left++] != q[right--]){
                return false;
            }
        }
        return true;


    }
};