int reverse(int x){
    bool flag = false;
    int now = 0;
    if (x == INT_MIN) return 0;
    if (x<0){
        flag = true;
        now = -x;
    }else now = x;
    int ans = 0;
    while (now > 0){
        if (ans > INT_MAX/10) return 0;
        ans = ans * 10 + (now % 10);
        now = now / 10;
    }
    if (flag) return -ans;
    else return ans;

}