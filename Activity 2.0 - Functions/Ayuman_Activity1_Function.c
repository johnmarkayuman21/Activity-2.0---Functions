#include <stdio.h>

int addnumbers(int num1,int num2,int num3,int num4,int num5);
int average(int sum);

int main()
{

   int n1, n2, n3, n4, n5, sum, ave;

   printf("Enter five grades: \n");
   scanf("\n%d \n%d \n%d \n%d \n%d", &n1,&n2,&n3,&n4,&n5);

   sum = addnumbers(n1, n2, n3, n4, n5);
   ave = average(sum);
   printf("\nAverage = %d\n", ave);

    return 0;

}

int addnumbers(int num1,int num2,int num3,int num4,int num5)
{
   int result;
   result = num1+num2+num3+num4+num5;
   return result;

}
int average(int sum)
{
    int result;
    result = sum/5;
    return result;
}
