int main()
{
    int months,days;
    printf("RA2211042010012\n");
    printf("Enter Days:");
    scanf("%d",&days);
    months = days / 30;
    days = days % 30;
    printf("Months = %d\nDays = %d",months,days);
}
