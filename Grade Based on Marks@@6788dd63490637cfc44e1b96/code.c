#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(x>90){
        printf("A\n");
    }
    else if(num >= 80 && num < 90){
        printf("B");
    }
    else if(num >= 70 && num < 80){
        printf("C");
    }
    else if(num >= 60 && num < 70){
        printf("D");
    }
    else if(num < 60){
        printf("F");
    }
    return 0;
}