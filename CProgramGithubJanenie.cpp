#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
    printf("This program prints the minimum and maximum values of datatypes (ranges)\n\n");
    printf("char minimum value=%i\n",CHAR_MIN);
    printf("char maximum value=%i\n",CHAR_MAX);
    
    printf("signed char minimum value=%i\n",SCHAR_MIN);
    printf("signed char maximum value=%i\n",SCHAR_MAX);
    
    printf("unsigned signed char maximum value=%i\n",UCHAR_MAX);
    
    printf("int minimum value=%i\n",INT_MIN);
    printf("int maximum value=%i\n",INT_MAX);
    
    printf("unsigned int maximum value=%u\n\n\n",UINT_MAX);
    
    printf("short int minimum value=%hi\n",SHRT_MIN);
    printf("short int maximum value=%hi\n",SHRT_MAX);
    
    printf("unsigned short int maximum value=%i\n",UINT_MAX);
    printf("unsigned short int maximum value=%u\n\n\n",USHRT_MAX);
    
    printf("long int minimum value=%li\n",LONG_MIN);
    printf("long int maximum value=%li\n",LONG_MAX);
    
    printf("unsigned long int maximum value=%lu\n\n\n",ULONG_MAX);
    
    printf("float minimum value=%e\n",FLT_MIN);
    printf("float maximum value=%e\n",FLT_MAX);
    
    printf("double minimum value=%e\n",DBL_MIN);
    printf("double maximum value=%e\n",DBL_MAX);
    
    printf("long double minimum value=%Le\n",LDBL_MIN);
    printf("long double maximum value=%Le\n",LDBL_MAX);
    
    
    



 
    return 0;
}
