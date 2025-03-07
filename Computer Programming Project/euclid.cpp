#include <stdio.h>
int div(int a, int b)
{	//finding the gcd using the Euclid algorithm
    int r;
    if(a==b)
     return(a);
    else
    {
    	while(b>0)
         {
             r=a%b;
             a=b;
             b=r;
         }
    return a;
	}
}
