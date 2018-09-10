
#include <omp.h>
#include <stdio.h>

int main( int argc, char **argv )
{
static int arr[4] = {1,2,3,4} ;

omp_set_dynamic(0);     // Explicitly disable dynamic teams
omp_set_num_threads(4);
    int x=1, j ;

    #pragma omp parallel for reduction(*:x)

    for(j=0 ; j<4 ; j++)

        x *= arr[j] ;


    printf( "%d", x ) ;
}
