#include <stdio.h>
int main(){
    int x,y;
    char ch;
    scanf("%d%d","%c",&x,&y,&ch);
    if(ch == '+'){
        printf("%d",x+y);
    }
    else if(ch == '-'){
        printf("%d",x-y);
    }    
    else if(ch == '*'){
        printf("%d",x*y);
    }
    else if(ch == '/'){
        if(y!=0){
            printf("%d",x/y);
        }
        else{
            printf("error");
        }
    }


    return 0;


}