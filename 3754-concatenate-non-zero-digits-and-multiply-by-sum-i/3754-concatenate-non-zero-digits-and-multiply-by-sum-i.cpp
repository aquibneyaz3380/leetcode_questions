class Solution {
public:
    long long sumAndMultiply(int n) {
        long long num=0;
        long long  sum=0;
        while (n>0)
        {
            long long rem=n%10;
            if (rem!=0)
            {
            num=num*10+rem;
            sum=sum+rem;
            }
            n=n/10;
        }
        long long  rev=0;
        while (num>0)
        {
            long long  rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        return sum*rev;
    }
};