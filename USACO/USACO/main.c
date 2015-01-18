/*
 ID: g7733pf1
 LANG: C
 TASK: ride
 */

#include<stdio.h>

struct stack {
    int *next;
    char name;
};

int main()
{
    FILE *ptr_file;
    const int size = 1000;
    char buf[size];
    
    
    
    ptr_file = fopen("ride.in","r");
    if (!ptr_file)
        return 1;
    
    while (fgets(buf,size, ptr_file) != NULL){
        printf("%s",buf);
    }
    
    printf("\n");
    
    fclose(ptr_file);
    return 0;
}
