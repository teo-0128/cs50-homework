#include <stdio.h>

int main(void)
{
    int height;
    int length = 18;
    printf("Enter a height between 0 and 8: ");
    scanf("%d", &height);
    if(height < 0 || height > 8)
    {
        printf("Not a valid height.\n");
        return 0;
    }
    else
    {
        for(int n = 1 ; n <= height ; n++ )
        {
            for( int i = 1 ; i <= length ; i++)
            {
                if( ( i >= 9 && i <= 10) || ( i >= 1 && i <= ( 8 - n ) ) || ( i >= ( 11 + n ) && ( i <= 18 ) ) ) 
                {
                    printf(" ");
                }
                else
                {
                    printf("#");
                }
            }
            printf("\n");
        }
    }

    return 0;
}