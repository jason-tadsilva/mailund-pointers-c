## FAQs - C Programming 

#### Q: How to print the result returned by `sizeof`?

**A**: Using either `%lu` or `%zu` format specifier

```C
printf("sizeof(char) = %zu\n", sizeof(char));
printf("sizeof(char*) = %lu\n", sizeof(char*));
```