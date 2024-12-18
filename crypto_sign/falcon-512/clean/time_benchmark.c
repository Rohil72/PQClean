// time_benchmark.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;
    
    // Start the clock
    start = clock();
    
    // Example function (replace with actual function to benchmark)
    keygen(public_key, private_key);
    
    // End the clock
    end = clock();
    
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", cpu_time_used);
    
    return 0;
}
