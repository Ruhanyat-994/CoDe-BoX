# String
---
- The difference between string and a character array is '\0'

![ ](https://media.geeksforgeeks.org/wp-content/uploads/20230412184146/Strings-in-C.webp)

- We can declare a string without the size.
```C
char str_name[]="MianAlRuhanyat";
```
- We can also define it by size
```C
char str_name[90]="MianAlRuhanyat";
```
- We can also assign manually
```C
char str[5]={'M','i','a','n','/0'}
```
## Null Terminator
- ```strlen``` is the function that terminates the null char and shows only the chars before the null chars.
```C
#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="HelloWorld";
    printf("%s\n",str);

    int length = 0;
    length = strlen(str);

    printf("%d\n",length);

    return 0;
}
```
## Output
```plaintext
HelloWorld
10
```

## String Input

- We can use ```scanf()``` to take input 
- We don't need to put & before the str_name
```C
#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    scanf("%s",str);
    printf("%s\n",str);
    return 0;
}
```
- We can't input spaces here!

## Taking whitespaces
- We can use ```fgets()```
- We can also use only ```gets()```
- We can use ```puts()``` for printing 

```C
#include<stdio.h>
#include<string.h>

int main()
{
   char str[50];
   gets(str);
   puts(str);
   return 0;
   
}
```
## Output
```plaintext
hello world 
hello world
```
## Standard string library

| Function Name  | Description                                                   |
|----------------|---------------------------------------------------------------|
| strlen(string_name) | Returns the length of string name.                            |
| strcpy(s1, s2)  | Copies the contents of string s2 to string s1.                |
| strcmp(str1, str2) | Compares the first string with the second string. If strings are the same it returns 0. |
| strcat(s1, s2)  | Concatenates s1 string with s2 string and stores the result in the first string. |
| strlwr()        | Converts string to lowercase.                                 |
| strupr()        | Converts string to uppercase.                                 |
| strstr(s1, s2)  | Finds the first occurrence of s2 in s1.                       |

