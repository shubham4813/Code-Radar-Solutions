#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || 0ch=='i' || ch=='o' || ch=='u' || ch=='A', || ch=='E' || ch=='I' || ch=='O' || ch=='U'){printf("Vomel");}
    else if (ch>='0' && ch<='9'){printf("Digit");}
    esle if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){printf("Consonant");}
    else{printf("Sprcial Character");}
    return 0;
}