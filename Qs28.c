#include<stdio.h>
void namaste();
void bonjour();
int main(){
    printf("enter f for franch & i for indian :");
    char ch;
    scanf("%c", &ch);
    if (ch=='i')
    {
        namaste();
    }else{
        banjour();
    }
    
    return 0;

}
void namaste(){
    printf("Namaste\n");
}
void banjour(){
    printf("Bonjour\n");
}
