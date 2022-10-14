#include <stdio.h>
int main()
{
    printf("RA2211042010012\n");
    int a = 2, b = 2, c = 3, result;
    result = !(a != b);
    printf("!(a != b) is %d \n", result);
    result = !(a == b);
    printf("!(a == b) is %d \n", result);

    return 0;
}
