
#include <stdio.h>


void greet();
void multiply (int p, int o);
void square (int i);

     
int main () {
    greet ();
    multiply (23,432);
    square (232);
    return 0;
}
      
void square (int i) {
    printf ("\nThe square of is %d", (i * i));
    }
void multiply (int p, int o){
    int result2;
    result2 = p * o;
    printf("result of multiply is %d\n",(result2));

    }