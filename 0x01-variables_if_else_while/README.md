# __0x01. C - Variables, if, else, while__
* C
## __Resources__

Read or watch:

   * [Everything you need to know to start with C.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230616%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230616T212645Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=257553b2fbaed1e86e9b15835ea50bd8eca1f763080698c56971bc40c2934bbc "Title")
   * [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html "Title")
   * [integers](https://publications.gbdirect.co.uk//c_book/chapter2/integral_types.html "Title")
   * [Arithmetic Operators in C](https://www.tutorialspoint.com/cprogramming/c_arithmetic_operators.htm "Title")
   * [If statements in C](https://www.cprogramming.com/tutorial/c/lesson2.html "Title")
   * [if…else statement](https://www.tutorialspoint.com/cprogramming/if_else_statement_in_c.htm "Title")
   * [Relational operators](https://www.tutorialspoint.com/cprogramming/c_relational_operators.htm "Title")
   * [Logical operators](https://www.fresh2refresh.com/c-programming/c-operators-expressions/c-logical-operators/ "Title")
   * [while loop in C](https://www.tutorialspoint.com/cprogramming/c_while_loop.htm "Title")
   * [While loop](https://www.youtube.com/watch?v=Ju1LYO9pkaI "Title")

man or help:

   * `ascii`.
## __Learning Objectives__

_General_

   * What are the arithmetic operators and how to use them
   * What are the logical operators (sometimes called boolean operators) and how to use them
   * What the the relational operators and how to use them
   * What values are considered TRUE and FALSE in C
   * What are the boolean operators and how to use them
   * How to use the if, if ... else statements
   * How to use comments
   * How to declare variables of types char, int, unsigned int
   * How to assign values to variables
   * How to print the values of variables of type char, int, unsigned int with printf
   * How to use the while loop
   * How to use variables with the while loop
   * How to print variables using printf
   * What is the ASCII character set
   * What are the purpose of the gcc flags -m32 and -m64


## __Tasks__

0. Positive anything is better than negative nothing
_mandatory_

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.

   * You can find the source code here
   * The variable n will store a different value every time you will run this program
   * You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
   * The output of the program should be:
       * The number, followed by
           * if the number is greater than 0: is positive
           * if the number is 0: is zero
           * if the number is less than 0: is negative
       * followed by a new line
_Repo_
	* File: 0-positive_or_negative.c


1. The last digit
_mandatory_

This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.

   * You can find the source code here
   * The variable n will store a different value every time you run this program
   * You don’t have to understand what rand, srand, and RAND_MAX do. Please do not touch this code
   * The output of the program should be:
       * The string Last digit of, followed by
       * n, followed by
       * the string is, followed by
           * if the last digit of n is greater than 5: the string and is greater than 5
           * if the last digit of n is 0: the string and is 0
           * if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
       * followed by a new line
_Redp_
	*File: 1-last_digit.c


2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
_mandatory_

Write a program that prints the alphabet in lowercase, followed by a new line.

   * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
   * All your code should be in the main function
   * You can only use putchar twice in your code
_Repo_
	* File: 2-print_alphabet.c


3. alphABET
_mandatory_

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

   * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
   * All your code should be in the main function
   * You can only use putchar three times in your code
_Repo_
	* File: 3-print_alphabets.c


4. When I was having that alphabet soup, I never thought that it would pay off
_mandatory_

Write a program that prints the alphabet in lowercase, followed by a new line.

   * Print all the letters except q and e
   * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
   * All your code should be in the main function
   * You can only use putchar twice in your code
_Repo_
	* File: 4-print_alphabt.c


5. Numbers
_mandatory_

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

   * All your code should be in the main function
_Repo_
	* File: 5-print_numbers.c


6. Numberz
_mandatory_

Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.

   * You are not allowed to use any variable of type char
   * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
   * You can only use putchar twice in your code
   * All your code should be in the main function
_Repo_
	* File: 6-print_numberz.c


7. Smile in the mirror
_mandatory_

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

   * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
   * All your code should be in the main function
   * You can only use putchar twice in your code
_Repo_
	* File: 7-print_tebahpla.c


8. Hexadecimal
_mandatory_

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

   * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
   * All your code should be in the main function
   * You can only use putchar three times in your code
_Repo-
	*File: 8-print_base16.c


9. Patience, persistence and perspiration make an unbeatable combination for success
_mandatory_

Write a program that prints all possible combinations of single-digit numbers.

   * Numbers must be separated by ,, followed by a space
   * Numbers should be printed in ascending order
   * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
   * All your code should be in the main function
   * You can only use putchar four times maximum in your code
   * You are not allowed to use any variable of type char
_Repo_
	* File: 9-print_comb.c


10. Inventing is a combination of brains and materials. The more brains you use, the less material you need
_#advanced_

Write a program that prints all possible different combinations of two digits.

   * Numbers must be separated by ,, followed by a space
   * The two digits must be different
   * 01 and 10 are considered the same combination of the two digits 0 and 1
   * Print only the smallest combination of two digits
   * Numbers should be printed in ascending order, with two digits
   * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
   * You can only use putchar five times maximum in your code
   * You are not allowed to use any variable of type char
   * All your code should be in the main function
_Repo_
	* File: 100-print_comb3.c


11. The success combination in business is: Do what you do better... and: do more of what you do...
_#advanced_

Write a program that prints all possible different combinations of three digits.

   * Numbers must be separated by ,, followed by a space
   * The three digits must be different
   * 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
   * Print only the smallest combination of three digits
   * Numbers should be printed in ascending order, with three digits
   * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
   * You can only use putchar six times maximum in your code
   * You are not allowed to use any variable of type char
   * All your code should be in the main function
_Repo_
	* File: 101-print_comb4.c


12. Software is eating the World
_#advanced_

Write a program that prints all possible combinations of two two-digit numbers.

   * The numbers should range from 0 to 99
   * The two numbers should be separated by a space
   * All numbers should be printed with two digits. 1 should be printed as 01
   * The combination of numbers must be separated by comma, followed by a space
   * The combinations of numbers should be printed in ascending order
   * 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
   * You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
   * You can only use putchar eight times maximum in your code
   * You are not allowed to use any variable of type char
   * All your code should be in the main function
_Repo_
	* File: 102-print_comb5.c
