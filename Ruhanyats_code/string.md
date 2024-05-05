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
## Some Common rules of String:  

- In string we use double quotes 

 ```c
char str[100]="hello world"
```
- But in Char array we use single quotes

- If you declare a string with 7 index and fill only 5 the other two will be replaced by two null chars
```c
char str[7]="Hamid"
```
| Address (Row 1) | &str[0] | &str[1] | &str[2] | &str[3] | &str[4] | &str[5] | &str[6] |
|-----------------|---------|---------|---------|---------|---------|---------|---------|
| Content (Row 2) |   'H'   |   'a'   |   'm'   |   'i'   |   'd'   |  '\0'   |'\0'|

- Here null char is called as EOS character 
- Before null char all the chars are valid chars
- 


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

## Printing Strings

```c
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
}
```
<b>Output:</b>
```plaintext
My name is mian al ruha   
My name is mian al ruha
```
- This loop will run until it gets '\0' or a garbage.

## Case Convertion
- Normal case conversion in C
- Our goal is to convert the value of ch to its lowercase value and vice-versa

```c
#include<stdio.h>
int main()
{
    char ch = 'E';
    ch = ch - 'A'+'a';
    printf("%c",ch);
}
```
- This code will convert the ch value E to e 
- The theory is ......
> 'We will cancel a uppercase representative and add a lowercase representative to get our desired result.For doing the vice-versa we will cancel the lowercase and add the uppercase'

### logic
![alt text](image.png)

- we are adding the distance actually.

### Case conversion in String

#### Question  
<b>Sample Input: AbaCAs</b>  
<b>Sample Output: aBAcaA</b>

```c
#include<stdio.h>
int main()
{
   char str[50];
   gets(str);

   for(int i=0 ; str[i]!='\0';i++)
   {
        if(str[i]>='A' && str[i]<= 'Z')
        {
            str[i]=str[i]-'A'+'a';

        }
        else if (str[i]>='a' && str[i]<= 'z')
        {
            str[i]=str[i]-'a'+'A';
        }
   }
   puts(str);
}
```
## Counting UpperCase and LowerCase String

#### Question  
<b>Sample Input: </b>  
Hello123husH  
<b>Sample Output:</b>  
Hello123husH  
uppercass:2 lowercase:7 digit:3 specialchar:0  

```c
#include<stdio.h>
int main()
{
   char str[50];
   gets(str);

   int upperCase=0;
   int lowerCase = 0;
   int digit = 0;
   int specialChar = 0;


   for(int i=0 ; str[i]!='\0';i++)
   {
        if(str[i]>='A' && str[i]<= 'Z')
        {
            upperCase++;

        }
        else if (str[i]>='a' && str[i]<= 'z')
        {
            lowerCase++;
        }
        else if(str[i]>='0' && str[i]<= '9')
        {
            digit++;
        }
        else{
            specialChar++;
        }
   }
   puts(str);
   printf("uppercass:%d lowercase:%d digit:%d specialchar:%d",upperCase,lowerCase,digit,specialChar);

}
```
## Some String Operations
- String Length
- String Concatenate 
- String Copy
- Palindrome (mom , radar, rotator) . If you reverse the string it will remain the same.
- String Reverse
- String Comparison 

## String Length
- Before null char all valid char is a length of string  

```C
#include<stdio.h>
int main()
{
    char str[50];
    gets(str);
    int length = 0;

    for(int i=0; str[i]!='\0';i++)
    {
        length++;

    }
    printf("The length of the string is:%d\n",length);
}
```
#### Another way 
```c
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str);
    int length = strlen(str);
    printf("The length of the string is:%d\n",length);
}
```
## String Copy
<b> 1. While copying a string the length of the two string should be same.  

Process:  
</b>

1. Manually
```c
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    gets(str1);
    char str2[50]={'\0'};
    for(int i=0;str1[i]!='\0';i++)
    {
        str2[i] = str1[i];
    }
    printf("%s\t%s\n",str1,str2);
    return 0;
}
```
- Here we are changing str2's null value with the value of str1 .
- Here string size have to be same.  


