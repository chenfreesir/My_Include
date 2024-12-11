int myStrlen(const char* str)
{
    const char* temp = str;
    while (*(temp) != '\0')
        temp++;
    return temp - str;
}

//realize by KMP
int myStrstr(const char* sour, const char* dest)
{
    int i = 1, n = 0, len_need = myStrlen(dest), len_hay = myStrlen(sour);
    int* pi = NULL;
    do
        pi = (int*)malloc(sizeof(int) * len_need);
    while (pi == NULL);
    //calculate dest's perfix function
    pi[0] = 0;
    for (; i < len_need; i++)
    {
        pi[i] = 0;
        while (n && dest[i] != dest[n])
            n = pi[n - 1];
        if (dest[i] == dest[n])
        {
            n++;
            pi[i] = n;
        }
    }
    //using perfix function compare str-sour
    for (i = 0, n = 0; i < len_hay; i++)
    {
        while (n && sour[i] != dest[n])
            n = pi[n - 1];
        if (sour[i] == dest[n])
        {
            n += 1;
            if (n == len_need)
            {
                free(pi);
                return i - n + 1;
            }
        }
    }
    free(pi);
    return -1;
}