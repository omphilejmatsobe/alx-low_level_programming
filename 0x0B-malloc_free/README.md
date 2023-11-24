# 0x0B - malloc_free 📝

Let's learn C. This is the first step to learning the awesome C programming language.

## Introduction

C is a general-purpose low-level programming language created in the 1970s by Dennis Ritchie.
It is used to create system software that directly interacts with the hardware devices, drivers, kernels, OS, databases, compilers etc.

## Learning Objectives :bookmark_tabs:

* The difference between automatic and dynamic allocation.
* What is malloc and free and how to use them.
* Why and when use malloc.
* How to use valgrind to check for memory leak.
  
## Tasks :heavy_check_mark:

0. Function that creates an array of chars, and initializes it with a specific char.
1. Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
2. Function that concatenates two strings.
3. Function that returns a pointer to a 2 dimensional array of integers.
4. Function that frees a 2 dimensional grid previously created by your alloc_grid function.
5. Function that concatenates all the arguments of your program.
6. Function that splits a string into words.

## Results :chart_with_upwards_trend:

| Filename |
| ------ |
| [0-whatsmyname.c](https://github.com/omphilejmatsobe/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c)|
| [1-args.c](https://github.com/omphilejmatsobe/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c)|
| [2-args.c](https://github.com/omphilejmatsobe/alx-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c)|
| [3-mul.c](https://github.com/omphilejmatsobe/alx-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c)|
| [4-add.c](https://github.com/omphilejmatsobe/alx-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c)|
| [100-change.c](https://github.com/omphilejmatsobe/alx-low_level_programming/blob/master/0x0B-malloc_free/100-argstostr.c)|
| [101-change.c](https://github.com/omphilejmatsobe/alx-low_level_programming/blob/master/0x0B-malloc_free/101-strtow.c)|

## Additional info :construction:
### Resources

- GLIBC 2.24
- gcc 4.8.4
- betty linter 0.32


### Try It On Your Machine computer:	
```bash
git clone https://github.com/omphilejmatsobe/alx-low_level_programming.git
cd 0x0B-malloc_free
gcc -Wall FILENAME.c
```

