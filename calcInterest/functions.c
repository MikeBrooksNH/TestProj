
#include<stdio.h>

float Calc_Simple_Interest (float principle, float rate, float time) 
{ 
 /* You will only need to create three simple statements here ... */ 
 /* No other statements are needed. */  
    
    float interest;  /* calculated interest */
    
    interest = principle * rate * time;
    
    printf("interest = %f\n",interest);

    return(interest);
 
} /* end Calc_Simple_Interest */ 
