#include<stdio.h>
#include<math.h>
#define endl printf("\n")

int binomial_roots();

int main()
{
	int a,b,c;

	printf("Enter the coefficients of the binomial equation seperated by a space");endl;

	scanf("%d %d %d",&a,&b,&c);

	double root1,root2;
	int roots_computed_successfully;

	roots_computed_successfully=binomial_roots(a,b,c,&root1,&root2);

	if (roots_computed_successfully==0)
		printf("Roots of the given equation are \n%lf , %lf",root1,root2);
	else
		printf("Roots are undefined\n");
}


int binomial_roots(int a,int b,int c,double *root1_p,double *root2_p)
{
	if (2*a==0)
		return -1;
	long long temp;
	temp=((int)pow(b,2))-(int)4*a*c;
	//printf("%d",temp);endl;
	if (temp<0)
		return -1;
	double temp_sq=sqrt(temp);
	//printf("%lf",temp_sq);endl;
	*root1_p=((-b)+temp_sq)/(2.0*a);
	*root2_p=((-b)-temp_sq)/(2.0*a);
	return 0;
}
