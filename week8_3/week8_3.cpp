#include<stdio.h>

int main()
{
    int size = 0;
    scanf_s("%d", &size);
    int number[999];
    int i = 0, tmp = 0;

    for (i = 0; i < size; i++)
    {
        printf(" Enter number %d : ", i + 1);
        scanf_s("%d", &number[i]);
    }

    i = 0;
    do
    {
        if (i < size - 1 && number[i] > number[i + 1])
        {
            tmp = number[i + 1];
            number[i + 1] = number[i];
            number[i] = tmp;
            i = 0;
        }
        else
        {
            i++;
        }

    } while (i < size);


    printf("\n order number : ");
    for (i = 0; i < size; i++)
    {
        printf(" %d", number[i]);
    }

    return 0;
}