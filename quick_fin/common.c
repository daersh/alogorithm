#include "common.h"


void q_sort(int data[],int left, int right){
    int pivot, l_hold, r_hold;
    l_hold=left;
    r_hold=right;
    pivot=data[left];
    while(left <right){
        while((data[right]>=pivot)&&(left<right))
            right--;
        if(left!=right){
            data[left]=data[right];
            left++;
        }
        while((data[left]<=pivot)&&(left<right))
            left++;
        if(left!= right){
            data[right]=data[left];
            right--;
        }
    }
    data[left]=pivot;
    pivot=left;
    left=l_hold;
    right=r_hold;
    if(left<pivot)
        q_sort(data, left, pivot-1);
    if(right>pivot)
        q_sort(data,pivot+1, right);
}


void quickSort(int data[],int array_size){
    q_sort(data,0,array_size-1);
}
void rannum(int data[],int a){  //난수 생성
    int i;
    srand(time(NULL));
    for(i=0;i<a;i++){
        data[i]= rand()%(100);  //0부터 100 사이 값으로 저장
    }
}

long get_runtime(void)
{
 clock_t start;
  start= clock(); //현재시간을 초로 바꿈
  return((long)((double)start*100.0/(double)CLOCKS_PER_SEC));
}
