#include<stdio.h>

char e[20];

void encrypt(char a[], int d) {
int i = 0;
while (a[i] != '\0') {
	if (a[i] >= 'A' && a[i] <= 'Z') {
		e[i] = (((a[i] - 'A')*d) % 26) + 'A';
	}
	else if (a[i] >= 'a' && a[i] <= 'z') { 
		e[i] = (((a[i] - 'a')*d) % 26) + 'a';
	}
	else
		e[i] = a[i];
	i++;
}
printf("Encrypted text = %s\n", e);
}

void decrypt(char a[], int d) {
int i = 0;
while (a[i] != '\0') {
	if (a[i] >= 'A' && a[i] <= 'Z') {
		e[i] = (((a[i] - 'A')*d) % 26) + 'A';
	}
	else if (a[i] >= 'a' && a[i] <= 'z') {
		e[i] = (((a[i] - 'a')*d) % 26) + 'a';
	}
	i++;
}
printf("Decrypted text = %s\n", e);
}

int main() {
char a[20];
int q, r1, r2, d, r, t1 = 0, t2 = 1, t, x, y;
printf("Enter the plaintext: ");
scanf("%s", a);
printf("Enter the key: ");
scanf("%d", &r2);
d = r2;
printf("Enter the domain of Zn: ");
scanf("%d", &r1);
y = r1;
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
if (r2 != 1) 
{
printf("Multiplicative inverse of the key doesn't exist in the domain.\n");
return 0;
}
x = t2 + y;
encrypt(a, d);
decrypt(e, x);
return 0;
}
