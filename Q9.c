#include <stdio.h>

int main() {
    int a = 100, b = 200, c = 300;

    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    int *temp1 = p1;
    int *temp2 = p2;
    int *temp3 = p3;

    p1 = temp2; // p1 now points to b
    p2 = temp3; // p2 now points to c
    p3 = temp1; // p3 now points to a

    *p1 += 50;     // b = 200 + 50 = 250
    *p2 -= 100;    // c = 300 - 100 = 200
    *p3 *= 2;      // a = 100 * 2 = 200

   
    p1 = &c;       // p1 ? c
    p2 = &a;       // p2 ? a
    p3 = &b;       // p3 ? b

  
    *p1 += *p2;    
    *p2 -= 50;   
    *p3 *= 2;     

    printf("Final values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b); 
    printf("c = %d\n", c); 

    return 0;
}

