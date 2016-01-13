#include<stdio.h>
#include "minunit.h"


 int tests_run = 0;
 
 int foo = 7;
 int bar = 4;
 
 static char * test_simpleInterest() {
     mu_assert("[FAILED] Interest not 0!\n", Calc_Simple_Interest(100,10,10)== 0);
     return 0;
 }
 
 
 static char * all_tests() {
     mu_run_test(test_simpleInterest);
/*     mu_run_test(test_bar);  */
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
