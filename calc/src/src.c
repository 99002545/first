


//function start
double cal(double val1, double val2, char ope)
{
 if(ope == '+')
 {
 printf("Addition of two numbers is %lf ", val1 + val2);
 }
 else if(ope == '-')
 {
 printf("Subtraction of two numbers is %lf ", val1 - val2);
 }
 else if(ope == '*')
 {
 printf("Multiplication of two numbers is %lf ", val1 * val2); 
 }
 else if(ope == '/')
 {
 printf("Division of two numbers is %lf ", val1 / val2);
 }
 else
 {
 printf("Invalid operator");
 }
} //function end
