class Solution {
public:
    int reverse(int x) {
    int64_t res = 0;
    while(x != 0)
    {
        res =  res * 10 + x % 10;
        x /= 10;
    }
    return fabs(res) > INT_MAX ? 0 : res;

    }
};