MORE MALLOC FREE

#0 void *malloc_checked(unsigned int b); :  a function that allocates memory using malloc.

#1 char *string_nconcat(char *s1, char *s2, unsigned int n); : a function that concatenates two strings (the  returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated).

#3 void *_calloc(unsigned int nmemb, unsigned int size); : a function that allocates memory for an array, using malloc. the _calloc function allocates memory for an array of nmemb element of size bytes each and returns a pointer to the allocated memory.

#4 int *array_range(int min, int max); : a function for creates an array of integers. The array created should contain all the values from min to max included.
