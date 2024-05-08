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

