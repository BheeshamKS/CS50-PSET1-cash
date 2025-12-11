# CS50 PROBLEM SET 1 - Cash

This repository contains my solution for the Cash problem from Harvard's CS50 Problem Set 1. The program calculates the minimum number of coins needed to give a user change.

## Files
- `cash.c` : Main solution file that calculates minimum coins required for a given amount of change.

## Description
The program prompts the user for an amount of change in cents and computes the minimum number of coins (quarters, dimes, nickels, and pennies) needed to make that change. The logic uses a **greedy algorithm** approach:

- While there is remaining change:  
  - Use as many **quarters (25¢)** as possible  
  - Then **dimes (10¢)**  
  - Then **nickels (5¢)**  
  - Finally **pennies (1¢)**  

### Example Run
Change Owed: 41
4
> Explanation: 1 quarter + 1 dime + 1 nickel + 1 penny = 4 coins  

## How to Run
Compile and run the program using GCC with CS50 library:

```bash
gcc -o cash cash.c -lcs50
./cash

