#include <stdio.h>

int main()
{
  /*
    int represents an integer, ranging from (-2^15 + 1) to
    (2^15 - 1) or from -32,767 to 32,767. The range includes
    2^16 possible numbers, including the endpoints. int is a
    common number type.
  */
  int integer = 0;

  /*
    float represents a floating point number, conform with
    the IEEE 754 standard, ranging from ±1.2e10^-38 to
    ±3.4e10^38. It has 7 digits of precision. A float can
    also be a valid int value, such as 13, 43 or 823. You
    can use the "f" suffix to specify that the value is a 
    float. 
  */
  float floating_point = 12.4f;

  /*
    a double also represents a floating point number, also
    conform with the IEEE 754 standard. It has a greater
    range than a float, ranging from ±2.2e10^-308 to
    ±1.8e10^308, with a 15 digit precision. It can also
    store integers, such as 32, or 54. Altough you can use 
    a "d" suffix to specify the type, it is quite redundant
    since you can see the type by the length of the number. 
  */
  double floating_double = 293.29;

  /* 
    a long represents an integer of a greater size, ranging
    from (-2^31 + 1) to (2^31 - 1), or from -2 147 483 647 
    to 2 147 483 647. This range includes 2^32 numbers. You
    can use the "L" suffix to specify that this type is a 
    long. 
  */

  long long_number = 283L;

  /* 
    a long long is an even larger integer than long. It 
    ranges from (-2^63 + 1) to (2^63 - 1). This range 
    includes 2^64 numbers. You can use the "LL" suffix 
    to specify that a number is a long long.

    on 32-bit platforms, long long should still work, 
    but compiler extensions are needed, if you aren't 
    using say, GNU. It may behave slightly differently 
    on the implementation. So use the "LL" suffix to 
    ensure compatibily with different platforms ; 
  */

  long long num = 2343223434323LL; 

  /* 
    unsigned is a keyword that makes the type non-negative. 
    Also, it doubles the positive range that is provided so 
    an 
      - unsigned int, would range from 0 to 2^16 ;
      - unsigned long, would range from 0 to 2^32 ;
      - unsigned long long would range from 0 to 2^64 ; 

    It is to mention that unsigned cannot be applicable to 
    non-integer types, float and double. Usigned has also a 
    suffix, for each type of integer :
      - unsigned int : U
      - unsigned long : UL
      - unsigned long long : ULL
  */
  unsigned non_negative = 2834U; 

  /* 
    It is important to know that types in C are not 
    checked by the compiler, and assigning a type to 
    another is possible, just that it might ensue in bugs 
    and errors in your program, if the assignment is valid. 
  */

  /* 
    char represents a single character, delimited by single 
    quotes ('') unlike strings. They contain a single 
    character; 
  */
  char character = 's'; 

  /* 
    strings in C are not a built in data type, instead, 
    they are an array of characters terminated by the null 
    character (\0). The character is not included in the 
    length of the string. 
  */

  char str[] = "hello"; 

  /* 
    [] are to reprsente an array in C. But it uses square 
    brackets are used to represent the array. Brackets 
    can have a number inside to specify the number of 
    elements inside that array. 
    
    If the number of elements specified is smaller than the 
    numbers of elements in the array, the compiler throws an 
    error. 

    If the number of elements specified is greater than the 
    numbers of elements in the array, the compiler fils the 
    rest of the array elements with 0. 
  */

  int numbers[3] = {1, 2, 3};

  return 0;
}