2. Using Library Function
```c
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    gets(str1);
    char str2[50]={'\0'};
    strcpy(str2,str1);
    printf("%s\t%s\n",str1,str2);
    return 0;
}

```
## String Concatenation
1. Manually
```c
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    gets(str1);
    char str2[50];
    gets(str2);
    int length = strlen(str1);
    int j = length;
    for(int i=0;str2[i]!=0;i++) 
    {
        str1[j]=str2[i];
        j++;
    }
    str1[j]='\0';
    printf("%s\t%s\n",str1,str2);
}
```
- First of all what is concatenation? 
    1. Its nothing but adding to string together.  

- In the for loop we have used str2 because we will copy the str2 to str1 
- We take the length of str1 because we will find the length and set it to another int J and we will change the value the null char of str1 with the string str2.

2. Using Library Function

```c
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    gets(str1);
    char str2[50];
    gets(str2);
    
    strcat(str1,str2);
    
    puts(str1);
}

```
<b>Output</b>
```plaintext
hello 
world
hello world
```
- strcat(str1,str2) it means all the string of str2 will be concatenated with str1 and will store that value to str1
- So we print only the value of str1

## String Comparison

<b>
1. String Comparison follow lexicographical order 
    
    Our old school dictionary follows the same order
</b>


![alt text](https://github.com/Ruhanyat-994/CoDe-BoX/blob/dev/Ruhanyats_code/Photos/image-2.png?raw=true)

- Here first mismatch of the string values will be compared in the lexicographical order.
- One mismatch is enough
- When the length of two string is not same we can be sure that these string are not same

- Suppose length of two string is not same but the small length string is matching with big length string to the end here the solution is .....

> <b>"The small string will be compared as small"</b>

![alt text](https://github.com/Ruhanyat-994/CoDe-BoX/blob/dev/Ruhanyats_code/Photos/image-1.png?raw=true)

#### String Equality Check
<b>1. Manually </b>

```c
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    gets(str1);
    char str2[50];
    gets(str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 != len2)
    {
        printf("String is not Equal");
    }
    else
    {
        bool flag = true;
        for(int i =0;str1[i]!=0;i++)
        {
            if (str1[i]!=str2[i])
            {
                flag = false;
                break;
            }
           
        }
        if (flag == true)
        {
            printf("Strings are same");
        }
        else{
            printf("Strings are not same");
        }
    }
}
```
1. At first we are checking the length
2. Then we have fixed a true value that if the length is same then the it is true
3. Then we are running a loop where we are checking the string
4. If we find any mismatch the flag that we have fixed will be set as false and the loop will break
5. But if the flag is true we will use another condition

<b>
2. Using Library Function:
</b>

```c
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    gets(str1);
    char str2[50];
    gets(str2);
    int res = strcmp(str1,str2);
    printf("%d\n",res);
    if (res == 0)
    {printf("Same string");}
    else if(res > 0)
    {printf("Str1 is greater than Str2");}
    else
    {printf("Str2 is greater than Str1");}
}
```

```plaintext
if str1 == str2 -> 0
if str1 > str2 -> Positive
if str1 < str2 -> Negative
```
## String Reverse

<b>1. Manually </b>

```c
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    gets(str1);
    int left = 0;
    int right = strlen(str1)-1;
    while(left<right)
    {
        char temp = str1[left];
        str1[left]=str1[right];
        str1[right]=temp;

        left++;
        right--;

        
    }
    printf("%s",str1);
}
```
![alt text](image-3.png)

1. At first we are swapping the char left to right  

<b>Swapping
> char temp = a;  
> a = b;  
> b = temp ;
</b>

2. Then we will go from left to right and right to left.

<b>2. Using Library function </b>

```c
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    gets(str);
    strrev(str);
    puts(str);
}
```

## Plaindrome
<b>  

> 1. Do the String reverse
> 2. Compare the reversed string with the actual string

</b>