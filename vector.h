#ifndef VECTOR_GUARD
#define VECTOR_GUARD

#include<stdlib.h>
#include<assert.h>

typedef struct{
    unsigned int size;
    int *data;
    unsigned int count;
}vector;

//Function Prototypes
void __vector_resize(vector* info);
vector vector_init();
void vector_push(vector* info,int data);
int vector_pop(vector* info);
int vector_get_index(vector* info,unsigned int index);
void decon_vector(vector* info);
void vector_insert(vector* info, int data, unsigned int index);
vector vector_copy(vector* info);
vector intarr_to_vector(int* arr,unsigned int count);

#endif
