#include <stdio.h>
int main()
{
    int a = 1, b = 1, c = 2, result;
    printf("RA2211042010012\n");
    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);
    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);
    return 0;
}
