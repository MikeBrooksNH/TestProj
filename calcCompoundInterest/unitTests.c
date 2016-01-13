#include<stdio.h>
#include<math.h>
#include "minunit.h"


 int tests_run = 0;
  
float calcSimpleInterest(float, float, float);
float calcCompoundInterest(float, float, float);
 
 static char * test_simpleInterest() {
     mu_assert("[FAILED] Interest not 0!\n", calcSimpleInterest(1,1,1) == 1);
     return 0;
 }
 
 static char * test_compoundInterest() {
     mu_assert("[FAILED] Interest not 0!\n", calcCompoundInterest(1,1,1) == 1);
     return 0;
 }
 
 
 static char * all_tests() {
     mu_run_test(test_simpleInterest);
     mu_run_test(test_compoundInterest);
     return 0;
 }
 
 int main(int argc, char **argv) {
     char *result = all_tests();
     if (result != 0) {
         printf("%s\n", result);
     }
     else {
         printf("ALL TESTS PASSED\n");
     }
     printf("Tests run: %d\n", tests_run);
 
     return result != 0;
 }


float calcSimpleInterest (float principle, float rate, float time) 
{ 
/****************************************************************

Function: calcSimpleInterest

Description: Simple Interest is the amount of interest calculated by 
using the formula: I = Prt where P is the principle, r is the rate, 
and t is the time of the investment 

This function will return the simple interest calculated based it being passed 
the principle, rate, and time.

Parameters: 

 Principle - The original principal to start with

 Rate - The rate of interest. Example: Use .095 for 9.5 Percent
 Time - The time in years
  
Returns: Interest - The amount of simple interest earned 

*************************************************************/

    
    
    
 /* You will only need to create three simple statements here ... */ 
 /* No other statements are needed. */  
 
 /* 1) TO DO:  Step 1) Define a local variable of type float to hold the interest */ 
    float interest = 0.0;  /* varianble to hold the calculated interest */
    
 /* 2) TO DO: Step 2) Calculate simple interest earned - Determine the interest using */ 
     interest = principle * rate * time;

  /* 3) TO DO: Step 3) Add a return statement to return the interest calculated to main */ 
     return (interest);
} /* end Calc_Simple_Interest */ 



float calcCompoundInterest (float principle, float rate, float time)

/**********************************************************************/
/*                                                                    */
/* Function:  Calc_Compound_Interest                                  */
/*                                                                    */
/* Description:  Compound Interest is the amount of interest          */
/*               calculated by using the formula:                     */
/*                                                                    */
/*               interest = (P * pow (1.0 + r, t)) - P                */
/*                                                                    */
/*               where P is the principle, r is the rate, and t       */
/*               is the time of the investment                        */
/*                                                                    */
/*               This function will return the compound interest      */
/*               calculated based it being passed the principle,      */
/*               rate, and time.                                      */
/*                                                                    */
/* Parameters:   Principle - The original principal to start with     */
/*               Rate      - The rate of interest.  If you wanted     */
/*                           9.5 percent it would be passed as  0.095 */
/*               Time      - The time in years                        */
/*                                                                    */
/* Returns:      Interest  - The amount of compound interest earned   */
/*                                                                    */
/**********************************************************************/

{
       /* 1) define a local variable of type float to hold the interest */
       float interest;

       /* 2) TO DO:  calculate compound interest earned ... */
       /* Set interest variable to the right formula value, see above */
       /* interest = (P * pow (1.0 + r, t)) - P */

       interest = (principle * (pow (1.0 + rate, time))) - principle;     
       /* 3) return the interest calculated back to the calling function */
       return (interest);

} /* end Calc_Compound_Interest */

