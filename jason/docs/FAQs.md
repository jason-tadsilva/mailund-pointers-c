## FAQs - C Programming 

#### Q: How to print the result returned by `sizeof`?

- Using either `%lu` or `%zu` format specifier

```C
printf("sizeof(char) = %zu\n", sizeof(char));
printf("sizeof(char*) = %lu\n", sizeof(char*));
```

#### Q: Why `sizeof(char)` is 1 byte and `sizeof(char*)` is 4 bytes?

- A `char*` is just a pointer to some memory.
- Having a size of whatever a pointer is on OS architecture (8 bytes would indicate a 64-bit architecture, 4 bytes would indicate 32-bit).

- Since pointers convey no information about the size of the allocation they point to.
- `sizeof` will not evaluate to the size of the allocation, it will simply tell you how large the pointer is. 
-  `sizeof` is a compile time construct; its value is evaluated fully at compile time.

```C
char *ptr = "123456789";
char str[10] = "12345";
int numbers[10];

printf("sizeof(ptr) = %zu\n", sizeof ptr); // sizeof(ptr) = 8
printf("sizeof(str) = %zu\n", sizeof str); // sizeof(str) = 10
printf("sizeof(numbers) = %zu\n", sizeof numbers); // sizeof(numbers) = 40
```

- `sizeof(ptr)` evaluates the size of the pointer. The value will typically be 4 (32-bit) or 8 (64-bit).
- `sizeof(*ptr)` evaluates the size of char. (1)
- `sizeof(str)` evaluates the size of the array. (Its size is 10 bytes, even though only 6 were assigned.)
- `sizeof(numbers)` will evaluate to sizeof(int) * 10

#### Q: The **character literal** in C and C++

- In C language, **character literal** is not a `char` type. C considers **character literal** as integer. So, there is no difference between `sizeof('a')` and `sizeof(1)`.

- So, the `sizeof` **character literal** is equal to `sizeof` integer in C.

- In C++ language, **character literal** is type of `char`. 


#### Q: Why `char` has only 1 byte?

- A `char` represents an ASCII character. As there are only 256 characters (0 - 255) in the (extended) ASCII CODE.  
- As 1 byte = 8 bits, it's enough to represent numbers from 0 to 255.