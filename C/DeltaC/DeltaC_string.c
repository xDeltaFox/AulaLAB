#include <stdio.h>
#include <string.h>

#include "./DeltaC_string.h"

int DeltaC_get_white_space_string(char *str)
{
    int lines = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        lines++;
        if (str[i] == ' ')
        {
            return lines;
        }
    }
}