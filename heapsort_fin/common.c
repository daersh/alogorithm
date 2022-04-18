#include "common.h"



void removekeys(int n, struct heap *H, int S[]){
    int i;
    for( i=n; i>=1; i--){
        H->S[i]=root(H);
    }
}
int root ( struct heap *H){
    int keyout;
    keyout= H->S[1];
    H->S[1]= H->S[H->heapsize];
    H->heapsize= H->heapsize-1;
    siftdown(H,1);
    return keyout;
}
void makeheap(int n, struct heap *H){
    int i;
    H->heapsize= n;
    for(i= n/2; i>=1; i--)
        siftdown(H,i);
}

void heaps(int n, struct heap *H){
    makeheap(n,H);
    removekeys(n,H,H->S);
}

void siftdown(struct heap *H, int i){
    int parent, largerchild;
    int siftkey;
    bool spotfound;

    siftkey= H->S[i];
    parent=i;
    spotfound=false;
    while(2*parent <=H->heapsize && !spotfound){
        if(2*parent < H->heapsize && H->S[2*parent]< H->S[2*parent+1])
            largerchild= 2*parent+1;
        else   
            largerchild=2*parent;
        if(siftkey<H->S[largerchild]){
            H->S[parent]=H->S[largerchild];
            parent=largerchild;
        }
        else
            spotfound= true;
    }
    H->S[parent]=siftkey;
}

void rannum1(struct heap *H,int a){  //난수 생성
    int i;
    srand(time(NULL));
    for(i=1;i<a;i++){
        H->S[i]= rand()%(100);  //0부터 100 사이 값으로 저장
    }
}


long get_runtime(void)
{
 clock_t start;
  start= clock(); //현재시간을 초로 바꿈
  return((long)((double)start*100.0/(double)CLOCKS_PER_SEC));
}

//함수의 시각을 계산해줌 start end 시간 알려줌