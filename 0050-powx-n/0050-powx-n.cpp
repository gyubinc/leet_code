class Solution {
public:
    double myPow(double x, int n) {
        double change = x;
        double now = x;
        if (n==0) return 1.0;
        if (x == 1.0) return 1.0;
        if (x == -1.0) {
            if (n%2 == 1) return -1.0;
            else return 1.0;
        }
        

        if (n<0){
            now = 1/now;
            change = 1/change;
            if (n != INT_MIN) n = -n;
            else return 0.0;
        }

        for (int i=1; i<n; i++){
            now = now * change;
        }
        return now;
    }
};