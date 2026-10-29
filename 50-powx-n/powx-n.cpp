class Solution {
public:

    long double power(long double x, long long n) {
        if (n == 0)
            return 1.0L;

        long double result = power(x, n / 2);

        if (n % 2 == 0)
            return result * result;

        return x * result * result;
    }

    double myPow(double x, int n) {

        long long N = n;

        long double X = x;

        if (N < 0) {
            X = 1.0L / X;
            N = -N;
        }

        return (double)power(X, N);
    }
};