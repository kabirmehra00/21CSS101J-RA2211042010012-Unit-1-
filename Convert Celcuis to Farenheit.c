float main() {
    float farenheit,celcius;
    printf("enter the temprature in celcius:");
    scanf("%f",&celcius);
    farenheit=((9.0/5.0*celcius)+32.0);
    printf("temprature is:%f",farenheit);
    return 0;
}
