#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(1251);
    char *locale = setlocale(LC_ALL, "");
    printf("¬ведите размер массива \n");
    int size;
    scanf("%d", &size);
    int *array = malloc(size * sizeof(int));
    for (int counter = 0; counter < size; counter++)
    {
        printf("¬ведите значение элемента массива \n");
        scanf("%d", &array[counter]);
    }
    for (int counter = 0; counter < size; counter++)
    {
        printf("%d\t", array[counter]);
    }
    printf("\n");
    for (int counter_1 = 0; counter_1 < size- 1; counter_1++) 
    {
        for (int counter_2 = 0; counter_2 < size - 1 - counter_1; counter_2++) 
        {
            if (abs(array[counter_2]) > abs(array[counter_2 + 1])) 
            {
                int temp = array[counter_2];
                array[counter_2] = array[counter_2 + 1];
                array[counter_2 + 1] = temp;
            }
        }
    }
    for (int counter = 0; counter < size; counter++)
    {
        printf("%d\t", array[counter]);
    }
    free(array);
    system("pause");
    return 0;
}