# C STRUCTURES AND TYPEDEF
Structures in C are user-defined data types that group together variables of different data types under a single name.
They provide a way to create a more complex data structure that can store related data items. Structures are useful when we need to store information about a particular entity, such as a person or an employee, which has multiple attributes like name, age, address, salary, etc.
## Defining a Structure
A structure definition starts with the keyword `struct`, followed by the structure name, and a list of member variables enclosed in braces. For example:
`
struct employee {
   char name[50];
   int age;
   float salary;
   char address[100];
};
`
Once a structure is defined, it can be used to create variables of that type. For example:

`
struct employee employee1;
`
or
`
struct employee *employee2;
`

Here employee1 is a variable of type `struct employee` that contains four members: 'name', 'age', 'salary' and 'address'.

##  Accessing the members of a structure
- The Dot (.) operator is used to normally access members of a structure.
`
employee1.name = "Jane Doe";
employee1.age = 27;
employee1.salary = 53000.00;
`
Here, we are assigning values to the age and salary members of the employee1 variable.

- The Arrow(->) operator exists to access the members of the structure using pointers.
`
employee2->name = "John Doe";
employee2->age = 30;
employee2->salary = 56000.00;
`
Here, we are assigning values to the name, age and salary members of the employee2 variable.

* Structures can also be passed to functions as arguments, just like any other data type. This allows us to create more complex data structures that can be used to store and manipulate data.

## Typedef

`typedef` is a keyword in C that is used to create new data type names. It allows us to create aliases for existing data types, making the code more readable and easier to maintain. For example:
`
typedef int my_int;
`
- This creates a new data type called `my_int' that is an alias for the `int` data type.

We can also use `typedef` to create new names for structures. This allows us to define a structure once and use it in multiple parts of our code, without having to repeat the structure definition. For example:
`
typedef struct {
   char name[50];
   int age;
   float salary;
   char address[100];
} employee;
`

or

`
typedef struct employee employee;
`
- Here, we are creating a new data type called employee that is an alias for the struct employee data type that we defined earlier.

To use the data type to define structure variables directly:
`
employee employee1 = {.name = John, .age = 26, .salary = 45000.00};
`
* In summary, structures provide a way to group related data items under a single name, making the code more organized and easier to understand. `typedef` allows us to create new data type names that can be used to make the code more readable and maintainable.
