int main() {
    int a,b,c;
    printf("RA2211042010012\n");
    printf("Enter 2 Numbers one by one: ");
    scanf("%d%d",&a,&b);
    printf("Enter 1 for Addition\nEnter 2 for Subtraction\nEnter 3 for Multiplication\nEnter 4 for Division\nEnter your choice ==>");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("Addition of %d and %d is %d.",a,b,a+b);
        break;
        case 2:
        break;
        printf("Subtraction of %d and %d is %d.",a,b,a-b);
        break;
        case 3:
        printf("Multiplication of %d and %d is %d.",a,b,a*b);
        break;
        case 4:
        printf("Division of %d and %d is %d.",a,b,a/b);
    }
}
