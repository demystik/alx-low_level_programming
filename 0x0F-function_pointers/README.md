# C - Function pointers

Still on my journey towards being a **Full Stack Software Engineer** at **ALX** and in this project i learned about function pointers in C programming language

## Header File :file_folder:

* [function_pointers.h](./function_pointers.h): Header file containing definitions and prototypes for all tasks done in the project.

## Task :page_with_curl:

	* **0. What's my name**
	* [0-print_name.c](./0-print_name.c): `function` that prints a name.

	* **1. If you spend too much time thinking about a thing, you'll never get it done**
	* [1-array_iterator.c](./1-array_iterator.c): A `C function` that executes a `function` given as a `parameter` on each element of an `array`.
	* `size` is the size of the array
	* `Action` is a pointer to the function

	* **2. To hell with circumstances; I create opportunities**
	* [2-int_index.c](./2-int_index.c):A C function that searches for an integer
	* `size` is the number of elements in the array `array`
	* `cmp` is a pointer to the `function` used to compare `values`
	* `int_index` returns the `index` of the first `element` for which the `cmp` `function` does not `return 0`


	* **3. A goal is not always meant to be reached, it often serves simply as something to aim at**
	* [3-main.c](./3-main.c): File that contains main `function` only
	* [3-op_functions.c](./3-op_functions.c): This file contains the following 5 functions.
	* `op_add`
	* `op_sub`
	* `op_mul`
	* `op_mod`
	* `op_div`

	* [3-get_op_func.c](./3-get_op_func.c):  This file contain the `function` that selects the correct `function` to perform the `operation` asked by the `user`

	* [3-calc.h](./3-calc.h): This file contain all the `function prototypes` and `data structures` used by the `program`.



	* **4. Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker**

	* [100-main_opcodes.c](./100-main_opcodes.c): This program prints the upcodes of its own main function
	* Usage `./main number_of_bytes`

		## Files
	All of the following files are programs written in C:

	| Filename | Description |
	| -------- | ----------- |
	| `0-print_name.c` | Prints a name |
	| `1-array_iterator.c` | Executes a function given as a parameter on each element of an array |
	| `2-int_index.c` | Searches for an integer |
	| `3-calc.h` | Header file that contains all function prototypes and data structures |
	| `3-op_functions.c` | File that contains functions that calculates arithmetic operations |
	| `3-get_op_func.c` | Function pointer that returns the pointer of the arithmetic functions |
	| `3-main.c` | Entry point |
	| `100-main_opcodes.c` | Prints the opcodes of its own main function |

