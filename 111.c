#include <omp.h>
#include <stdio.h>

int main( int argc, char **argv )

{
omp_set_dynamic(0);     // Explicitly disable dynamic teams
omp_set_num_threads(4);

    int t ;

    t = omp_get_num_threads() ;

    #pragma omp parallel

    {

        int x,y ;

        x = omp_get_num_threads() ;

        y = omp_get_thread_num() ;

        #pragma omp single

        t += x ;

    }

    printf( "\n%d\n\n", t ) ;


}
