/*
 * File:   main.cpp
 * Author: mbrooks
 *
 * Created on September 21, 2014, 4:02 PM
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;
float Calc_Simple_Interest (float, float, float);

/*
 *
 */
int main(int argc, char** argv) {

    float c;

    c = Calc_Simple_Interest(2,2,2);

    printf("%5.2d\n", c);

    return 0;
}

float Calc_Simple_Interest (float principle, float rate, float time)
{
 /* You will only need to create three simple statements here ... */
 /* No other statements are needed. */

    float interest;  /* calculated interest */

    interest = principle * rate * time;

    printf("interest = %f\n",interest);

    return(interest);

} /* end Calc_Simple_Interest */
