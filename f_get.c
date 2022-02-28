//
// Created by JIAN HE on 2022-02-28.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//remove trailing new line.
int main(){
    printf("Enter your name: ");
    char buffer[100];

    if(fgets(buffer,sizeof buffer,stdin) != NULL){
        size_t len = strlen(buffer);
        if(len > 0 && buffer[len-1] == '\n') {
            buffer[--len] ='\0';
        }
    }
    printf("%s",buffer);
}