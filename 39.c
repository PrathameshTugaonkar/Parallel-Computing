#include <omp.h>
#include <stdio.h>

int main( int argc, char **argv )

{
omp_set_dynamic(0);     // Explicitly disable dynamic teams
omp_set_num_threads(4);
static int arr[4] = {1,2,3,4} ;


    int x=0, y=0, j ;

    #pragma omp parallel 

      #pragma omp for

      for(j=0 ; j<4 ; j++)

        #pragma omp critical

        x += arr[j] ;


    #pragma omp parallel

      #pragma omp single

      for(j=0 ; j<4 ; j++)

        #pragma omp critical

        y += arr[j] ;


    printf( "\n%d\n,%d\n", x, y ) ;
}
