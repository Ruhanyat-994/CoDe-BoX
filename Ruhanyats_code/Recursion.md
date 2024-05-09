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
![alt text](image-8.png)

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
![alt text](image-9.png)

![alt text](image-10.png)

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

![alt text](image-11.png)

### \# Problem-6
> #### **Question- WAP which will calculate nth fibonacci number using recursion**

### Fibonacci Number
![alt text](image-13.png)
![alt text](image-12.png)
**We can use this logic**

![alt text](image-14.png)
![alt text](image-15.png)

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

![alt text](image-16.png)  

![alt text](image-17.png)

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
![alt text](image-18.png)

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
### \# Problem-9 \***
> #### **Question- Maze Path (Down,Right and One step at a time)**

![alt text](image-19.png)

