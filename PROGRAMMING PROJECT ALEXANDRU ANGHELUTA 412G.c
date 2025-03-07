#include <stdio.h>
#include <conio.h>
#include "determinant.cpp"
#include "multiple.cpp"
#include "euclid.cpp"
#include "rank_of_matrix.cpp"
int a[3][3],b[3][3],i,j,det_a,det_b,lcm,gcd,rank_a,rank_b; //declaration of variables
int main()
{
	printf("Hi and welcome! I am here to help you with some very specific mathematical demands. Those being finding the least common multiple and greatest common divider of the determinants of two matrices of size 3x3 and the ranks of those matrices. \n\nThis being said, let us get started! \n\nPlease enter the matrices you want to work with. \na= ");
	
	for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
	  scanf("%d",&a[i][j]); //introduction of the first matrix
	  
	printf("Great! Now enter the matrix <<b>>. \nb= ");
	
	for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
	  scanf("%d",&b[i][j]); //introduction of the second matrix
	  
	printf("Alright! Now that we have both matrices we can calculate their determinants. \n");
	
	det_a=dtm(a);
	det_b=dtm(b); //call to external function that determines the determinants of the two matrices
	
	printf("D_a= %d\n",det_a);
	printf("D_b= %d\n",det_b); //display of the two determinants
	
	printf("Great! Now I will find the Least Common Multiple and Greatest Common Divider of these two determinants.\n");
	
	lcm=mult(det_a,det_b); //call to external function that determines the least common multiple of the two determinants
	
	printf("The Least Common Multiple of the two determinants is: %d",lcm);
	
	gcd=div(det_a,det_b); //call to external function that determines the greatest common divider of the two determinants
	
	printf("\nThe Greatest Common Divider of the two determinants is: %d\n",gcd);
	
	printf("\nAlright! Now I will display the ranks of the two matrices.");
	
	rank_a=rank(a);
	rank_b=rank(b); //call to external function that determines the ranks of the two matrices
	
	printf("\nrk_a= %d \nrk_b= %d",rank_a,rank_b); //display of the ranks of the two matrices
}
