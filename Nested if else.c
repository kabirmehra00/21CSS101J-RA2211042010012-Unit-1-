int main()
{
    char username;
    int password;
    printf("RA2211042010012\n");
    printf("Enter your username:");
    scanf("%c",&username);
    printf("Enter your Password:");
    scanf("%d",&password);
    if(username=='a')
    {
        if(password==1234)
        {
            printf("---login successful---");
        }
        else
        {
            printf("xxx wrong password error xxx");
        }
    }
    else
    {
        printf("Username is wrong");
    }
}
