#include <stdio.h>

enum Menu {ADD=1, SUB, MUL};

int main() {
    int a,b,choice;

    printf("1.Add 2.Subtract 3.Multiply\n");
    scanf("%d",&choice);

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    if(choice==ADD) printf("Result = %d\n", a+b);
    else if(choice==SUB) printf("Result = %d\n", a-b);
    else if(choice==MUL) printf("Result = %d\n", a*b);
    else printf("Invalid\n");

    return 0;
}

