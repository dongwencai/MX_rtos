#include "fifo.h"
/*****************************************************************************
 * Static functions
 *****************************************************************************/
#define FIFO_ELEM_AT(p_fifo, index) ((uint8_t*) ((uint8_t*) p_fifo->elem_array) + (p_fifo->elem_size) * (index))
#define FIFO_IS_FULL(p_fifo) (p_fifo->tail + p_fifo->array_len == p_fifo->head)
#define FIFO_IS_EMPTY(p_fifo) (p_fifo->tail == p_fifo->head)

#define FIFO_MUTEX_INIT(p_fifo)		do{		\
		if(p_fifo->fifo_mutex_init)			\
			p_fifo->fifo_mutex_init();		\
	}while(0)

#define FIFO_MUTEX_LOCK(p_fifo)		do{		\
			if(p_fifo->fifo_mutex_lock) 	\
				p_fifo->fifo_mutex_lock();	\
		}while(0)

#define FIFO_MUTEX_UNLOCK(p_fifo)	do{		\
			if(p_fifo->fifo_mutex_unlock )	\
				p_fifo->fifo_mutex_unlock();  \
		}while(0)


/*****************************************************************************
 * Interface functions
 *****************************************************************************/
void fifo_init(fifo_t* p_fifo)
{
    /* round off to nearest(lower) size that can use & operator instead of modulo */
    uint32_t i = 32;
    while (!((p_fifo->array_len >> --i) & 0x01));
    p_fifo->array_len = (1 << i);

    p_fifo->head = 0;
    p_fifo->tail = 0;
	FIFO_MUTEX_INIT(p_fifo);
}

uint32_t fifo_push(fifo_t* p_fifo, const void* p_elem)
{
		void* p_dest;
    if (p_elem == NULL)
    {
        return FIFO_ERROR_NULL;
    }

    FIFO_MUTEX_LOCK(p_fifo);
    if (FIFO_IS_FULL(p_fifo))
    {
        FIFO_MUTEX_UNLOCK(p_fifo);
        return FIFO_ERROR_NO_MEM;
    }

    p_dest = FIFO_ELEM_AT(p_fifo, p_fifo->head & (p_fifo->array_len - 1));

    if (p_fifo->memcpy_fptr)
        p_fifo->memcpy_fptr(p_dest, p_elem);
    else
        memcpy(p_dest, p_elem, p_fifo->elem_size);

    ++p_fifo->head;
    FIFO_MUTEX_UNLOCK(p_fifo);
    return FIFO_SUCCESS;
}

uint32_t fifo_pop(fifo_t* p_fifo, void* p_elem)
{
	FIFO_MUTEX_LOCK(p_fifo);

    if (FIFO_IS_EMPTY(p_fifo))
    {
        FIFO_MUTEX_UNLOCK(p_fifo);
        return FIFO_ERROR_NULL;
    }

    if (p_elem != NULL)
    {
        void* p_src = FIFO_ELEM_AT(p_fifo, p_fifo->tail & (p_fifo->array_len - 1));

        if (p_fifo->memcpy_fptr)
        {
            p_fifo->memcpy_fptr(p_elem, p_src);
        }
        else
        {
            memcpy(p_elem, p_src, p_fifo->elem_size);
        }
    }

    ++p_fifo->tail;

    FIFO_MUTEX_UNLOCK(p_fifo);
    return FIFO_SUCCESS;
}

uint32_t fifo_peek_at(fifo_t* p_fifo, void* p_elem, uint32_t elem)
{
		void* p_src;
    if (p_elem == NULL)
    {
        return FIFO_ERROR_NULL;
    }
	
		FIFO_MUTEX_LOCK(p_fifo);

    if (fifo_get_len(p_fifo) <= elem)
    {
        FIFO_MUTEX_UNLOCK(p_fifo);
        return FIFO_ERROR_NULL;
    }

    p_src = FIFO_ELEM_AT(p_fifo, (p_fifo->tail + elem) & (p_fifo->array_len - 1));

    if (p_fifo->memcpy_fptr)
        p_fifo->memcpy_fptr(p_elem, p_src);
    else
        memcpy(p_elem, p_src, p_fifo->elem_size);

    FIFO_MUTEX_UNLOCK(p_fifo);
    return FIFO_SUCCESS;
}

uint32_t fifo_peek(fifo_t* p_fifo, void* p_elem)
{
    return fifo_peek_at(p_fifo, p_elem, 0);
}

void fifo_flush(fifo_t* p_fifo)
{
    p_fifo->tail = p_fifo->head;
}

uint32_t fifo_get_len(fifo_t* p_fifo)
{
    return (p_fifo->head - p_fifo->tail);
}

 bool fifo_is_full(fifo_t* p_fifo)
{
    return FIFO_IS_FULL(p_fifo);
}

bool fifo_is_empty(fifo_t* p_fifo)
{
    return FIFO_IS_EMPTY(p_fifo);
}
