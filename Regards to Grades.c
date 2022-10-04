{
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("Awsm! Can you do that again\n");
            break;
        case 'B':
            printf("Almost there buddy\n");
            break;
        case 'C':
            printf("AVG is not AVG. Get to work\n");
            break;
        case 'D':
            printf("Just Passed. Work Hard\n");
            break;
        case 'F':
            printf("Did you even Listen in class\n");
            break;
        default:
            printf("Invalid grade \n");
    }
    return 0;
}
