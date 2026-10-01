#include <stdio.h>

int main()
{
    int array_del[100] = {17, 26, 52, 59, 65};
    int n = 5;
    int position[100], k;

    printf("Delete Elements: ");
    scanf("%d", &k);

    for (int i = 0; i < k; i++)
    {
        printf("Enter position (1 to %d): ", n);
        scanf("%d", &position[i]);
        position[i] = position[i] - 1;
    }

    
    for (int i = 0; i < k - 1; i++)
    {
        for (int j = 0; j < k - i - 1; j++)
        {
            if (position[j] < position[j + 1])
            {
                int temp = position[j];
                position[j] = position[j + 1];
                position[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < k; i++)
    {
        int pos = position[i];

        for (int j = pos; j < n - 1; j++)
        {
            array_del[j] = array_del[j + 1];
        }

        n--;
    }
    printf("\nArray after multiple deletion:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array_del[i]);
    }

    return 0;
}