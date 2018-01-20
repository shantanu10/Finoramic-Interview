int Solution::pow(int x, int n, int m) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long d  = 1;
    if(x == 0)
    d = 0;
    long long X = x;
    while(n>0)
    {
        if(n&1)
        {
            d = (d * X)%m;
            if(d<0)d+=m;
        }
        X = (X*X)%m;
        if(X<0)X+=m;
        n>>=1;
    }
    return d;
}
