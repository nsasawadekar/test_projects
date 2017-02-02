//
//  main.c
//  realloc
//
//  Created by Nikhil Asawadekar on 2/1/17.
//  Copyright © 2017 Nikhil Asawadekar. All rights reserved.
//

#include <stdio.h>
#include "stdlib.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int original_size,new_size, i, *ptr;
    
    printf("Enter number of elements: \n");
    scanf("%d", &original_size);
    
    ptr = (int*)malloc(original_size * sizeof(int));  //memory allocated using malloc
    if (ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    
    printf("Enter elements of array: \n");
    for (i = 0; i < original_size; ++i)
    {
        scanf("%d", ptr + i);
        //sum += *(ptr + i);
    }
    
    //printf("Sum = %d", sum);
    printf("Entered array:\n");
    for (int jo = 0; jo < original_size; jo++)
        printf("%d\t", *(ptr + jo));
    //free(ptr);
    printf("\n%d is not an enough size\n", original_size);
    
    printf("\nEnter new size of array: \n");
    scanf("%d", &new_size);
    ptr = (int*)(realloc(ptr, new_size));
    printf("Enter new elements now\n");
    for (int kk = original_size; kk < new_size; ++kk) {
        scanf("%d", ptr + kk);
    }
    printf("New array:\n");
    for (int jo = 0; jo < new_size; jo++)
        printf("%d\t", *(ptr + jo));
    printf("\n");
    return 0;
}
// realloc.cpp : Defines the entry point for the console application.

