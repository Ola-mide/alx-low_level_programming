# DESCRIPTION

A directory for projects on the data type struct for structures and the keyword typedef.
A structure is a user defined data type available in C that allows to combine data items of different kind.
typedef is a keyword which can be used to give a type, a new name.

## FORMAT

```c
struct User
{
	char *name;
	char *email;
	int age;
}
int main(void)
{
	struct User user1;
	user1.name = "Rahman";
	user1.email = "abdulrahmanoyetade@gmail.com";
	return (0);
}
```
```c
typedef unsigned char byte;
```
```c
struct Computer
{
	char *name;
	char *brand;
};
typedef Computer Computer;

/*OR*/

typedef struct Computer
{
	char *name;
	char *brand;
} Computer;
```
