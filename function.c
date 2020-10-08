#include<function.h>
void power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);
 
    printf("power : ");
    scanf("%lf",&num);
 
    p=pow(a,num);
 
    printf("\n%lf to the power %lf = %lf \n",a,num,p);
}
 
void exponential()
{
   
    double value;
    double result;
    printf("\nEnter two number to find the exponential \n");
    printf("number: ");
    scanf("%lf",&value);

    /* Assign the value we will find the exp of */
   

    /* Calculate the exponential of the value */
    result = exp(value);

    /* Display the result of the calculation */
    printf("The Exponential of %f is %f\n", value, result);

    return 0;
}
