/*
  A header file, ending in .h can be used in C with 
  #include, to fetch the header file and include the file 
  inside the file, combining it with the current file. It's
  similar to a module, but where you can only declare
  constants and functions. #include can only be used on the
  global scope, and tells the preprocessor to used the
  declarations at this point. By convention, #include always 
  figures at the top of the file. 
*/

#include <stdio.h>

/*
  the main function, returns an int value, 0 for unsucessful
  value, and 1 for sucessful value. You could theoretically
  return 3, or 4 and the program would run, but it's not
  recommended.

  You can pass in two parameters in main(), argc, the number
  of command line parameters and argv, the aforementioned
  parameters. You can use them if you want to use passed in
  parameters inside your executable file.

  argc is an integer in this context, and
  char* in argv is a pointer and (when annotating) is to
  declare an array.

  a pointer is a data type identified with *, that points
  to a memory address (the pointer stores the memory value),
  a location or identifier that tells where the value is
  situated in memory.

  but knowing the memory address of the variable itself may
  not help much. If we had a pointer ptr, we could
  dereference it in order to obtain the value :

  int num = 20;
  int* ptr = &num;

  int value = *ptr; <<< here the pointer is dereferenced

  Pointers allows us to do many operations.
    1. Allocate and deallocate values during execution :
       this can help us create data dynamic data structures
    2. Passing parameters into a function without copying
       the parameter value ;
    3. Allow indirect access to values : Since the pointer
       stores the memory address rather than the integrity
       of the data ;
    4. Avoid value duplication : Multiple pointers can
       point to the same memory value, to avoid duplication
       of data ;
    5. Low level operations ;

  Many of these operations need dereferencing in order to
  work with the value.
*/

// Here brackets represents a code block, or a scope ;
int main(int argc, char *argv[])
{

  /*
    printf() is for outputting in the I/O, values, as a
    formatted string. You can use placeholders to display
    the specified types :

    %d : integers
    %i : identical to %d in this context, but cannot be
    used intechangably in some contexts. In other contexts
    it can represent signed or unsigned integers but also
    hexadecimal numbers or octal numbers ;

    %u : unsigned decimal numbers ;
    %f: floating point numbers ;
    %c: a single character ;
    %s: string of characters ;
    %p: pointer address ;
    %x or %X: unsigned hexadecimal integers %x is for
      lowerase hexadecimal and %X for uppercase ;
    %o: unsigned octal integers ;
    %e or %E: numbers in scientific notation. %e is for
      lowercase e and %E is for uppercase E ;
    %g or %G: %g switches between %f and %e depending on
      the magnitude of the number, and %G switches between
      %E and %F for depending on the magnitude of the
      magnitude of the number ; Use double or float, instead 
      of int to print these numbers ; 

    %zu : refers to an argument of size_t (when printing) 
      usually obtained with the sizeof function, representing
      the size of objects in bytes.

    every placeholder's value are used as parameters of 
    printf(), such as this : 

    int num = 8;  
    int num2 = 16; 
    printf("%d %d", num, num2); // 8 16 

    of course, you can also use litteral values inside the
    printf function. New lines are not inserted automatically 
    so either append a new line character (\n) at the start 
    or the end of the prinf statement or use puts() to have 
    a print with a new line 
  */

  printf("Hello world !"); // Hello world !
  return 0;
}