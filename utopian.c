#include<stdio.h>

int mooson(int height){
height=height*2;
return height;
}

int summer(int height){
height=height+1;
return height;
}

void main(){

    int N;
    int T=1;

    printf("Please enter the number of cycles:\n");
    scanf("%d",&N);

    while(N>=1){
    T=mooson(T);
    printf("%d\n",T);//print current
    N=N-1;
    if (N!=0){
    T=summer(T);
    printf("%d\n",T);//printf current
    N=N-1;
    }

    }
    printf("The height of the tree is:%d\n",T);
}
