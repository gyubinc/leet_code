int myAtoi(char* s) {
    bool flag = false;
    int now = 0;
    while (s[now] == ' ') now++;
    if (s[now] == '-') {
        now++;
        flag = true;
    }
    else if (s[now] == '+') now++;
    int ans = 0;
    while (s[now] == '0') now++;
    while (s[now]>='0' && s[now] <= '9'){
        int digit = s[now] - '0';
        if (flag){
            if (ans > INT_MAX/10 || (ans == INT_MAX/10 && digit >= INT_MAX%10 + 1)) return INT_MIN;
        }else{
            if (ans > INT_MAX/10 || (ans == INT_MAX/10 && digit >= INT_MAX%10)) return INT_MAX;
        }


        ans = ans * 10 + digit;
        now++;
    }
    if (flag) return -ans;
    return ans;
}