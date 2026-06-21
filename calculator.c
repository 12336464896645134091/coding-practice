# include <stdio.h>
int main() {
int a, b, choice;
char cont;
do {
printf("Enter first number: ");
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);
printf("\nchoose operation:\n");
printf("1. Add\n2. subtract\n3.multiply\n4.Divide\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch(choice) {
case 1:
printf("sum = %d\n", a+b);
break;
case 2:
printf("Difference = %d\n", a-b);
break;
case 3:
printf("product = %d\n", a*b);
break;
case 4:
if(b != 0)
printf("Quotient = %dd\n", a /b);
else
printf("Error! division by zero.\n");
break;
default:
printf("invalid choice!\n");
}
printf("Do you want to continue?(y/n):");
scanf(" %c", &cont);
} while(cont == 'y'||cont == 'y');
return 0;
}