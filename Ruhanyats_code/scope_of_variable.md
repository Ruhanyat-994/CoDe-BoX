# Scope Of Variable
#### Outline:
<b>  

1. Defining the scope of a variable  

2. Global Variable  

3. Local Variable  

</b>

### Defining the scope of a variable (Local)

![alt text](image-4.png)

- Suppose you declared a variable into the main function. In this case the other function outside the main function can't access the variable. That is the scope of that particular varible.

![alt text](image-5.png)

- Here we can't just use a local variable into another function than its own root function. It will throw us an error  

![alt text](image-6.png)
 
**example :**

![alt text](image-7.png)

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

