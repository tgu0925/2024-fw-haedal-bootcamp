#include <stdio.h>

int main(void)
{
    int K, J, L =0 ;
    scanf("%d", &K);
    int arry[100] = {0, 0};

    for (int i=0; i<K; i++) {
        scanf("%d",&arry[i]);
    }

    scanf("%d",&J);

    for (int x =1; x < K; x++){

        if (arry[x] == J){
            L++;
        }

    
    printf("%d",L);

    }

  return 0;

}