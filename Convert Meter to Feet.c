int main()
{
  int meters;
  float feet;
  printf("RA2211042010012\n");
  printf("enter the value for meters = ");
  scanf("%d" , &meters);
  feet = meters * 3.28084; 
  printf("%d meters are equal to %.2f feet" , meters , feet);
  return 0;
}
