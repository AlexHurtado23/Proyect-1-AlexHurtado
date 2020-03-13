/*Resume_mayor_concepts*/

//Types of programing language
/*
High level
A high-level programming language is characterized by expressing the algorithms in an appropriate way to human
cognitive ability, rather than the ability with which the machines execute them. They are usually oriented to
objects, events or functions, which can be combined. They can also be compiled or interpreted. Some examples
are: Java, PHP, Python, JavaScript, C ++.

1.- It is a programmer friendly language
2.- High level language is less memory efficient
3.- It is easy to understand
4.- It is simple to debug
5.- It is simple to maintain
6.- It is portable
7.- It can run on any platform
8.- It needs compiler or interpreter for translation

Low level
A low-level programming language provides little or no abstraction from a computer's instruction set
architecture-commands or functions in the language map closely to processor instructions. They are used to
write programs that are closer to the native language of a computer (binary), making them harder for
programmers to understand. Some examples are Assembly Language, Machine Code.

1.- It is a machine friendly language
2.- Low level language is high memory efficient
3.- It is tough to understand
4.- It is complex to debug comparatively
5.- It is complex to maintain comparatively
6.- It is non-portable
7.- It is machine-dependent
8.- It needs assembler for translation
*/

//Program Structure

#include/*Headboard*/  <stdio.h>/*C main Library*/

#include  <math.h>/*C math Library*/

#define PI 3.1416 /*Constant, a value that never changes*/

int global;
/*Global variable is the one who has been created out all
the functions of a program, it exist in all the program and
it can be used in other functions but, its value can change*/

int main(){ /*Star part*/

/*Body(from here to one line before End)*/

    //Types of Variables

    int local;
    /*Local variable is the one who has been created
    inside of a function, it only exist inside the function*/

    char a = 'e';
    /*Any element, the element "e" is storage in my "a" variable.
    Size= 1byte Range: 0...255 */

    short b = -15;
    /*An short number. Size= 2bytes Range: -128...127*/

    int c = 1024;
    /*An integer value. Size= 2bytes Range: -32768...32767*/

    unsigned int d = 128;
    /* An integer value without sign. Size: 2bytes Range: 0...65535*/

    long e = 123000;
    /*An long value. Size 4bytes Range: -2147483648...2147483637*/

    float f = 15.678;
    /*A float value. Size 4bytes*/

    double g = 100000000.00000001;
    /*A double-precision float value. Size 8bytes*/

return 0; /*saying to the PC that the program is OK*/
} /*End part*/

//Reserved Words
/*
In C, we have 32 keywords, which have their predefined meaning and cannot be used as a variable name.
These words are also known as “reserved words”.

Those are: if, else, switch, case, default, int, float, char,
double, long, break, for, while, do, void, goto, return, auto,
signed, const, extern, register, unsigned, continue, enum,
sizeof, volatile, union struct, typedef.
*/

//identifiers
/*
It refers to name given to entities such as variables, functions, structures etc.Identifiers must be
unique. They are created to give a unique name to an entity to identify it during the execution of
the program. You must not use reserved words as identifiers.
Example: int identifier; (you are declaring a variable with the name of "identifier").
*/

//Operators
/*
Arithmetic operators:
+	addition or unary plus
-	subtraction or unary minus
*	multiplication
/	division
%	remainder after division
++  increment in 1
--  decrement in 1

Assignment operators:
=	a = b
+=	a = a+b
-=	a = a-b
*=	a = a*b
/=	a = a/b
%=	a = a%b

Relational operators:
==	Equal to
>	Greater than
<	Less than
!=	Not equal to
>=	Greater than or equal to
<=	Less than or equal to

Logic operators:
&&	Logical AND.
||	Logical OR.
!	Logical NOT.

Bitwise operators:
&	Bitwise AND
|	Bitwise OR
^	Bitwise exclusive OR
~	Bitwise complement
<<	Shift left
>>	Shift right
*/

//Punctuation marks
/*
Library <ctype.h>
ispunct() is a function that allow us to know if a character is a punctuation mark.
All punctuation marks in C programming are:
! " # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \ ] ^ _ ` { | } ~
*/

//Debugging a program
/*
Syntax errors
This is an error in spelling or grammar used when coding. Missing a letter, character or forgetting to include
inverted comas, are examples of syntax errors. A syntax error will be identify  by an interpret as it will be
unable to convert the source code into machine code.

Execution errors
Sometimes called routine error, execution errors only become evident during the run time. An executions error
occurs when a program is asked to do something that it cannot, resulting in a "crash". The widely use example
of a run time error is asking a program to divide by zero.

The code contains no syntax or logic errors but when it runs, it cannot preform the task that it has been
programmed to carry out. Another example is when an attempt is made to access an item in an array which
does not exist example item 11 in an array with only 10 elements.

File handing can also result in a execution errors, most often when an attempt is made to write to a file that
does not exist.

Logic errors
An error in logic of the code such as using <instead of> or AND instead of OR. The program will execute the code
but will produce unexpected results. Logic errors are usually resolved by carrying out to a dry run using a
trace table or setting breakpoints to help identify the section of code that contains the logic error.
*/

//Ubuntu Powershell comands
/*
mkdir Myfolder = create a folder
ls = to view all folders
cd Myfolder = exit or enter in a folder
nano Myfile =to create or access in a file
gcc Myfile = to compile a file
./a.out Myfile = to execute a program
./a.out Myfile -lm = to execute a program with math.h library
cat Myfile = show the code of the file
*/
