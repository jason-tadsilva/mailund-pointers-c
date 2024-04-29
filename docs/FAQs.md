## FAQs - C Programming 

#### Q: How to print the result returned by `sizeof`?

**A**: 

- Using either `%lu` or `%zu` format specifier

```C
printf("sizeof(char) = %zu\n", sizeof(char));
printf("sizeof(char*) = %lu\n", sizeof(char*));
```

#### Q: Why `sizeof(char)` is 1 byte and `sizeof(char*)` is 4 bytes?

#### Q: The **character literal** in C and C++

**A**: 

- In C language, **character literal** is not a `char` type. C considers **character literal** as integer. So, there is no difference between `sizeof('a')` and `sizeof(1)`.

- So, the `sizeof` **character literal** is equal to `sizeof` integer in C.

- In C++ language, **character literal** is type of `char`. 