#include <stdio.h>
int hcf(int, int);
int main()
{
    int a[100], b[100], result[100], i=0;
    int howMuch;
    char temp,endInput;
    scanf("%d", &howMuch);
    for (i = 0; i < howMuch; i++)
    {
        do{
            scanf("%d%c%d%c", &a[i], &temp, &b[i], &endInput);
            result[i] = hcf(a[i], b[i]);
        }while(endInput != '\n');
    }
    
    for (i = 0; i < howMuch; i++)
    {
        printf("%d\n", result[i]);
    }
    return 0;
}
 
int hcf(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}