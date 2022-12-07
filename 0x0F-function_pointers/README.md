# DESCRIPTION

A directory for projects on function pointers

## FORMAT
```c
void fun(int a)
{
	printf("The value of a is %d", a):
}

int main()
{
	void (*fun_ptr)(int) = &fun;
	(*fun_ptr)(10);
	return (0);
}
```
