#include<stdio.h>
#include<math.h>

   int main(){

   int N=12, i;
   float a=0.0, b_deg=60.0;
   float b_rad;

   /* b_rad value can be obtained from the command M_PI that is included in the math library */

   b_rad=(M_PI * b_deg)/180.0;
   printf("pi/3 in Radians=%f\n", b_rad);

   /* Area value calculation starting from the value of of the function at x0 up to xN */

   float area=tan(a)+tan(b_rad);
   printf("Initial sum=%f\n", area);

   /* There are 11 points between 0 and 60.*/
   for(i=5; i<=60; i=i+5){
     area=area+2*tan((M_PI*i)/180.0);
     printf("New area at %d =%f\n", i/5, area);
}

   /* Multiply with b-a/2 and converting it to radians */
   float mult_rad=M_PI*((b_deg-a)/(2*N))/180.0;
   area=mult_rad*area;

   /* Approximated value */
    printf("\nTrapezodial result=%f\n", area);

   /* Actual result, log(2) */
    printf("Actual result=%f\n", log(2.0));

return 0;
}