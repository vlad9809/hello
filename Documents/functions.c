#include <stdio.h>

void multiply (int p, int o);
void square (int i);
void greet ();
     
int main () {
    multiply (23,432);
    square (232);
    greet (); 
    return 0;
}
void greet (){
    printf ("Greetings");
}
      
void square (int i) {
    printf ("\nThe square of is %d", (i * i));
}
void multiply (int p, int o){
    int result2;
    result2 = p * o;
    printf("result of multiply is %d\n",(result2));

}