int main()
{
    int months,days;
    printf("Enter Days:");
    scanf("%d",&days);
    months = days / 30;
    days = days % 30;
    printf("Months = %d\nDays = %d",months,days);
}
