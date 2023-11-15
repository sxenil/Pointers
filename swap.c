#include <stdio.h>
void swap (int* x, int* y){

    int temp= *x;
    *x = *y;
    *y = temp;
    return;
    
}
int main (){

    int a,b;

    printf ("Enter value of a: ");
    scanf ("%d", &a);

    printf ("Enter value of b: ");
    scanf ("%d", &b);

    swap (&a, &b);

    printf ("Value of 'a' after swaping: %d\n", a);
    printf ("Value of 'b' after swaping: %d", b);

    return 0;

}