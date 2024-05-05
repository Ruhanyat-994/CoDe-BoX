## File Operation
- Read    "r"
- Write   "w"
> "Rewrite"/ "Replace"
- Append  "a"
> "add new content"

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