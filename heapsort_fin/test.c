#include "common.h"

int main(){   
  
    struct heap a;
    struct timeval stime, etime, gap;
    int b=num;
    rannum1(&a,num+1);
    /*
    printf("변경 전\n");
    for(int i=1; i<=num;i++){
    printf("%d. %d ",i, a.S[i]);
    }
    printf("\n");  
    */

    gettimeofday(&stime,NULL);  //측정 시작
    heaps(num, &a);
  gettimeofday(&etime,NULL);    //측정 끝

gap.tv_sec= etime.tv_sec-stime.tv_sec;
  gap.tv_usec=etime.tv_usec-stime.tv_usec;
  if (gap.tv_usec<0)
  {
    gap.tv_sec=gap.tv_sec-1;
    gap.tv_usec=gap.tv_usec+1000000;
  }
  
  /*
  printf("변경 후\n");
    for(int i=1; i<=num;i++){
    printf("%d. %d ",i, a.S[i]);
    }
    */

   printf("%d의 경우",b);
  printf("Elapsed time %ldsec:%lduesc\n",gap.tv_sec,gap.tv_usec);

    return 0;
}

//100, 500, 1000, 5000, 10000개의 random generated data에 대해 실행 시간을 비교할 것.

