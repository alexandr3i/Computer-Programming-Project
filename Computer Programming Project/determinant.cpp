#include <stdio.h>
int dtm(int x[3][3])
{
	int a,b,c,d,e,f,det,one,two;
	
	a=x[0][0]*x[1][1]*x[2][2];
	b=x[1][0]*x[2][1]*x[0][2];
	c=x[0][1]*x[1][2]*x[2][0];
	d=x[2][0]*x[1][1]*x[0][2];
	e=x[2][1]*x[1][2]*x[0][0];
	f=x[1][0]*x[0][1]*x[2][2]; //finding the det using the triangle method
	
	one=a+b+c;
	two=d+e+f;
	det=one-two;
	
	return det;
}
