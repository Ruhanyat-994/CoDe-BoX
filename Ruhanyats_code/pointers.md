# Pointers in C

- When we store something in a variable it stores it in its memory address.

#### Memory Address:
```c
#include<stdio.h>
#include<string.h>

int main()
{
    int myAge = 50;
    printf("%p",&myAge);
}
```
<b>Output:</b> 
```plaintext
000000ca66fffddc
```
- Output is in the Hex format

## Basics of Pointers

A pointer is a variable that stores the memory address of another variable as its value.
A pointer variable points to a data type (like int) of the same type, and is created with the * operator.

```c
int myAge = 43;     // An int variable
int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

// Output the value of myAge (43)
printf("%d\n", myAge);

// Output the memory address of myAge (0x7ffe5367e044)
printf("%p\n", &myAge);

// Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);
```
## Difference Between values:
```c
#include<stdio.h>

int main()
{
    int myAge = 50;
    int * ptr = &myAge;

    printf("%p\n",&myAge); /// hex of memory
    printf("%p\n", ptr); /// Hex of memory stored in ptr
    printf("%d\n", *ptr);/// value of memory stored in ptr
}
```
<b>Output:</b>
```plaintext
00000000005ffe94
00000000005ffe94
50
```
## Arrays with Pointer
```c
#include<stdio.h>

int main()
{
    int myAge[4]={12,14,15,15};
    for(int i=0;i<4;i++)
    {
        printf("%p\n",&myAge);
    }
}
```
## Output 
```plaintext
00000000005ffe80
00000000005ffe80
00000000005ffe80
00000000005ffe80
```
- It will show the hex of the values of memory address of the myAge array


> #### " We know that compiler stores 4 bytes of memory for each array" 

- so we can check how many bytes are being taken by our array
```c
#include<stdio.h>

int main()
{
    int myAge[4]={12,14,15,15};
    
    printf("%lu",sizeof(myAge));
}
```
<b> Output:</b> 
```
16
```
- (4 x 4) = 16 , 4 bytes for each array.

## Printing the array values
<b>This is for printing the first element of the array</b>

```c
#include<stdio.h>

int main()
{
    int myAge[4]={12,14,15,15};
    
    printf("%d\n",*myAge);
}

```
<b>Output:</b>
```
12
```

<b>This is for printing all elements through looping</b>
