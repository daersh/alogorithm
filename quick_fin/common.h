#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define num 10000
#define _gettime_
#include <sys/time.h>
long get_runtime(void);

void rannum(int data[],int a);
void q_sort(int data[],int left, int right);
void quickSort(int data[],int array_size);
