#include <stdio.h>
int main(int argc, char *argv[])
{
    int k;
    int zznum;
    int sumnum;
    int myint;
    float mynum;
    long int mylongint;
    double mydouble, mysumdb;
    char mychar;
    myint = 44;
    mynum = 23.5;
    mydouble = 345.54;
    mysumdb = 34.5 + mydouble;
    mychar = 'p';
    sumnum = k + zznum;
    zznum = 5;
    k = 24;
    printf ("Hello world\n");
    
    printf ("Value of k is %d\n", k);
    
    printf ("value of zznum equals %d\n", zznum);
    printf ("value of k and zznum are: %d and %d\n", k, zznum);
    
    printf ("total value is %d\n", sumnum);
    
    printf ("mychar is %c\n", mychar);
    printf ("mychar is %d\n", mychar);
    printf ("my int and mychar are: %d and %c\n", myint, mychar);
    printf ("myfloat num is %f\n", mynum);
    
    printf ("size of int is %zu\n", sizeof(int));
    printf ("size of int is %zu\n", sizeof(myint));

    printf ("size of char is %zu\n", sizeof(char));
    printf ("size of mychar is %zu\n", sizeof(mychar));

    printf ("size of float is %zu\n", sizeof(float));
    printf ("size of myfloat is %zu\n", sizeof(mynum));

    printf ("size of long int is %zu\n", sizeof(long int));
    printf ("size of long int is %zu\n", sizeof(long int));

    printf ("size of double is %zu\n", sizeof(double));
    printf ("size of mydouble is %zu\n", sizeof(mydouble));
    printf (" mysumdb is %f\n", mysumdb);
    int modResult = 47 % 7;
    printf("modresult = %d\n", modResult);

    int q = 10;
    int w = 20;
    int result1 = (w > q);
    printf("w > q? %d\n", (result1));
    int age = 18;
    int citizen = 1;
    if(age >=18 && citizen ==1){
        printf("you are eligible to vote");
    } else {
        printf ("you are not eligible to vote");
    }
    int grade = 41;
    char lettergrade;
     if (grade >=90) {
         lettergrade = 'a';
     } else if (grade >=80) {
         lettergrade = 'b';
     } else if (grade >=70) {
         lettergrade = 'c';
     } else {
         lettergrade = 'd' ;
         }    
     printf ("Letter Grade: %c\n", lettergrade);    

    

    return 0;
} 