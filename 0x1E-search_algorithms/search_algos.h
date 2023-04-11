#ifndef SEARCH_ALGOS_H_
#define SEARCH_ALGOS_H_

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int b_search(int *ptr, int value, size_t l, size_t r);
#endif /* SEARCH_ALGOS_H */
