#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>


int main()
{
    /*int i = 0;

    printf("While: \n");

    while (i < 5)
    {
        printf("%d", i);
        i++;
    }
    printf("\nDo while: \n");

    i = 0;

    do
    {
        printf("%d", i);
        i++;

    } while (i<5);

    printf("\nFor: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d", i);
    }*/

    //Ad.1

    /*int a = 0, liczba;
    float suma = 0, srednia, max;

    do
    {
        printf("Podaj liczbe: \n");
        scanf_s("%d", &liczba);
        suma += liczba;

        if (a == 0) max = liczba;
        else if (max < liczba)max = liczba;
        a++;

    } while (liczba >= 0);

    srednia = suma / (a - 1);

    printf("Suma: %f \n", suma);
    printf("max: %f  \n", max);
    printf("srednia: %f \n", srednia);*/

    //Ad2.
    /*float suma_d = 0, suma_u = 0, ile_d = 0, ile_u = 0;
    int liczba_1;

    for (int i = 0; i < 5; i++)
    {
        printf("Podaj liczbe: ");
        scanf_s("%d", &liczba_1);

        if (liczba_1 >= 0)
        {
            suma_d += liczba_1;
            ile_d++;
        }
        else
        {
            suma_u += liczba_1;
            ile_u++;
        }
    }
    printf("Suma liczba dodatnich wynosi: %f, ilosc liczba dodatnich: %f", suma_d, ile_d);
    printf("\nSuma liczba ujemnych wynosi: %f, ilosc liczba ujemnych: %f", suma_u, ile_u);*/

   /*  //Ad.3
    float suma = 0;
    int liczba, n;

    srand(time(NULL));

    printf("Podaj n: ");
    scanf_s("%d", &n);
    printf("\nWylosowane liczby: ");
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            /*printf("Podaj liczbe: ");
            scanf_s("%d", &liczba);
            liczba = rand() % 26 - 10;
            printf("%d ", liczba);
            if (liczba % 2 == 0) suma += liczba;
        }
        printf("\nSuma liczba parzystych %f", suma);
    }
    else
    {
        printf("\nn musi byc liczba dodatnia");
    }
    //Ad. 4
    float suma = 0;
    int liczba, n;

    srand(time(NULL));

    printf("podaj n: ");
    scanf_s("%d", &n);
    printf("\nWyloswane liczby: ");

    if (n > 0) {
        for (int i = 0; i < n; i++) {

            liczba = rand() % 26 - 10;
            printf("%d ", liczba);
            if (liczba % 2 == 0) suma += liczba;
        }
        printf("\nsuma liczb parzystych: %f", suma);

    }
    else {
        printf("n musi byc liczba dodatnia");
    }


   //Ad.5

    int student, start = 0, suma = 0;
    float sr;

    printf("Podaj liczbe studentow: \n");
    scanf_s("%d", &student);

    int pkt[student];

    while (start < student)
    {
        printf("\nPodaj pkt student nr %d", start + 1);
        scanf_s("%d", &pkt[start]);
        suma += pkt[start];
        start++;
    }

    sr = suma / student;

    printf("\nSrednia pkt wynosi: %f", sr);



    //Ad.6
    for (int i1 = 0; i1 <= 100; i1++)
    {
        printf("%d ", i1);
    }

    printf("\n\n");

    for (int i2 = 100; i2 > 0; i2--)
    {
        printf("%d ", i2);
    }

    printf("\n\n");

    for (int i3 = 7; i3 <= 77; i3 += 7)
    {
        printf("%d ", i3);
    }

    printf("\n\n");

    for (int i4 = 20; i4 >= 0; i4 -= 2)
    {
        printf("%d ", i4);
    }*/



    //Ad.7

    int i, j;
    for (i = 10; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
            printf("X");
        printf("\n");
    }

    for (i = 1; i <= 11; i++)
    {
        for (j = 10; j >= i; j--)
            printf(" ");
        for (j = 1; j <= i + 1; j++)
            printf("X");
        printf("\n");
    }

    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j <= i; j++)
            printf(" ");
        for (j = 10; j >= i; j--)
            printf("X");
        printf("\n");
    }
    for (i = 1; i <= 11; i++)
    {
        for (j = 10; j >= i; j--)
            printf(" ");
        for (j = 1; j <= i + 1; j++)
            printf("X");
        for (j = 1; j <= i + 1; j++)
            printf("X");
        printf("\n");
    }

}