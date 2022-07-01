-Hi

# C - more malloc and free

In the project, I learned more about the `malloc` and `free` and how to go about them with `void pointers`. i also learned how to use `exit` function in C, `realloc` and `calloc`.

## Tests:heavy_check_mark:

* [tests](./tests): Folder of test files provided by Holberton school.

## Header Files :file_folder:

* [main.h](./main.h): Header files containing the prototypes of all the functions written in the project.

| File			|	Prototypes					    		   |
|-----------------------|--------------------------------------------------------------------------|
|`0-malloc_checked.c`	|`void *malloc_checked(unsigned int b);`		    		   |
|`1-string_nconcat.c`	|`char *string_nconcat(char *s1, char *s2, unsigned int n);`		   |
|`2-calloc.c`		|`void *_calloc(unsigned int nmemb, unsigned int size);`    		   |
|`3-array_range.c`	|`int *array_range(int min, int max);`			    		   |
|`100-realloc.c`	|`void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);`|
|`101-mul.c`		|									   |

## Tasks :page_with_curl:



* **0. Trust no one**
* [0-malloc_checked.c](./0-malloc_checked.c): A function that allocate memory using malloc.
	* Returns a pointer to the allocate memory
	* The `malloc_checked function` should cause normal termination with status value of 98





* **1. string_nconcat**
* [1-string_nconcat.c](./1-string_nconcat.c): A function that allocate memory and concatenates two strings

	*The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
	*if the function fails, it should return NULL
	*If n is greater or equal to the length of s2 then use the entire string s2
	 
	
	**2. _calloc**
  * [2-calloc.c](./2-calloc.c): C function that returns a pointer to a newly-allocated space
  in memory for an array, using `malloc`.
    * Allocates memory for an array of `nmemb` elements of `size` bytes each.
    * The memory is set to zero.
    * If `nmemb` = 0, `size` = `0`, or the function fail - returns `NULL`.

* **3. array_range**
  * [3-array_range.c](./3-array_range.c): C function that returns a pointer to a
  newly-allocated space in memory containing an array of integers.
    * The array contains all the values from parameters `min` to `max`, inclusive,
    ordered from `min` to `max`.
    * If `min > max` or the function fails - returns `NULL`.

    ***4. _realloc**
  * [100-realloc.c](./100-realloc.c): C function that reallocates a memory block using
  `malloc` and `free`.
    * The parameter `ptr` is a pointer to the memory previously allocated with
    a call to `malloc: malloc(old_size)`.
    * The paramter `old_size` is the size, in bytes, of the allocated space for `ptr`.
    * The paramter `new_size` is the new size, in bytes, of the new memory block.
    * The contens of `ptr` are copied to the newly-allocated space in the range from the
    start of `ptr` up to the minimum of `old_size` and `new_size`.
    * If `new_size` > `old_size`, the "added" memory is not initialized.
    * If `new_size` == `old_size`, the function returns `ptr`.
    * If `ptr` is `NULL`, the call is equivalent to `malloc(new_size)` for all values of
    `old_size` and `new_size`.
    * If `new_size` = 0 and `ptr` is not `NULL`, the call is equivalent to
    `free(ptr)` and the function returns `NULL`.

* **5. We must accept finite disappointment, but never lose infinite hope**
  * [101-mul.c](./101-mul.c): C program that multiplies two positive numbers.
    * Usage: `mul num1 num2`.
    * The function assumes `num1` and `num2` are passed in base 10.
    * Prints the result followed by a new line.
    * If the number of arguments is incorrect or either of `num1` or `num2`
    contains non-digits, the function prints `Error` followed by a new line and
    exits with a status of `98`.


