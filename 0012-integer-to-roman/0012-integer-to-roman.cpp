class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        int a = (num/1000);
        int b = (num/100) % 10;
        int c = (num/10)%10;
        int d = num%10;

        ans += string(a, 'M');

        if (b == 4) ans += "CD";
        else if (b == 9) ans += "CM";
        else if (b<4) ans += string(b, 'C');
        else{
            ans += 'D';
            ans += string(b-5, 'C');
        }

        if (c == 4) ans += "XL";
        else if (c == 9) ans += "XC";
        else if (c<4) ans += string(c, 'X');
        else{
            ans += 'L';
            ans += string(c-5, 'X');
        }

        if (d == 4) ans += "IV";
        else if (d == 9) ans += "IX";
        else if (d<4) ans += string(d, 'I');
        else{
            ans += 'V';
            ans += string(d-5, 'I');
        }


        return ans;

    }
};