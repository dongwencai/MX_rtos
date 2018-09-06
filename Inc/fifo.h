#ifndef _FIFO_H_
#define _FIFO_H_

#include <stdint.h>
#include <stdbool.h>

/* specialized function pointer for copying memory between two instances */
typedef void (*fifo_memcpy)(void* dest, const void* src);

typedef struct
{
	void* elem_array;
	void (*fifo_mutex_init)();
	void (*fifo_mutex_lock)();
	void (*fifo_mutex_unlock)();
	uint32_t elem_size;
	uint32_t array_len;        /* auto 2^n align */
	uint32_t head;
	uint32_t tail;
  fifo_memcpy memcpy_fptr; /* must be a valid function or NULL */
} fifo_t;

void fifo_init(fifo_t* p_fifo);
uint32_t fifo_push(fifo_t* p_fifo, const void* p_elem);
uint32_t fifo_pop(fifo_t* p_fifo, void* p_elem);
uint32_t fifo_peek_at(fifo_t* p_fifo, void* p_elem, uint32_t elem);
uint32_t fifo_peek(fifo_t* p_fifo, void* p_elem);
void fifo_flush(fifo_t* p_fifo);
uint32_t fifo_get_len(fifo_t* p_fifo);
bool fifo_is_full(fifo_t* p_fifo);
bool fifo_is_empty(fifo_t* p_fifo);

#define FIFO_SUCCESS 0
#define FIFO_ERROR_NULL 1
#define FIFO_ERROR_NO_MEM 2

#ifndef NULL
#define NULL (void *)0
#endif

#endif /* _FIFO_H_ */
