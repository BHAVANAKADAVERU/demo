#include<stdio.h>
int main(int argc,char* argv[]){
    printf("the name of the program is:%s\n",argv[0]);
    for(int i=1;i<argc;i++){
        printf("argument %d is %s:\n",i,argv[i]);
    }
    for (int i = 1; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            printf("Character %d in argument %d: %c\n", j, i, argv[i][j]);
        }
    }
    

}