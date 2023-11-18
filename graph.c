#include <stdio.h>
void main(void){
    int  data[5];//五個のグラフ
    int a,i,j,k;

    //数値の読み込み
    for(a=0;a<5;a++){
        printf("9以下の数値を入力してください ");
        scanf("%d",&data[a]);
    }
    //縦棒の生成
    for(i=10;i>0;i--){
        for(j=0;j<2;j++){
            if(j==0){
                if((i%5)==0){
                    k=i;
                    printf("%2d",k);
                }
                else{
                    printf("  ");
                }
            }
            else{
                if((i%5)==0){
                    printf("+");
                }
                else{
                    printf("|");
                }
            }
        }
        //グラフの生成
        for(a=0;a<5;a++){
                printf("  ");
            if(i==(data[a]+1)){
                printf(" %d ",data[a]);
            }
            else{
                for(j=0;j<3;j++){
                    if(i>(data[a]+1)){
                        printf(" ");
                    }
                    else {
                        if((i%5)==0){
                            printf("+");
                        }
                        else{
                            printf("*");
                        }
                    }
                }
            }
        }
    printf("\n");
    }
    //横棒の生成
    for(j=0;j<30;j++){
        if(j==0){
            k=i;
            printf("%2d",k);
        }
        else if(j==1){
            printf("+");
        }
        else if((j%5)==0){
                printf("+");
        }
        else{
            printf("-");
        }
    }
}
