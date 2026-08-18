#ifndef VECTOR_H
#define VECTOR_H 1

#include "sjob.h"
#include <stddef.h>
// #include <stddef.h> includes the Standard Definitions header file in C. 1) size_t (Size Type) 2) NULL (The Null Pointer)

typedef struct VectorInt *VectorIntPtr;
// By only giving the user a pointer (VectorIntPtr), the internal workings are hidden. The user can only interact with the vector using the provided functions, preventing them from accidentally messing up the internal memory.



/*  INTEGER    */

VectorIntPtr VectorInt_new(void);

void VectorInt_delete(VectorIntPtr vector);
size_t VectorInt_size(VectorIntPtr vector);

int VectorInt_get(VectorIntPtr vector, size_t index);
void VectorInt_set(VectorIntPtr vector, size_t index, int element);
// changing value of element
// index is of size_t type because it is of unsigned type which helps from indexes not becoming negative 

void VectorInt_append(VectorIntPtr vector, int element);


/*  DOUBLE    */

typedef struct VectorDouble *VectorDoublePtr;

VectorDoublePtr VectorDouble_new(void);
void VectorDouble_delete(VectorDoublePtr vector);

size_t VectorDouble_size(VectorDoublePtr vector);
double VectorDouble_get(VectorDoublePtr vector, size_t index);
void VectorDouble_set(VectorDoublePtr vector, size_t index, double element);
void VectorDouble_append(VectorDoublePtr vector, double element);


/*  Scheduled Job   */

typedef struct VectorSJob *VectorSJobPtr;

VectorSJobPtr VectorSJob_new(void);
void VectorSJob_delete(VectorSJobPtr vector);

size_t VectorSJob_size(VectorSJobPtr vector);
SJobPtr VectorSJob_get(VectorSJobPtr vector, size_t index);
void VectorSJob_set(VectorSJobPtr vector, size_t index, SJobPtr element);
void VectorSJob_append(VectorSJobPtr vector, SJobPtr element);
SJobPtr VectorSJob_remove_last(VectorSJobPtr vector);

#endif 
