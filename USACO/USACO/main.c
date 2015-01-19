/*
 ID: g7733pf1
 LANG: C
 TASK: ride
 */

#include<stdio.h>

struct nameStack {
    char name;
    struct nameStack *next;
};

void initStack(struct nameStack* head){
    head = NULL;
}

struct nameStack* pushStack(struct nameStack* head, char* name, short nameLength){
    
}

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
