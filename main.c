#include <stdio.h>
#include <stdlib.h>

unsigned long int findpp(unsigned long int);

int main(int argc, char *argv[])
{
    if( argc != 2 )
    {
        printf("expected just one int argument\n");
        exit(1);
    }
    
    unsigned long int input = atoi(argv[1]);
    printf("input: %i\n", input);
    if( input < 20 )
    {
        printf("output:%i\n", findpp(input));
    }
    else
    {
        printf("answer does not fit in long :(\n");
    }
}

unsigned long int findpp(unsigned long int c)
{
    if( c <= 1 )
    {
        return 1;
    }
    
    unsigned long int sum=0;
    for( unsigned long int i=0; i<c; ++i )
    {
        sum += findpp(i)*findpp(c-i-1);
    }
    return sum;
}
