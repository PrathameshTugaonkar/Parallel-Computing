#include <omp.h>
#include <stdio.h>


int x, sum ;

#pragma omp threadprivate(sum)


int main( int argc, char **argv )

{
omp_set_dynamic(0);     // Explicitly disable dynamic teams
omp_set_num_threads(4);

  #pragma omp parallel

  #pragma omp critical

  {

     x = 1 ;

     sum += x ;

  }


  x = 2 ;


  #pragma omp parallel

  #pragma omp critical

  sum += x ;


  printf( "%d", sum ) ;

}
