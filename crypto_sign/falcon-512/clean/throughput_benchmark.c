// throughput_benchmark.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num_operations = 1000;
    clock_t start, end;
    double cpu_time_used;
    
    // Start the clock
    start = clock();
    
    for (int i = 0; i < num_operations; i++) {
        keygen(public_key, private_key);  // Example operation
    }
    
    // End the clock
    end = clock();
    
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Throughput: %f operations per second\n", num_operations / cpu_time_used);
    
    return 0;
}
