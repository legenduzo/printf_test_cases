/**


This file contains the expected results you should aim for when you run main.c against your printf function.  

They constitute test cases, including edge cases for printf.  

Run your code with  gcc -Wall -Werror -Wextra -Wno-format -pedantic -std=gnu89 *.c && ./a.out  

Here are the results:

Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Len:[39]
Len:[39]
String:[I am a string !]
String:[I am a string !]
Length:[25, 25]
Length:[25, 25]
Character:[H]
Character:[H]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Negative:[-762534]
Negative:[-762534]
%
%
Testing percent before null terminator %
Testing percent before null terminator %
Escape characters:[\n\t]
Escape characters:[\n\t]
Len from escape:[25]
Len from escape:[25]
ASCII value of 'A' is: [A]
ASCII value of 'A' is: [A]
Len from _printf:[27]
Len from printf:[27]
Printing lower-case letter using ASCII value: [a]
Printing lower-case letter using ASCII value: [a]
Len from lowercase:[50]
Len from lowercase:[50]
Multiline strings:
[This string is
on multiple lines.]
Multiline strings:
[This string is
on multiple lines.]
Len from multiln:[55]
Len from printf:[55]

%
len from 2% and midspace: -1 
len from 2% and midspace: 1 //Here, standard printf surprisingly prints one of the characters instead of exiting after "% ".


len from 1% and space: -1
len from 1% and space: -1


len from % and null terminator: -1
len from % and null terminator: -1


len from null char:2
len from null char:2
NULL
NULL
len from NULL string: 4
len from NULL string: 4


len from outright null: -1
len from outright null: -1
(null) // Null will be the right behaviour according to glibc
Segmentation fault (core dumped) // On some system architectures, mine for example, you get a seg fault 


