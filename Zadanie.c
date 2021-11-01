#include <stdio.h>
int main()
{
	/*printf("Witaj!\n");
	int a, b=2;
	float c;
	double d=3.45;
	char znak = 'a';

	printf("Liczba calkowita: %d,", b);
	printf("\n Liczba double: %lf,", d);
	printf("\n Znak: %c", znak);
	printf("\n Podaj liczbe double: ");
	scanf_s("%f", & c);
	printf("\n Liczba float: %f", c);

	if (c > 0)
	{
		printf("C jest liczba dodatnia \n");
	}
	else if (c == 0)
	{
		printf("C jest zerem \n");
	}
	else
		printf("C jest liczba ujemna \n");

		switch ()
		{
		case 1:

			break;

		case 2:

			break;

		default:

			break;
		}

			//Ad.1
			int a = 123635;

			printf("Numer albumu: %d \n", a);

			//Ad.2
			int b;
			printf("Wprowadz liczbe calkowita \n");
			scanf_s("%d", &b);

			if (b % 2)
			{
				printf("\nLiczba b jest nieparzysta.");
			}
			else if (b == 0)
			{
				printf("\nLiczba b jest zerem.");
			}
			else
			{
				printf("\nLiczba b jest parzysta.");
			}

			//Ad.3
			float c, d;
			printf("\nWprowadz dwie liczby zmiennoprzecinkowe: ");
			printf("\n1 liczba: ");
			scanf_s("%f",& c);
			printf("\n2 liczba: ");
			scanf_s("%f",& d);

			if (c > d)
			{
				printf("\nLiczba 1 jest wieksza od liczby 2");
			}
			else if (c == d)
			{
				printf("\nLiczba 1 jest rowna liczbie 2");
			}
			else
			{
				printf("\nLiczba 1 jest mniejsza od liczby 2");
			}

			//Ad. 3
			float e, f, g, h;
			printf("\nWprowadz cztery liczby zmiennoprzecinkowe: ");
			printf("\n1 liczba: ");
			scanf_s("%f", &e);
			printf("\n2 liczba: ");
			scanf_s("%f", &f);
			printf("\n3 liczba: ");
			scanf_s("%f", &g);
			printf("\n4 liczba: ");
			scanf_s("%f", &h);

			printf("\nSrednia arytmetyczna: ");
			printf("%f", (e + f + g + h) / 4);*/

			//Ad. 4
	int wybor;
	float i, j;
	printf("\n1 liczba: ");
	scanf_s("%f", &i);
	printf("\n2 liczba: ");
	scanf_s("%f", &j);
	printf("\n1. Suma\n2. Roznica\n3. Iloczyn\n4. Iloraz\n5. Srednia");
	printf("\n Wybierz opcje:");
	scanf_s("%d", &wybor);

	switch (wybor)
	{
	case 1:
		printf("\nSuma %f + %f = %f", i, j, (i + j));
		break;

	case 2:
		printf("\nRoznica %f - %f =%f ", i, j, (i - j));
		break;

	case 3:
		printf("\nIloczyn %f * %f =%f ", i, j, (i * j));
		break;

	case 4:
		printf("\nIloraz %f / %f = %f", i, j, (i / j));
		break;

	case 5:
		printf("\nSrednia (%f + %f)/2 =%f ", i, j, (i + j) / 2);
		break;
	}

	return 0;
}