#ifndef QUEUE_H
#define QUEUE_H 1

#include <stddef.h>

typedef struct QueueInt *QueueIntPtr;

QueueIntPtr QueueInt_new(size_t size);
// need to provide size of queue how many maximum operations you need to perform

void QueueInt_delete(QueueIntPtr queue);
//frees the memory associated with the queue when you are done with it.

void QueueInt_enqueue(QueueIntPtr queue, int e);
// Adds an integer e to the back of the queue.

int QueueInt_dequeue(QueueIntPtr queue);
// Removes and returns the integer at the front of the queue.

int QueueInt_peek(QueueIntPtr queue);
// Returns the integer at the front of the queue without removing it.

int QueueInt_is_empty(QueueIntPtr queue);
// Returns a true/false value (usually 1 for true, 0 for false) if something in queue and if it is empty

#endif