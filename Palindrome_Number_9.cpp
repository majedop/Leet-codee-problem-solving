class Solution {
public:
    bool isPalindrome(int x) {
        long long temp, sum=0, dgt;
        bool ok = false;
        temp = x;
        while(x > 0)
        {
            dgt = x%10;
            sum = (sum*10)+dgt;
            x = x/10;
        }

        if(temp == sum)
        ok = true;
        else
        ok = false;
        return ok;
    }
};
