#include <stdio.h>

void pyramid(int rows);

int main(void)
{
    int height;
    printf("height: ");
    scanf("%d", &height);
    pyramid(height);
    return 0;
}

void pyramid(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}