/* 
 * File:   main.cpp
 * Author: mbrooks
 *
 * Created on September 15, 2014, 9:41 PM
 */

#include <stdio.h>

/****************************************************************
Function: Calc_Simple_Interest
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
 

int main (void) 
{ 
 float interest; /* The interest earned over a period of time */
 float principle; /* The amount being invested */ 
 float rate;  /* The interest rate earned */ 
 float time; /* The years of the investment */ 
 
 /* Initialize the interest value */ 
 interest = 0;

 /* Enter values needed to determine interest */ 
 printf ("\nEnter your principle value: "); 
 scanf ("%f", &principle); 
 
 printf ("\nEnter the rate: For example 9.5 percent would be .095: "); 
 scanf ("%f", &rate); 
 
 printf ("\nEnter the period of time of your investment: :"); 
 scanf ("%f", &time); 
 
 interest = Calc_Simple_Interest (principle, rate, time); 

 /* print the simple interest earned to the screen */ 
 printf("\n\nThe total simple interest earned is: $%8.2f\n", interest); 
 
 /* Call the Calc_Compound_Interest function and print that interest */
 /* here if you decide to do the optional challenge ... its called just like  */
 /* Calc_Simple_Interest function and printed the same way.                */
 
 return (0); /* indicate successful completion */


} /* end main */ 
