/*
Developer: Hamed Mirlohi
self made function to convert any string to integers.
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int myAtoi(const char* number)
{
    int i;
    int result = 0;
    for(i = 0; i < strlen(number);i++ )
    {
        // look at the ascii table, values 0-9 all have sequence values.  minus all of them by zero. an integer will be generated.
        result = (10 * result) + number[i] - '0';
    }
    return result;
}


int main(void)
{   
    char number[] = "1048";

    // C library atoi
    int result =  atoi(number);
    printf("C library atoi: %d\n",result + 10);

    // Hamed atoi
    result = myAtoi(number);
    printf("Hamed atoi: %d\n",result + 10);
}
