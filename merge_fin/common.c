#include "common.h"

void rannum(int data[],int a){  //난수 생성
    int i;
    srand(time(NULL));
    for(i=0;i<a;i++){
        data[i]= rand()%(100);  //0부터 100 사이 값으로 저장
    }
}

void mergesort1(int n, int S[]){
    if(n>1){
       const int h= n/2, m=n-h;
       int U[h],V[m];
       for(int i=0;i<h;i++){   //절반 앞부분 유 저장
           U[i]=S[i];
       }
       for(int i=0;i<m;i++){  //절반 뒷ㅜ분 브이에 저장
           V[i]= S[h+i];
       }
       mergesort1(h,U);
       mergesort1(m,V);
       merge(h,m,U,V,S);
    }
}
void merge(int h, int m, const int U[], const int V[],
                          int S[])
        {
            int i=0,j=0,k=0;
            while(i<h &&j<m){
                if(U[i]<V[j]){
                    S[k]=U[i];
                    i++;
                }else{
                    S[k]=V[j];
                    j++;
                }
                k++;
            }
            if(i>=h){
                for(int x=k;x<h+m;x++){
                    S[x]=V[j];
                    j++;
                }
            }else {
                    for(int x=k;x<h+m;x++){
                        S[x]=U[i];
                        i++;
                    }
                }
            
        }

long get_runtime(void)
{
 clock_t start;
  start= clock(); //현재시간을 초로 바꿈
  return((long)((double)start*100.0/(double)CLOCKS_PER_SEC));
}

//함수의 시각을 계산해줌 start end 시간 알려줌