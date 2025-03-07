#include <stdio.h>
int rank(int x[3][3])
{	//finding the rank of the matrix using the determinant
	int a,b,c,d,e,f,det,one,two,rk;
	a=x[0][0]*x[1][1]*x[2][2];
	b=x[1][0]*x[2][1]*x[0][2];
	c=x[0][1]*x[1][2]*x[2][0];
	d=x[2][0]*x[1][1]*x[0][2];
	e=x[2][1]*x[1][2]*x[0][0];
	f=x[1][0]*x[0][1]*x[2][2];
	
	one=a+b+c;
	two=d+e+f;
	det=one-two;
	
	if(det!=0)
	  rk=3;
	else
	  {
	  	one=x[0][0]*x[1][1];
	  	two=x[1][0]*x[0][1];
	  	det=one-two;
	  	
	  	if(det!=0)
	  	 rk=2;
	  	else
	  	 rk=1;
	  }
	return rk;
}
