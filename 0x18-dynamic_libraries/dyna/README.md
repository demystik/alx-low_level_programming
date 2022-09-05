read me file for dynamic library project

syntax for creating dynamic library:
gcc -shared -o libname.so cfilename.c

To check the file type use:
file filename

syntax for compiling with dynamic library
gcc -o executable_file main_file.c -L. -libname_without_extention
e.g:	gcc -o main main.c -L. -lname

-L. = Telling compiler to check current directory for library and the directory needs to be configured in the enviroment

To check configuration
echo $LD_LIBRARY_PATH

To configure:
export $LD_LIBRARY_PATH=path_to_the_directory
e.g: (for current directory) = 	export LD_LIBRARY_PATH=.


To create a library of multiple files :) check these out
convert your .c files to object files usings:
`gcc -c (*.c) file1.c file2.c -fpic`

now create a dynamic lib with all your object files in it using:
`gcc *.o -shared -o lib_name.so`

convert your main.c file to object file using
gcc -c main.c -fpic
or
gcc -c main.c -o main.o

Now create an executable file with main.o using
gcc -o executable_file main.o -L. -lib_name

Then execute an executable.
----------------------------------------------------------
if it cannot open shared object file: No such file or directory while trying to execute an executable
then do ldd to list the library dependencies and for not found one; do
sudo cp not_found_file.so`/usr/lib
or 
export LD_LIBRARY_PATH=working directory path (by pwd)
then execute

