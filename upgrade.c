#import <stdio.h>

void func3 (){
    printf("func3 start\n");
    printf("func3 end\n");
}
void func2 (){
    printf ("func2 start\n");
    func3 () ;
        printf ("func2 end\n");

}
void func1 (){
    printf ("func1 start\n");
    func2 ();
        printf("func1 end\n");
        
}

int main () {
func1 ();
return 0;
}
