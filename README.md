# STRUCTURED-PROGRAMMING-B40352-GIT-ASSIGNMENT
this assignment requires me to fully understand all that we have so far covered in order to attempt the questions that i have selected

## Exercise 1- basic output
The program displays the message Have a nice day then ends.
concepts used: printf,escape sequence (\n)
The program starts in the main function. The printf statement prints the text "Have a nice day." to the screen. The \n at the end of the text moves the cursor to a new line. The program then returns 0 to show it finished successfully.

## Exercise2- input-process-output
The program asks the user to enter three integers, multiplies them together, and displays the product.
Concepts used: integer variables, printf, scanf, address-of operator (&), multiplication operator (*), assignment operator (=), format specifier (%d)
The program declares four integers: x, y, z, and result. It prompts the user for each number in turn, and scanf reads each value into its variable using the %d format specifier and the & operator. The program then calculates result = x * y * z and prints it with printf. The program returns 0 to show it finished successfully.

## Exercise3- decision
The program multiplies a variable by 2 twice, then checks whether a second variable is greater than 10 and prints "count is greater than 10" if it is.
Concepts used: integer variables, variable initialization, compound assignment operator (*=), multiplication, if statement, relational operator (>), printf
 The program declares two integers, product = 5 and count = 15. The statement product *= 2 doubles product to 10, and product = product * 2 doubles it again to 20. The if statement then checks whether count > 10. Since 15 is greater than 10, the condition is true and the program prints "count is greater than 10" followed by a new line. The program then returns 0 to show it finished successfully.

## Exercise4 - basic loop
Source: Deitel & Deitel, C How to Program, 9th Edition, Chapter _4, Exercise 4.3b.
The program prints the numbers 1 to 20, five numbers per row, separated by tabs.
Concepts used: while loop, integer variable, printf, if/else, modulus operator (%), increment operator (++)
The loop starts at x = 1. The condition x <= 20 is checked before each iteration, so the loop stops once x reaches 21. Inside the loop, the program prints x, then checks if x % 5 == 0. If it does, it prints a new line and if not it prints a tab. After each iteration, x is increased by 1 with x++. 

## Exercise5- loop with calculation
The program asks the user how many values they want to enter, then reads that many integers, and displays their sum and average.
Concepts used: integer variables, float variable, for loop, printf, scanf, address-of operator (&), format specifiers (%d, %.2f), division, if statement, relational operator (<=)
The program declares two integers, n and value, and a float, sum, which starts at 0. It asks the user for the number of values and stores it in n. The for loop starts at i = 1. The condition i <= n is checked before each iteration, so the loop runs exactly n times. Inside the loop, scanf reads one integer into value and adds it to sum. After each iteration, i is increased by 1. When the loop ends, the program prints the sum and the average (sum / n), both to two decimal places. Finally, an if statement checks whether n <= 0 and, if so, prints Input a positive number of values. The program then returns 0 to show it finished successfully.

## Exercise6 - loop with user input
The program asks the user to enter five numbers between 1 and 30, and for each valid number it prints a row of that many asterisks (*), making a simple bar chart.
Concepts used: integer variable, nested for loops, printf, scanf, address-of operator (&), format specifiers (%d, %s), if statement, relational operators (<, >), logical OR operator (||), decrement operator (--), continue statement
The program declares an integer, number. The outer for loop starts at val = 1 and the condition val <= 5 is checked before each iteration, so it handles five inputs. Inside the loop, the program prompts the user and scanf reads a value into number. If the number is less than 1 or greater than 30, the program prints an error message, decreases val by 1 so the invalid entry doesn't count, and uses continue to skip to the next iteration and ask again. If the number is valid, the inner for loop starts at i = 1 and runs until i <= number, printing one asterisk each time. After the inner loop finishes, printf("\n") moves to a new line, and after each iteration of the outer loop, val is increased by 1. When five valid numbers have been entered, the program returns 0 to show it finished successfully.

## Exercise7- loop with decision
The program finds and prints all prime numbers from 1 to 100, one per line, and then displays how many it found.
Concepts used: integer variables, nested for loops, printf, if statement, modulus operator (%), relational operators (<=, ==), break statement,increment operator (++)
The program declares the integers num, i, is_prime, and count, with count starting at 0. It first prints a heading. The outer for loop starts at num = 2 and the condition num <= 100 is checked before each iteration, so every number from 2 to 100 is tested. At the start of each iteration, is_prime is set to 1 (true). The inner for loop starts at i = 2 and runs while i * i <= num, since a number that has no divisor up to its square root must be prime. If num % i == 0, the number divides evenly, so is_prime is set to 0 and break exits the inner loop early. After the inner loop, if is_prime is still 1, the program prints num and increases count by 1. After each iteration of the outer loop, num is increased by 1. When the loop ends, the program prints the total count of primes found (25) and returns 0 to show it finished successfully.

## Exercise8 - interactive console program
The program simulates an online retailer's sales tracker. It shows a menu of five products, asks the user to pick a product and enter the quantity sold, then displays a sale summary with a running total. When the user chooses Exit, it displays the total retail value of all products sold.
Concepts used: integer variables, float variables, while loop, infinite loop (while(1)), printf, scanf, address-of operator (&), format specifiers (%d, %.2f), if statement, relational operators (<, >, <=, ==), logical OR operator (||), switch statement, break statement, continue statement, multiplication and addition
The program declares integers product and quantity, and floats price, item_total, and grand_total. The while(1) loop has no ending condition of its own, so it repeats until a break is reached. Each time, the program prints the menu and scanf reads the user's choice into product. If the choice is 6, the program prints an exit message and break leaves the loop. If the choice is below 1 or above 5, it prints an error message and continue returns to the menu. Otherwise, the program asks for the quantity. If the quantity is 0 or less, the transaction is cancelled and continue returns to the menu. A switch statement then sets price and prints the selected product according to the choice. The program calculates item_total = price * quantity, adds it to grand_total, and prints the sale summary with the quantity, price per unit, item total, and running total. After the loop ends, the program prints the total retail value of all products sold and returns 0 to show it finished successfully.

