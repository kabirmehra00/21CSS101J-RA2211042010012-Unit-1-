int main()
{
    char vowel;
    printf("Input a Character :  ");
    printf("RA2211042010012\n");
    scanf("%c", &vowel);

    switch(vowel)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("Yeah! %c is a vowel.\n\n", vowel);
            break;
        default:
            printf("NO! %c is not a vowel for sure.", vowel);
    }
    return 0;
}
