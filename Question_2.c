#include <stdio.h>

int main()
{
    int arr[100] = {16, 24, 32, 42, 55};
    int n = 5;
    int value, position, i, n_elements;

    printf("How many elements do you want to insert? : ");
    scanf("%d", &n_elements);

    for (i = 0; i < n_elements; i++)
    {
        printf("Enter Position (0-%d): ", n);
        scanf("%d", &position);
        position =position-1;

        printf("Enter value: ");
        scanf("%d", &value);

        for (int j = n; j > position-1; j--)
        {
            arr[j] = arr[j - 1];
        }


        arr[position] = value;
        n++;
    }

    printf("\nArray after multiple insertion:\n");

    for (int i = 0; i <n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}