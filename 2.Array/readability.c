#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char text[9999];
    printf("Please enter a text: ");
    for(int i = 0;i < 9999;i++)
    {
        text[i] = getchar();
        if(text[i] == '\n')
        {
            text[i] == '\0';
            break;
        }
    }

    int words = 1;
    int sentences = 0;
    int characters = 0;
    for(int i = 0;i < strlen(text);i++)
    {
        if(text[i] != ' ' && text[i] != '\n' && text[i] != '\0')
        {
           characters++; 
        }

        if(text[i] == ' ')
        {
            words++;
        }
        
        if(text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }

    double L = 100 * (double)characters / words;
    double S = 100 * (double)sentences / words;
    int grade = round(0.0588 * L - 0.296 * S - 15.8);

    if(grade >= 16)
    {
        printf("Grade 16+\n");
    }else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }else
    {
        printf("Grade %d\n", grade);
    }

    return 0;
}
