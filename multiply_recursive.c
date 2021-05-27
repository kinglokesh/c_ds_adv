#include<stdio.h>
int multiply_function();
int main()
{
    int a,b;
    printf("Enter two numbers to multiply");
    scanf("%d %d",&a,&b);
    int c=multiply_function(a,b);
    printf("%d\n",c);
    return 0;
}
int multiply_function(int a,int b)
{
    if (a==1)
    {
        return b;
    }
    else
    {
        return b+multiply_function(a-1,b);
    }
        
}
