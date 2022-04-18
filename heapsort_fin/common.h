#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define _gettime_
#include <sys/time.h>

#define num 100 //정렬 갯수

struct heap{
    int S[num+1];
    int heapsize;
};

void rannum1(struct heap *H,int a);

void removekeys(int n, struct heap *H, int S[]);
int root ( struct heap *H);
void makeheap(int n, struct heap *H);
void heaps(int n, struct heap *H);
void siftdown(struct heap *H, int i);
long get_runtime(void);
