#include<omp.h>
#include<stdio.h>


#define ARR_SIZE 1000000000
int a[ARR_SIZE];

int main(int *argc,char *argv[])
{
int i, sum=0;
double t1,t2;
for(i=0;i<ARR_SIZE;i++)
a[i]=1;

t1=omp_get_wtime();
/*sum up te array*/

for(i=0;i<ARR_SIZE;i++)
sum += a[i];

t1=omp_get_wtime();
printf("\nSum=%d\n \nTime=%g\n\n",sum,t2-t1);
return 0;
}
