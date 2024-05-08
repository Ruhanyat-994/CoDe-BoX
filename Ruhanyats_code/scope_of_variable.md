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

