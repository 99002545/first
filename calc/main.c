
//@mainpage Calculator Application by Bharath G
//@subpage calculator_operations.h

void main()
{
 double val1 , val2;
 char ope;

 printf("Enter First Number ");
 scanf("%lf", &val1);

 printf("Enter Second Number ");
 scanf("%lf", &val2);

 printf("Enter '+' for Add\n '-' for Sub\n '*' for Mul\n '/' for Div\n");
 scanf(" %c", &ope);

 cal(val1,val2,ope); //calling function

} //main end
