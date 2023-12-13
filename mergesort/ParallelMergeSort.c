#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define SIZE 100

int array[SIZE];

void fillArrayWithRandomNumbers(int arr[SIZE]) {
    for(int i = 0; i<SIZE; i++) array[i] = rand()%100;
}

void printArray(int arr[SIZE]) {
    for(int i = 0; i<SIZE; i++) printf("%5d", arr[i]);
    printf("\n");
}

typedef struct StartEndIndexes {
    int start;
    int end;
} StartEndIndexes;

void merge(int arr[], int start, int mid, int end) {
  // merge function
}

void sequence(int arr[], int start, int end) {
  // sequenced merge
}

void divide(StartEndIndexes* indexes, int threadId, int totalThreads) {
  // divides arrays
}

void* parrallel(void* args) {
  // parrallel merge using pthreads
}
// Runs mergesort on the array segment described in the
// argument. Spawns two threads to mergesort each half
// of the array segment, and then merges the results.
void* mergeSort(void* args) {
    return NULL;
}

int main() {
    srand(time(0));
    StartEndIndexes sei;
    sei.start = 0;
    sei.end = SIZE - 1;
    
    // 1. Fill array with random numbers.
    fillArrayWithRandomNumbers(array);
    
    // 2. Print the array.
    printf("Unsorted array: ");
    printArray(array);
    
    // 3. Create a 2 threads for merge sort.
    pthread_t threads[2];
    StartEndIndexes threadArgs[2];

    divide(threadArgs, 0, 2);

    // makes threads
    for (int i = 0; i < 2; i++) {
      pthread_c(&threads[i], NULL, parrallel, &threadArgs[i]);
    }
    
    // 4. Wait for mergesort to finish.
    for (int i = 0; i < 2; i++) {
      pthread_join(threads[i], NULL);
    }
    // 5. Print the sorted array.
    printf("Sorted array:   ");
    printArray(array);

    return 0;
}
