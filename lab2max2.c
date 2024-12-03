#include<stdio.h>
int main() {
	int n1, n2, n3, n4, a, b;
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	a = (n1>n2)?n1:n2;
	a = (a>n3)?a:n3;
	a = (a>n4)?a:n4;
	n1 = (n1==a)?0:n1;
	n2 = (n2==a)?0:n2;
	n3 = (n3==a)?0:n3;
	n4 = (n4==a)?0:n4;
	b = (n1>n2)?n1:n2;
	b = (b>n3)?b:n3;
	b = (b>n4)?b:n4;
	printf("%d", b);
}
