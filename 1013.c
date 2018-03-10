	#include <stdio.h>
	#include <stdlib.h>

	int main (){

		int a;
		int b;
		int c;

		scanf ("%d %d %d", &a, &b, &c);

		if (a > b && a > c){

			printf ("%d eh o maior\n", a);
		}

		if(b > a && b > c){

			printf("%d eh o maior\n", b);
		}

		if(c > b && c > a){

			printf("%d eh o maior\n", c );
		}

		return 0;
	}