#define BASIC_SALARY 3000.00
#define BONUS_RATE 200.00
#define COMMISSION 0.05
main(){
   printf("RA2211042010012\n");
   int quantity ;
   float gross_salary, price ;
   float bonus, commission ;
   printf("number of items sold and their price\n") ;
   scanf("%d %f", &quantity, &price) ;
   bonus = BONUS_RATE * quantity ;
   commission = COMMISSION * quantity * price ;
   gross_salary = BASIC_SALARY + bonus + commission ;
   printf("\n");
   printf("Bonus = %6.2f\n", bonus) ;
   printf("Commission = %6.2f\n", commission) ;
   printf("Gross salary = %6.2f\n", gross_salary) ;
}
