// overhead_benchmark.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t start_simple, end_simple, start_sign, end_sign;
    double simple_time, sign_time;
    
    // Measure the time of a simple operation (base operation)
    start_simple = clock();
    for (int i = 0; i < 100; i++) {
        rand();  // Simple operation
    }
    end_simple = clock();
    simple_time = ((double) (end_simple - start_simple)) / CLOCKS_PER_SEC;
    
    // Measure the time of the cryptographic operation
    start_sign = clock();
    for (int i = 0; i < 100; i++) {
        sign(signature, message, private_key);  // Example cryptographic operation
    }
    end_sign = clock();
    sign_time = ((double) (end_sign - start_sign)) / CLOCKS_PER_SEC;
    
    printf("Overhead: %f seconds\n", sign_time - simple_time);
    
    return 0;
}
