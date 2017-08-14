#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#define LENTH 100
using namespace std;

int main(int argc,char *argv[]){
    char dir[LENTH];
    string d;
    if(argc>2){
        while(argv[1] =="dir"){
            dir = *argv[2];
            d = dir;
            if (dir[0] =='/'){
                d = substr(1);
                d = substr(strchr(d,'/')+1);
                d = substr(0,strchr(d,'/')-1);//no '/'
            }else{
                printf("Please enter the correct directory name!\nExamplr:/home/...");
            }
        }

    }else{
        printf("Please enter the correct directory name!\nExamplr:/home/...");
    }

    return 0;
}
