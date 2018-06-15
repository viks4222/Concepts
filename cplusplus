
Static variable:
gets space allocated in static storage.
initiate only once and the value carried out to next level(function calls).
-not shared by the objects(Since stored in static storage).
variables can not be initialized using constructors.
initialization happens outside class
the static data is initialized to zero if no other initialization is present at the time of object creation
This is useful for implementing coroutines in C/C++ or any other
 application where previous state of function needs to be stored
 
 static function:-
 By declaring a function member as static, you make it independent of any particular object of the class.
 A static member function can be called even if no objects of the class exist and the static functions are accessed
 using only the class name and the scope resolution operator ::.

 static member functions do not have this pointer.
 A static member function cannot be virtual (See this G-Fact)
 Member function declarations with the same name and the name parameter-type-list cannot be overloaded if any of them is a static member function declaration.
 static member function can not be declared const, volatile, or const volatile.



Static use in getInstance(singleton pattern)

To retain the value on multiple invokations and avoid further creation of the instance.
Thereby maintaining a single copy of object.

C++ const keyword:
A function becomes const when const keyword is used in function’s declaration. The idea of const functions is not allow them 
to modify the object on which they are called.
It is recommended practice to make as many functions const as possible so that
accidental changes to objects are avoided. 

Inline:
 When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call. 
 This substitution is performed by the C++ compiler at compile time. Inline function may increase efficiency if it is small.
 Reduces execution time.
 used only when function switching  time is more than the function execution tmme.
 
 Friend class:
 Friend Class A friend class can access private and protected members of other class in which it is declared as friend. 
 It is sometimes useful to allow a particular class to access private members of other class. 
 For example a LinkedList class may be allowed to access private members of Node.

1) Friends should be used only for limited purpose. too many functions or external classes are declared as friends of 
a class with protected or private data, it lessens the value of encapsulation of separate classes in object-oriented programming.
2) Friendship is not mutual. If a class A is friend of B, then B doesn’t become friend of A automatically.
3) Friendship is not inherited.
4) The concept of friends is not there in Java.

friend function :-
The function is declared friend in class whose private members to be accessed.
Friend properties same as friend class.


 class Node
{
private:
  int key;
  Node *next;
 
  /* Other members of Node Class */
  friend int LinkedList::search(); // Only search() of linkedList 
                                  // can access internal members
};
 

Reference:
a constant pointer, once initialized cannot be changed.
alternative to existing variable.
passbyref- Use when you dont have to reseat the arguments.
use of references
cannot declare void.  and it cant be NULL.
less powerful
Once reference created cant be changed ie. constant ptr.
Must be initialized.
safer and easier to use.

pointer:
Stores address of another variable.
passbypointer- Use when you have to reseat the arguments.
use of pointer
can be void can be NULL.
more powerful
pointer can be changed 
not necessasary to be initialized.
safer and easier to use.
smart pointers:-wrapper class over pointer with operations like * and -> overloaded.
destructor is automatically called.
 Dangling pointer:
 A pointer pointing to a memory location that has been deleted (or freed) is called dangling pointer. 
 There are three different ways where Pointer acts as dangling pointer:
 1.De-allocation of memory
2.Function Call
3.Variable goes out of scope

Void pointer:
Void pointer is a specific pointer type – void * – a pointer that points to some data location in storage
 which doesn’t have any specific type. Void refers to the type. Basically the type of data that it points to is can be any. 
 If we assign address of char data type to void pointer it will become char Pointer, if int data type then int pointer and so on.
 Any pointer type is convertible to a void pointer hence it can point to any value.
Important Points
void pointers cannot be dereferenced. It can however be done using typecasting the void pointer
Pointer arithmetic is not possible on pointers of void due to lack of concrete value and thus size.

NULL Pointer:
NULL Pointer is a pointer which is pointing to nothing. In case, if we don’t have address to be assigned
 to a pointer, then we can simply use NULL.

Uninitialized pointer:
 An uninitialized pointer stores an undefined value. A null pointer stores a defined value, but one that
 is defined by the environment to not be a valid address for any member or object

Wild pointer:
A pointer which has not been initialized to anything (not even NULL) is known as wild pointer. The pointer
 may be initialized to a non-NULL garbage value that may not be a valid address.
 points to some arbirtary location and may cause a program to crash
int main()
{
    int *p;  /* wild pointer */
    int x = 10;
    // p is not a wild pointer now
    p = &x;
    return 0;
}


Singleton design pattern:
ownership is not reasonably assigned
global access is possible
single instance - private
aceess method  - public

singelton code:


difference betn free and delete:
free - Deallocating memory block erlier allocated by  malloc ,calloc, realloc
If ptr does not point to a block of memory allocated with the above functions, it causes undefined behavior.
If ptr is a null pointer, the function does nothing.
its a library function
doesn't invoke destructor

delete:
Deallocates the memory block pointed to by ptr (if not null), releasing the storage space previously
 allocated to it by a call to operator new[] and rendering that pointer location invalid.
 its an opearator.
 invokes destructor
 fastrer than free.
 
difference betn malloc and new:
 malloc:
 Allocates a block of size bytes of memory, returning a pointer to the beginning of the block.
its a library functions
doesn't invoke constructor
cannot overrride
size to be calculated by user.
memroyv allocated from heap.

new:
Allocates size bytes of storage, suitably aligned to represent any object of that size, and returns a non-null pointer
to the first byte of this block.
On failure, it throws a bad_alloc exception.
its an operator
does invoke constructor
can overrride
size calculated by compiler
memory allcocated from free store.
 