# C - more singly linked lists

In this project i learned more about singly linked list including how to insert node in middle of the list, inserting at the beginning of the list, end of the list, deleting node at the beginning and at any index of the list.

## Header File :file_folder:

* [lists.h](./lists.h): Header file that containing the definitions and the prototype for all types and function written for the project.

|-------------------------------|---------------------------------------------------------------------------------------|
| Type/File			| Definition/Prototype					      		  		|
|-------------------------------|---------------------------------------------------------------------------------------|
|`0-print_listint.c`		| `size_t print_listint(const listint_t *h);`		      		  		|
|`1-listint_len.c`		| `size_t listint_len(const listint_t *h);`	 	      		  		|
|`2-add_nodeint.c`		| `listint_t *add_nodeint(listint_t **head, const int n);`     		  		|
|`3-add_nodeint_end.c`		| `listint_t *add_nodeint_end(listint_t **head, const int n);`		  		|
|`4-free_listint.c`		| `void free_listint(listint_t *head);`					  		|
|`5-free_listint2.c`    	| `void free_listint2(listint_t **head);`				  		|
|`6-pop_listint.c`		| `int pop_listint(listint_t **head);`					  		|
|`7-get_nodeint.c`		| `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);` 		|
|`8-sum_listint.c`		| `int sum_listint(listint_t *head);`					  		|
|`9-insert_nodeint.c`   	| `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`	|
|`10-delete_nodeint.c`  	| `int delete_nodeint_at_index(listint_t **head, unsigned int index);`			|
|`100-reverse_listint.c`	| `listint_t *reverse_listint(listint_t **head);`					|
|`101-print_listint_safe.c`	| `size_t print_listint_safe(const listint_t *head);`					|
|`102-free_listint_safe.c`	| `size_t free_listint_safe(listint_t **h);`						|
|`103-find_loop.c`		| `listint_t *find_listint_loop(listint_t *head);`					|
|-------------------------------|---------------------------------------------------------------------------------------|

##Tasks :page_with_curl:

* **0. Print list**
	* [0-print_listint.c](./0-print_listint.c) This function prints all the elements of a `listint_t` list
	* `Return` the number of nodes

* **1. List length**
	* [1-listint_len.c](./1-listint_len.c): This function returns the number of elements in a linked `listint_t` list

* **2. Add node**
	* [2-add_nodeint.c](./2-add_nodeint.c): This function adds a new node at the beginning of a `listint_t` list and return the address of the new element or `NULL` if it failed.

* **3. Add node at the end**
	* [3-add_nodeint_end.c](./3-add_nodeint_end.c): This function adds a new node at the end of the `listint_t` list and return the address of the new element or NULL if it failed.

* **4. Free list**
	* [4-free_listint.c](./4-free_listint.c): This function frees a `listint_t` list.

* **5. Free**
	* [5-free_listint2.c](./5-free_listint2.c): This function frees a `listint_t` list and sets the `head` to `NULL`

* **6. Pop**
	* [6-pop_listint.c](./6-pop_listint.c): This function that deletes the `head` `node` of a `listint_t` list and returns the `node` data.

* **7. Get node at index**
	* [7-get_nodeint.c](./7-get_nodeint.c): This function returns the nth node of a `listint_t` linked list where index is the index of the `node` starting at `0` and if the `node` does not exist it `return` `NULL`

* **8. Sum list**
	* [8-sum_listint.c](./8-sum_listint.c): This function returns the `sum` of all the `data` (n) of a `listint_t` linked list and if the `list` is empty it `return` `0`


* **9. Insert**
	* [9-insert_nodeint.c](./9-insert_nodeint.c): This `function` inserts a new `node` at a given position. where idx is the `index` of the list where the `new` `node` should be added. Index starts at `0`. It returns the address of the new node or `NULL` if it failed and if its not possible to add the new node at index `idx` new node will not be added and it `return``NULL`


* **10. Delete at index**
	* [10-delete_nodeint.c](./10-delete_nodeint.c): This function deletes the `node` at `index` of `index` of a `listint_t` linked list where `index` is the `index` of the `node` that should be deleted and `index` starts at `0`


* **11. Reverse list**
	* [100-reverse_listint.c](./100-reverse_listint.c): This function reverse a `listint_t` linked list and returns a `pointer` to the first `node of the reversed` list

* **12. Print (safe version)**
	* [101-print_listint_safe.c](./101-print_listint_safe.c): This function the frees a `lintint_t` free lists with a loop

* **13. Free(safe version)**
	* [102-free_listint_safe.c](./102-free_listint_safe.c): This function frees lists with a loop and return size of the list that was free'd

* **14. Find the loop**
	* [103-find_loop.c](./103-find_loop.c): This function finds the loop in a `linked list` The address of the `node` where the `loop` starts, or `NULL` if there is no loop

THIS FILE WAS CREATED BY THAOBAN 
