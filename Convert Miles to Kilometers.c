int main()
{
  float miles , kilometers;
  printf("RA2211042010012\n");
  printf("enter distance in miles=");
  scanf("%f" ,&miles);
  kilometers = miles * 1.609;
  printf("%.2f Miles are equal to %.2f kilometer" , miles ,kilometers);
        return 0;
}
