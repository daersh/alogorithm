#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define _gettime_
#include <sys/time.h>
#define num 10
struct heap{
    int S[num];
    int heapsize;
};

void rannum(int data[],int a);
long get_runtime(void);

void mergesort1(int n, int S[]);
void merge(int h, int m, const int U[], const int V[],
                          int S[]);
                          