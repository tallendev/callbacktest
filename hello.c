#include <stdio.h>
#include <omp.h>

int main() {
        omp_set_num_threads(8);
        #pragma omp parallel
        {
                for (int i = 0; i < 4; i++) {
                        int threadNum = omp_get_thread_num();
                        int numThreads = omp_get_num_threads();
                        //printf("Num threads\n");
                        printf("Hello World!\n");
                }
        }
}



