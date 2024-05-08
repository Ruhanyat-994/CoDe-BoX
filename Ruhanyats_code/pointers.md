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
- We use & for memory address
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
    printf("%d\n", *ptr);
    printf("%d\n", myAge);
    printf("%p\n", *ptr);
}
```
<b>Output:</b>
```plaintext
00000000005ffe94
00000000005ffe94
50
50
0000000000000032
```

- **Certainly! When you use printf("%p\n", \*ptr);, you're telling the program to print the memory address stored in the location pointed to by ptr. However, instead of printing the memory address, it interprets the value stored at that memory address (50) as a memory address itself. Since 50 isn't a valid memory address, it's printed as 0000000000000032**

- **The output "0000000000000032" is the hexadecimal representation of the integer value `50`. In hexadecimal, `50` is represented as `32`. So, when `printf("%p\n", *ptr);` is executed, it interprets the value `50` as a memory address and prints its hexadecimal representation, which is `0000000000000032`.**


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

```c
#include<stdio.h>

int main()
{
    int myAge[4] = {12, 14, 15, 15};
    int *ptr = myAge; 

    for(int i = 0; i < 4; i++)
    {
        printf("%d\n", *ptr);  
        (*ptr) += i;           
        ptr++;                 
    }

    return 0;
}

```

## Some basics Again!

```c
#include<stdio.h>

int main()
{
    int a=10;
    int *p;
    p= &a;
    printf("%d %d %d %d\n",a,&a,*p,p);
}

```
**\*p is carrying the value of the address of a, p is carrying only the address**

**Pointers doesn't have any datatype the datatype in front of a pointer indecates the datatype of the address that the pointer is holding**

### Pointers Problem Solve

1. > <b>"WAP that will take two integers as input using pointers. And multiply the two values and display the results"</b>

```c
#include<stdio.h>

int main()
{
    int a,b;
    int *p,*q;
    scanf("%d %d",p,q);
    int result = (*p)*(*q);
    printf("%d\n",result);
    return 0;

}

```
![pointer-1](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/4fc8e9a5-2171-4474-adad-59933dc09d35)

![pointer-2](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/656c65a5-5675-46f5-b63c-ce8d4dfe619a)


2. 
![pointer-3](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/16b11758-b962-47b7-8b76-f18a09c2bcfe)

### Swaping
```c
#include<stdio.h>
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;

}
int main()
{
    int x=4,y=5;
    printf("x : %d , y : %d \n",x,y);
    swap(&x,&y);
    printf("x : %d , y : %d \n",x,y);
}
```
![pointer-4](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/80c63176-4182-4d4e-bdec-cbb45d3f5b49)


#### A simple example:
```c
#include<stdio.h>
void printing(int *x)
{
    *x = *x +5;

}
int main()
{
    int a;
    scanf("%d",&a);
    printf("a:%d\n",a);
    printing(&a);
    printf("a:%d\n",a);
}
```
