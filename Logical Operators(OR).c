#include <stdio.h>
int main()
{
    printf("RA2211042010012\n");
    int a = 5, b = 5, c = 10, result;
    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);
    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);
    return 0;
}
