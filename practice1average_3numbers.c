#include <stdio.h>
double average ( int a, int b, int c);
int main(){
    int a, b, c;
    printf("Enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of b\n");
    scanf("%d",&b);
    printf("Enter value of c\n");
    scanf("%d",&c);
    
    printf("Average is %f\n", average(a, b, c));
    return 0;
}
double average ( int a, int b, int c){
    double result=(float)(a+b+c)/3;
    
    return result;
}
