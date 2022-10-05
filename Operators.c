int main()
{
    int a,b,c,d;
    a = 15;
    b = 10;
    c = ++a - b;
    printf("a = %d\n b = %d\n c = %d\n",a,b,c);
    d = b++ +a;
    printf("a = %d\n b = %d\n d = %d\n",a,b,d);
}
