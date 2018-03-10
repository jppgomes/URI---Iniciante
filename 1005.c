#include <stdio.h>
#include <stdlib.h>

int main()
{
	double a;
	double b;
	double media;

	scanf("%lf", &a);
	scanf("%lf", &b);

	a *=3.5;
	b *=7.5;

	media = (a+b)/11;

	if(media > 10){
		return 0;

	}

	else printf("MEDIA = %.5lf\n", media);


}