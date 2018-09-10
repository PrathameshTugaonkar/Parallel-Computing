 #include <omp.h>
#include <stdio.h>

int main( int argc, char **argv )

{
int x,y,z, re;
printf("OPenMP\n");
re=f(10,2,4);
printf("\n\n Return= %d\n", re);
}
int f( int *x, int from, int to )

{
int x,y,z;
    int ret=0, u=0, v=0 ;

printf("OPenMP\n");
    if ( z == y )
{
       printf("\n\n Return= %d\n", z); return 0 ;
}

    else

    {

        #pragma omp task shared(u)

        u = f(x,from,(from+to)/2);


        #pragma omp task

        v = f(x,(from+to)/2+1,to);


        #pragma omp taskwait


        if ( x[u] >= x[v] )

            ret = u ;

        else

            ret = v ;

    }

printf("\n\n Return= %d\n", ret);
    return 0 ;

}
