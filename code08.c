#include <stdio.h>  
int main () 
{    
   int a = 2;  
   int b = 4;  
   
   switch(a) 
   {  
     
      case 1:   
         printf("the value of a evaluated in outer switch: %d\n",a);  
      case 2:  
         switch(b) 
			{  
            case 2:  
               printf("The value of b evaluated in nested switch: %d\n",b);  
         }  
   }  
     
   printf("The value of a is : %d\n", a );  
   printf("The value of b is : %d\n", b );  

   return 0;  
} 
