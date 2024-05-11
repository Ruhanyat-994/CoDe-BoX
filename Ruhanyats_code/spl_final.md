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
![alt text](https://github.com/Ruhanyat-994/CoDe-BoX/blob/dev/Ruhanyats_code/Photos/image.png?raw=true)

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
![alt text](https://github.com/Ruhanyat-994/CoDe-BoX/blob/dev/Ruhanyats_code/Photos/image-3.png?raw=true)

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

## Palindrome
<b>  

> 1. Do the String reverse
> 2. Compare the reversed string with the actual string

</b>

> ## End of String  



---  
---

# Scope Of Variable
#### Outline:
<b>  

1. Defining the scope of a variable  

2. Global Variable  

3. Local Variable  

</b>

### Defining the scope of a variable (Local)

![image-4](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/ae8cc941-88ce-4d39-81fa-d4983e9b480b)


- Suppose you declared a variable into the main function. In this case the other function outside the main function can't access the variable. That is the scope of that particular varible.
![image-5](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/d84daeda-e2b7-4bec-b53a-39ce1e7a1737)


- Here we can't just use a local variable into another function than its own root function. It will throw us an error  

![image-6](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/85f949f0-c107-4421-83a2-30e754ecad95)
 
**example :**

![image-7](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/0844acb3-7476-4642-97ba-fedde21a359a)

### Defining the scope of a variable (Global)

```c
#include<stdio.h>
int fun();

int var=4;

int main()
{
    int var = 3;
    printf("%d\n",var);
    fun();
    return 0;
}

int fun()
{
    printf("%d\n",var);
}
```
****Output:****
```plaintext
3
4
```
> **At first its printing the local variable then the global variable**

> ## End of Scoping Variable  



---  
---

## Function

### Predefined Functions

So it turns out you already know what a function is. You have been using it the whole time while studying this tutorial!

For example, `main()` is a function, which is used to execute code, and `printf()` is a function used to output/print text to the screen:

```c
#include <stdio.h>

int main() {
    printf("Hello World!");
    return 0;
}
```


### Create a Function

To create (often referred to as declare) your own function, specify the name of the function, followed by parentheses `()` and curly brackets `{}`:

**Syntax:**
```c
void myFunction() {
  // code to be executed
}
```



#### Example Explained



- myFunction() is the name of the function
- void means that the function does not have a return value.  
- You will learn more about return values later in the next   chapter  
- Inside the function (the body), add code that defines what the function should do


### Calling a Function

```c
#include<stdio.h>

void function_name()
{
    printf("Hello World!");
}

int main()
{
    function_name();
    return 0;
}
```
- A function can be called multiple times.

### Main Syntax

```c
returnType functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
```
### Using Parameters

```c
#include<stdio.h>

void function_name(char name[])
{
    printf("hello %s\n",name);

}


int main()
{
    function_name("Ruhanyat");
    function_name("swaran");
    return 0;
}
```
### Passing Array into Function

```c
#include <stdio.h>

void Print_function(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void input_function(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int size;
    scanf("%d",&size);
    int myFunction[size];
    
    
    input_function(myFunction,size);
    Print_function(myFunction,size);

    return 0;
}

```
- The most easiest Way to declare the Array and calling it.
- <b>Always remember that you have to put array element according to the size that you have declared.</b>

### Some Simple Examples

##### Adding Two Numbers

```c
#include<stdio.h>

int addNumber(int x, int y)
{
    return x+y ;
}
int main()
{
    int x=5 , y=4 ;
    printf("%d\n",addNumber(x,y));
    return 0;
}
```
* You can also store a function into a variable while declaring

#####   Fahrenheit to Celsius

```c
#include<stdio.h>

float toCelcius(float fahrenheit)
{
    return (5.0/9.0)*(fahrenheit-32);
}

int main()
{
    float fahrenheit ;
    scanf("%f",&fahrenheit);
    printf("%f is equal to %f\n",fahrenheit,toCelcius(fahrenheit));
}
```
<b>One thing to look is the datatype you are returning into the function has to be same while calling it into the other function! </b>

### Function Declaration

<b>Calling it before it declared</b>

```c
// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  printf("I just got executed!");
}
```
> <b>You have to declare the function first before calling it but if you don't add something in the body it doesn't matter. You can do it later</b>

##### Good Practise 

```c
// Function declaration
int myFunction(int, int);

// The main method
int main() {
  int result = myFunction(5, 3); // call the function
  printf("Result is = %d", result);
  return 0;
}

// Function definition
int myFunction(int x, int y) {
  return x + y;
}
```

> ## End of Function  



---  
---

# Recursion
> #### Function Calling Itself is Recursion
> We will learn recursion via code

### \# Problem-1
> #### **Question- WAp which calculates the factorial of n by recursion**

```c
#include<stdio.h>

int factorial();

int main()
{
    int n ;
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d\n",fact);
    return 0;

}
int factorial(int x)
{
    return x*factorial(x-1);
}
```
- It won't run because the last value of n will be 0 and if you multiply 0 with something it will be 0 as well.
#### Manual Tracing
![image-8](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/1d646904-f6c8-446e-a1e4-a4216ad69cbf)

> **The main problem with recursion is it won't stop if we don't make a condition this condition is called as <b>base-case</b>**

- So that for problem-1 we have to make a condition that will stop going further after having the value of n=1.

**Answer:**
```c
#include<stdio.h>

int factorial(int);

int main()
{
    int n ;
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d\n",fact);
    return 0;

}
int factorial(int x)
{
    if(x==1 | x == 0) return 1;///base case /// This is for avoiding the segmentation error
    return x*factorial(x-1);
}
```
#### Manual Tracing
![image-9](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/72170f43-cce8-4939-8aca-fc29c3075230)

![image-10](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/a2c5acd1-d529-41da-bf79-35d43b3f182e)

### \# Problem-2
> #### **Question- WAP which will print n to 1 using recursion**

```c
#include<stdio.h>

void decreasing(int);

int main()
{
    int n ;
    scanf("%d",&n);
    decreasing(n);
    
    return 0;

}
void decreasing(int x)
{
   if(x==0) return ;
   printf("%d\n",x);
   decreasing(x-1);
   return;
}
```
<b>Focus on base case!</b>

### \# Problem-3
> #### **Question- WAP which will print 1 to n using recursion**

```c
#include<stdio.h>

void increasing(int,int);

int main()
{
    int n ;
    scanf("%d",&n);
    increasing(1,n);
    
    return 0;

}
void increasing(int x,int n)
{
   if(x>n) return ;
   printf("%d\n",x);
   increasing(x+1,n);
   return;
}
```
**Just increased one parameter**

### \# Problem-4
> #### **Question- WAP which will print sum from 1 to n using recursion**

```c
#include<stdio.h>

void sum(int, int);

int main() {
    int n;
    scanf("%d", &n);
    sum(n, 0);
    
    return 0;
}

void sum(int n, int s) {
    if (n == 0) {
        printf("%d\n", s);
        return;
    }
    sum(n - 1, s + n);
    return;
}

```
**Here you need one more parameter to store the value of the sum**

### \# Problem-5
> #### **Question- WAP which will calculate 'a' raised to the power 'b' using recursion**

```c
#include<stdio.h>

int  power(int, int);

int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int p = power(a,b);
    printf("%d raised to the power %d is %d",a,b,p);
         
    return 0;
}

int power(int a, int b) 
{
    if(b==0) return 1;
    return a*power(a,b-1);
}

```
1. Writing the main function
2. Writing the custom function according to the main function

![image-11](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/26c8e9e7-804d-4b67-80cb-f4d1f68a1938)

### \# Problem-6
> #### **Question- WAP which will calculate nth fibonacci number using recursion**

### Fibonacci Number
![image-13](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/9433d5b4-5e69-4cca-9a60-93dd2f69b78e)
![image-12](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/c13fef64-1b0d-44da-8f98-07c8fbe641f2)  

**We can use this logic**

![image-14](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/dbfa716d-cffd-4607-b523-3b5d53de42a7)
![image-15](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/7b1845d7-29e8-4209-9226-e7c9991e5d14)

```c
#include<stdio.h>

int  fibo(int);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n",fibo(n));
         
    return 0;
}

int fibo(int n) 

{
    if(n==1 || n==2) return 1;
    
    return fibo(n-1)+fibo(n-2);

}

```
**Output:1**
```plaintext
5
5
```
**Output:2**
```plaintext
6
8
```
**Output:3**
```plaintext
7
13
```
**Output:4**
```plaintext
1
1
```
**Output:5**
```plaintext
2
1
```
><b>1. We will find the fibo(n-1) and fibo(n-2) than we will add them  
>2. But we need a base-case or condition.  
>3. But we need to do something for the first value.   
>4. The base-case is if(n==1 || n==2 ) return 1; This is for place holder.
</b>

### \# Problem-7 \***
> #### **Question- Stair Path(2 jumps max) there are nth stairs and you can us single or double steps , now find how many ways you can go to the nth stairs**

![image-16](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/afa913b5-f818-4b8f-ab02-b07ea522fb32)

![image-17](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/8b2013e5-e95f-4b6d-9eac-c785d60cfbe1)

```c
#include<stdio.h>

int  stair(int);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n",stair(n));
         
    return 0;
}

int stair(int n) 

{
    if(n==1 || n==2) return n;
    int totalWays = stair(n-1)+stair(n-2);
    return totalWays;
}
```
![image-18](https://github.com/Ruhanyat-994/CoDe-BoX/assets/110297704/18628f4b-c4c1-4c97-889e-f1d1c668befe)

### \# Problem-8 \***
> #### **Question- Stair Path(2 jumps max) there are nth stairs and you can us single , double or triple steps , now find how many ways you can go to the nth stairs**

```c
#include<stdio.h>

int stair(int);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n",stair(n));
         
    return 0;
}

int stair(int n) {
    if(n==1 || n==2) 
        return n;
    else if (n == 3) // Base case for three steps
        return 4;    // There are 4 ways to climb 3 steps (1+1+1, 1+2, 2+1, 3)
    else {
        int totalWays = stair(n-1) + stair(n-2) + stair(n-3); // Include the possibility of taking three steps
        return totalWays;
    }
}

```
> ## End of Recursion  



---  
---

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
> ## End of Pointers  



---  
---
<<<<<<< HEAD

=======
>>>>>>> 6a804c226dc55738ba14c3af2b8c4e04ce98470b

# File Handling

## Path
> #### **Relative vs. Absolute Paths:**  Windows supports both relative and absolute paths. Absolute paths start from the root directory of the drive (e.g., C:\Folder\file.txt), while relative paths are relative to the current working directory (e.g., Folder\file.txt).

## Pointers in File


1. File handling functions require a pointer to a `FILE` object to operate on.
2. Here FILE is a datatype which requires only pointers



## File Operation

<b>
- Read    "r"
- Write   "w"
> "Rewrite"/ "Replace"
> It will delete the previous content and add new that you write
- Append  "a"
> "add new content"
> but if you need the previous content should stay and you add some new content at the end you will use append

</b>

## File LifeCycle
- Create File Pointer
- Open File
- File Operation
- Close Operation
#### File Pointer  

```c
FILE *variable_name;

```
 #### File open

 ```c
 file = fopen("./input.txt","r");
file = fopen("./input.txt","w");
file = fopen("./input.txt","a");
 ```
 ```c
 #include<stdio.h>
int main()
{
       FILE *fptr;
       fptr = fopen("file.txt","r");
       fclose(fptr);
       if(fptr != NULL)
       {
        printf("We are reading your file!");

       }else{
        printf("We can't read your file pls check the path!");
       }

}
 ```
 ```plaintext
 Here if your path is correct then it will show - We are reading your file! unless
 We can't read your file pls check the path!
 
 ```

 #### File close
 ```c
 fclose(file)
 ```

#### File open Issue solve
- This is a permission related issue

```c
if(file == NULL)
{
    // file can't be open
}
else
{
    // file has been opened
}
```
#### File input
```c
int a;
fscanf(file,"%d",&a);

```
```c

#include<stdio.h>
int main()
{
       FILE *fptr;
       fptr = fopen("file.txt","a");
       fprintf(fptr,"\nits in the second line!");
       
       fclose(fptr);
       

}
```

#### File output:
```c
int a;
fprintf(file,"%d",&a);

```
#### Some File Operations:
1. <b>fopen()</b>
2. <b>fclose()</b>
3. <b>fscanf()</b>
4. <b>fprintf()</b>
5. <b>fgets()</b>
   



####  Opening a file
```c
int main()
{
    FILE *file;
    file = fopen("./input.txt","r")

    if(file==NULL)
    {
        printf("File can't be opened\n");

    }
    else
    {
        printf("File can be opened\n");
    }
    fclose(file);

}
```
#### Some Advise

> "Read the file until the EOF(End of File)"
> - This is for working with the elements of that file
> - We have to use a while loop for doing this.
> - Until it finds an new Line the string will be run
> - We can use sizeof() function inside fgets()

<<<<<<< HEAD
 ## End of file Handling  
=======

> ## End of File Handling
>>>>>>> 6a804c226dc55738ba14c3af2b8c4e04ce98470b



---  
---
<<<<<<< HEAD

# Structure


> **Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.Unlike an array, a structure can contain many different data types (int, float, char, etc.).**

### Creating a Structure
*We can create a structure by using the struct keyword and declare each of its members inside curly braces:*

```c
struct MyStructure {   // Structure declaration
  int myNum;           // Member (int variable)
  char myLetter;       // Member (char variable)
}; // End the structure with a semicolon

```
### Using variables

##### Using string in structure

```c
#include<stdio.h>
#include<string.h>

struct myStructure
{
    int sum;
    char str[20];
};

int main()
{
    struct myStructure s1;
    s1.sum= 5+9;
    s1.str = "hello world";


    printf("The sum is %d\n",s1.sum);

    printf("The complement is %s\n",s1.str);
    
}
```
An error will occur
```plaintext
prog.c:12:15: error: assignment to expression with array type
```
Right way:
```c
#include<stdio.h>
#include<string.h>

struct myStructure
{
    int sum;
    char str[20];
};

int main()
{
    struct myStructure s1;
    s1.sum= 5+9;
    strcpy(s1.str, "This is me");


    printf("The sum is %d\n",s1.sum);

    printf("The complement is %s\n",s1.str);
    
}
```
**We can do this more simply:**
```c
#include<stdio.h>
#include<string.h>

struct myStructure
{
    int sum;
    char str[20];
};

int main()
{
    struct myStructure s1 ={5+9,"Hello world"};
    


    printf("The sum is %d\n",s1.sum);

    printf("The complement is %s\n",s1.str);
    
}
```
> **Note: The order of the inserted values must match the order of the variable types declared in the structure (13 for int, 'B' for char, etc).**

### Copying Structure

```c
#include<stdio.h>
#include<string.h>

struct myStructure
{
    int sum;
    char str[20];
};

int main()
{
    struct myStructure s1 ={5+9,"Hello world"};
    struct myStructure s2;
    s2=s1;
    


    printf("The sum is %d\n",s2.sum);

    printf("The complement is %s\n",s2.str);
    
}
```

**Here If we want to copy the s1 into s2 we have to put s2 first in the assignment operator correct way:s2=s1 not s1=s2**

# Structure Advance

- We can't use different different datatypes in 2D array where we can store multiple things in rows and columns
- So we use structure
- **Structure is a user defined datatype**
-  <b>struct studentId() -> in this case we are creating our own datatype with the help of struct.</b>

### \# Problem1 **
> #### **Question- Create a structure type "book" with name,price and number of pages as its attribute**

```c
#include<stdio.h>
#include<string.h>

int main(){
struct book{

    char name[30];
    int price;
    int noOfPages;

} a,b,c;

a.noOfPages= 320;
a.price = 450;
strcpy(a.name,"Bug bounty bootcamp");

printf("%d\n",a.noOfPages);
printf("%d\n",a.price);
printf("%s\n",a.name);


}
```
### Typedef and Multiple Pointer declaration Problem
> *In C and C++, typedef is indeed a keyword used to create an alias for an existing data type. It's a handy tool for making code more readable and manageable. Instead of using the original data type name throughout your code, you can create a typedef to give it a shorter, more descriptive name.*

- If we put a typedef out of a function I mean in global space it will work for every function that the program has.

```c
typedef oldname newname
```
- It will convert the existing datatype name to a name that you will give it. If you do it into a function it will work for only that particular function. But if you set it globally it will work for ever function.

**Normal typedef**
```c
#include<stdio.h>
#include<string.h>

typedef float realNumber;

int main(){
    int a=6;
    realNumber hd = 45.45;

    printf("%f",hd);

}
```
**Let's use typedef into our previous structure problem**

```c
#include<stdio.h>
#include<string.h>

int main(){
typedef struct book{

    char name[30];
    int price;
    int noOfPages;

} book;

book a;
book b;
book c;

a.noOfPages= 320;
a.price = 450;
strcpy(a.name,"Bug bounty bootcamp");

printf("%d\n",a.noOfPages);
printf("%d\n",a.price);
printf("%s\n",a.name);


}
```
**Its running the same**
=======
>>>>>>> 6a804c226dc55738ba14c3af2b8c4e04ce98470b
