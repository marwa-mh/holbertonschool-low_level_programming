#include <stdio.h>
#include <stdarg.h>
#include <string.h>

typedef struct format_type{
    char abbreviation;
    void (*name)(va_list args);
} format_type_t;
void print_char(va_list args)
{
    printf("%c",va_arg(args,int) );
}
void print_string(va_list args)
{
    printf("%s",va_arg(args,char*) );
}
void print_int(va_list args)
{
    printf("%d",va_arg(args,int));
}
void print_float(va_list args)
{
    printf("%f",va_arg(args,double));
}
void print_all(const char * const format, ...)
{
     va_list args;
    format_type_t ft[] = {
        {'c',print_char},
        {'i', print_int},
        {'f', print_float},
        {'s',print_string}
    };
   
    int i=0,j=0;
    
    char type;
 
     
     va_start(args,format);
     while (format != NULL && format[i]!='\0')
     {
          type = format[i];
         while ( j < 4)
         {
             
             if (ft[j].abbreviation == type)
             {
            
                 ft[j].name(args);

                break;
             }
             j++;
         }
         
         i++;
         
         if (format[i]!='\0' && j !=4)
            printf(", ");
        j=0;
     }

     printf("\n");
     va_end(args);
     
    
}
