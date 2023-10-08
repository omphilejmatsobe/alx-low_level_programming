# 0x09 - Static Libraries 📝

Let's learn C. This is the first step to learning the awesome C programming language.

## Introduction

C is a general-purpose low-level programming language created in the 1970s by Dennis Ritchie.
It is used to create system software that directly interacts with the hardware devices, drivers, kernels, OS, databases, compilers etc.

## Learning Objectives :bookmark_tabs:

* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm
  
## Tasks :heavy_check_mark:

0. library libmy.a containing all the functions listed below.
1. Script that creates a static library called liball.a from all the .c

```
   int _putchar(char c);
   int _islower(int c);int _isalpha(int c);
   int _abs(int n);int _isupper(int c);int _isdigit(int c);int _strlen(char *s);
   void _puts(char *s);
   char *_strcpy(char *dest, char *src);
   int _atoi(char *s);
   char *_strcat(char *dest, char *src);
   char *_strncat(char *dest, char *src, int n);
   char *_strncpy(char *dest, char *src, int n);
   int _strcmp(char *s1, char *s2);
   char *_memset(char *s, char b, unsigned int n);
   char *_memcpy(char *dest, char *src, unsigned int n);
   char *_strchr(char *s, char c);
   unsigned int _strspn(char *s, char *accept);
   char *_strpbrk(char *s, char *accept);
   char *_strstr(char *haystack, char *needle);
```

## Results :chart_with_upwards_trend:

| Filename |
| ------ |
| [libmy.a](https://github.com/omphilejmatsobe/alx-low_level_programming/blob/master/0x09-static_libraries/libmy.a)|
| [create_static_lib.sh](https://github.com/omphilejmatsobe/alx-low_level_programming/blob/master/0x09-static_libraries/create_static_lib.sh)|
## Additional info :construction:
### Resources

- GLIBC 2.24
- gcc 4.8.4
- betty linter 0.32


### Try It On Your Machine computer:	
```bash
git clone https://github.com/omphilejmatsobe/alx-low_level_programming.git
cd 0x09-static_libraries
gcc -Wall FILENAME.c
```

