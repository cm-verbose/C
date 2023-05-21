#include <stdio.h>
#include <float.h>

int main()
{
  /* 
    By convention, C's variables are to be written in snake
    case, so lowercase words are separated with underscores 
  */

  /* 
    short represents a small integer, of 2 bytes and ranges
    from (-2^16 + 1) to (2^16 - 1), from -32 767 to 32 767.
    It includes thus 2^16 numbers, endpoints included. 
  */
  
  short small = 23; 

  /*
    int represents an integer, ranging from (-2^31 + 1) to
    (2^31 - 1) or from -2,147,483,648 to 2,147,483,648. The 
    range includes 2^32 possible numbers, including the 
    endpoints. int is a common number type.
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
    store integers, such as 32, or 54. Although you can use 
    a "d" suffix to specify the type, it is quite redundant
    since you can see the type by the length of the number. 
  */
  double floating_double = 293.29;

  /* 
    a long double is a double that can store a more precise
    floating point number. Ranges may vary, and if you want 
    to find it, use LDBL_MIN and LDBL_MAX from the 
    <float.h> header file. 
  */
  long double long_double = 129.283729237326238234;

  /* 
    a long represents an integer of a greater size, ranging
    from (-2^31 + 1) to (2^31 - 1), or from -2 147 483 647 
    to 2 147 483 647. This range includes 2^32 numbers. You
    can use the "L" suffix to specify that this type is a 
    long. On 64-bit systems, the value range can be 
    identical to long long's, from (-2^63 + 1) to (2^63 - 1)  
  */

  long long_number = 283L;

  /* 
    a long long is an even larger integer than long. It 
    ranges from (-2^63 + 1) to (2^63 - 1). This range 
    includes 2^64 numbers. You can use the "LL" suffix 
    to specify that a number is a long long.

    on 32-bit platforms, long long should still work, 
    but compiler extensions may be needed, if you aren't 
    using GNU. It may differ slightly on the 
    implementation. So use the "LL" suffix to ensure 
    compatibility with different platforms ; 
  */

  long long num = 2343223434323LL; 

  /* 
    unsigned is a keyword that makes the type non-negative. 
    Also, it doubles the positive range that is provided so 
    an 
      - unsigned short, would range from 0 to 2^16 ;
      - unsigned int, would range from 0 to 2^32 ;
      - unsigned long, would range from 0 to 2^32 ;
      - unsigned long long would range from 0 to 2^64 ; 

    It is to mention that unsigned cannot be applicable to 
    non-integer types, float and double. Unsigned has also 
    a suffix, for each type of integer :
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
    Constants are for declaring immutable data, so their 
    values cannot change. This can be useful for declaring
    mathematical constants or specific values ;
  */
  const int PI = 3.14159265359; 

  /* 
    [] are to represents an array in C. But it uses square 
    brackets are used to represent the array. Brackets 
    can have a number inside to specify the number of 
    elements inside that array. 
    
    If the number of elements specified is smaller than the
    numbers of elements in the array, the compiler throws 
    an error. 

    If the number of elements specified is greater than the 
    numbers of elements in the array, the compiler fills 
    the remaining array elements with 0. 
  */

  int numbers[3] = {1, 2, 3};

  /* 
    The void type represents the absence of value. 
    - In function declarations, they serve to indicate that
      the function does not return a value ; 
    - As a function parameter, this indicates that the 
      function does not expect any parameter ;
    - A void* pointer can hold a pointer of any type ;
    - Used as a parameter in a function, it is equivalent 
      to calling the function without any parameters. So 
      for a function t, t() and t(void) would have the 
      same effect. So use t() instead of t(void), since it 
      is shorter ;
  */


  /* 
    structs in C allow us to group values together. You 
    can access the values of a struct by using the [.] 
    operator to get the value from the field. You have 
    functions in a struct with function pointers :

    struct Calculator{
      int (*add)(int, int); 
    }

    int add (int x, int y){
      return x + y
    }
    calculator.add = add;

    Functions cannot be directly inserted inside structs
    since it goes against the syntax of C. 
  */
  struct Person
  {
    char name[]; 
    int age;
  };

  /* 
  instantiating a struct here, char name[] has the value of 
  "John" and age has a value of 18.
  */
  struct Person person1 = {"John", 18}; 

  /* 
    an enum or enumeration is a set of named constants, 
    used to represent possible states of something. Enums
    values are automatically set as their position when 
    declared. So the first item would have the value 1
    the second would have the value 2 and so on. You can 
    also set the values of the enum manually : 

    enum RGBColor {
      R = 55
      G = 23
      B = 29
    }
  */
  enum Days{
    MONDAY, 
    TUESDAY, 
    WEDNESDAY,
    THURSDAY, 
    FRIDAY,
    SATURDAY, 
    SUNDAY 
  };

  enum Days today = MONDAY; 

  /* 
    A union stores multiple variables at a single memory 
    address. Similar to structs, you can use the . operator
    in order to access a value inside the union. Unions are 
    useful for using many variables while preserving memory
  */
  union Data
  {
    char data[];
    int id;
  };

  /* 
    typedef allows us to create an alias to a type. You can
    use it with unions to create other types then the 
    preexisting ones. 
  */
  typedef union{
    long long intValue; 
    long double floatValue;
  } LargeNumber; 

  /* 
    You can change types with type casting, either with
    implicit type casting or explicit type casting. 
  */

  /* casting num1 implicitly to double */
  int num1 = 10; 
  double num2 = num1;

  /* casting num3 to num4 as int from double */
  double num3 = 2.39; 
  int num4 = (int) num3; 

  return 0;
}