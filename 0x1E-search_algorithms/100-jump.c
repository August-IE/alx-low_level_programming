#include "search_algos.h"

/**
  * jump_search - A function that searches for a value in a sorted array
  *               of integers using jump search algorithm.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  */
int jump_search(int *array, size_t size, int value)
{
    size_t i, jump, step, low, high;

    if (array == NULL || size == 0)
        return (-1);

    step = sqrt(size);
    for (jump = 0; jump < size && array[jump] < value; jump += step)
        printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

    low = jump - step;
    high = jump < size ? jump : size;
    printf("Value found between indexes [%ld] and [%ld]\n", low, high - 1);

    for (i = low; i < size && i < high; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
