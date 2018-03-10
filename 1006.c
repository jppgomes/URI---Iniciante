#include <stdio.h>
#include <stdlib.h>

int main()
{
	double a;
	double b;
	double c;
	double media;

	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);

	a *=2;
	b *=3;
	c *=5;
	media = (a+b+c)/10;

	if(media > 10 || media < 0){
		return 0;

	}

	else printf("MEDIA = %.1lf\n", media);


}