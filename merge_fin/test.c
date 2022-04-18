#include "common.h"

int main(){
    int b=1000;
    int data[b];
        struct timeval stime, etime, gap;
    rannum(data,b);
    gettimeofday(&stime,NULL);  //측정 시작
    mergesort1(b, data);
    gettimeofday(&etime,NULL);    //측정 끝

    gap.tv_sec= etime.tv_sec-stime.tv_sec;
    gap.tv_usec=etime.tv_usec-stime.tv_usec;
    if (gap.tv_usec<0)
        {
        gap.tv_sec=gap.tv_sec-1;
        gap.tv_usec=gap.tv_usec+1000000;
    } 
     printf("%d의 경우",b);
  printf("Elapsed time %ldsec:%lduesc\n",gap.tv_sec,gap.tv_usec);

    return 0;
}