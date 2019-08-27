
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>


int convert_from_A_to_Integer(char digit)
{
    switch (digit)
    {
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    }
    return -200;
}

int myAtoi(const char* twelve)
{
    int i, j;
    int result = 0;
    for (i = 0, j = strlen(twelve) - 1 ; i < strlen(twelve); i++, j--)
    {
        // convert single character to integer, then muliply by ( 10  ^  j) and add to the result
        result += (convert_from_A_to_Integer(twelve[i]) * (pow(10,j)));
    }
    return result;
}


int main()
{   
    char twelve[] = "23";

    // Hamed Atoi
    int number = myAtoi(twelve);
    printf("Hamed result: %d\n", number);

    // C library Atoi

    number = atoi(twelve);
    printf("C Library result: %d\n", number);

}
