#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("foo.txt", "r");

    int number;
    int sum = 0;

    while (fscanf(fp, "%d", &number) == 1)
    {
        sum += number;
    }

    fclose(fp);

    printf("Sum = %d\n", sum);

    return 0;
}