 #include <omp.h>
#include <stdio.h>

int main( int argc, char **argv )

{
omp_set_dynamic(0);     // Explicitly disable dynamic teams
omp_set_num_threads(4);

int s = 0 ;

  #pragma omp parallel shared( s )

  {

    #pragma omp master

    s++ ;


    #pragma omp single

    s++ ;


    #pragma omp barrier

    printf( "s=%d", s ) ;

  }}
