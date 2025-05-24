#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_bulb(int bit)
{
    if (bit == 0)
    {
        printf("黑");
    }
    else if (bit == 1)
    {
        printf("黄");
    }
}

void reverse(int *arr, int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }
}

int main(void)
{
    system("chcp 65001");
    char input[1024];

    printf("Enter message: ");
    if (fgets(input, sizeof(input), stdin) == NULL)
    {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }

    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n')
    {
        input[len - 1] = '\0';
        len--;
    }

    for (size_t i = 0; i < len; i++)
    {
        unsigned char c = input[i]; 

        int bits[8];
        int idx = 0;

        unsigned char num = c;
        while (idx < 8)
        {
            bits[idx++] = num % 2;
            num /= 2;
        }

        reverse(bits, 8);

        for (int j = 0; j < 8; j++)
        {
            print_bulb(bits[j]);
        }

        printf("\n");
    }

    return 0;
}