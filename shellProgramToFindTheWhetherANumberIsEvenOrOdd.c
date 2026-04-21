AIM:  
To write a shell program to check whether a given number is even or odd. 
 
ALGORITHM: 
1. Read a number from the user. 
2. Find the remainder when the number is divided by 2. 
3. If the remainder is 0, display “Even”. 
4. Otherwise, display “Odd”.

PROGRAM:
#!/bin/bash 
echo "Enter a number:" 
read n 
if [ $((n % 2)) -eq 0 ] 
then 
  echo "The number is Even" 
else 
  echo "The number is Odd" 
fi
