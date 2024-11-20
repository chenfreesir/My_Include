double myPow(double num, int n)
{
    double result = 1.0, num = 0;
    unsigned int n1 = 0;
    //check power
    if (n < 0)
    {
        num = 1 / x;
        n1 = -(unsigned int)n;
    }
    else
    {
        num = x;
        n1 = (unsigned int)n;
    }
    //Extract the current bit
    //If the current bit equal 1, perform multiplication to the result
    while (1)
    {
        if (n1 & 0x01)
            result *= num;
        num *= num;
        n1 >>= 1;
        if (n1 == 0)
            return result;
    }
}