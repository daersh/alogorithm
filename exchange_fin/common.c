#include "common.h"


void exchangesort(int data[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(data[j]<data[i]){
                int temp;
                temp=data[j];
                data[j]=data[i];
                data[i]=temp;
            }
    }
}
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