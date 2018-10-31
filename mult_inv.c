#include<stdio.h>
void main() {
int q, r1, r2, r, t1 = 0, t2 = 1, t, a, x;
printf("Enter the domain of Zn: ");
scanf("%d", &r1);
a = r1;
printf("Enter the number: ");
scanf("%d", &r2);
r = r1%r2;
while (r != 0) {
q = r1/r2;
t = t1 - t2*q;
t1 = t2;
t2 = t;
r1 = r2;
r2 = r;
r = r1%r2;
}
x = t2 + a;
printf("The multiplicative inverse is: %d\n", x);
}
