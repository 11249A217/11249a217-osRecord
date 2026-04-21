AIM: 
To write a shell program to find the biggest of two given numbers. 
 
ALGORITHM:  
1. Read two numbers from the user. 
2. Compare the two numbers. 
3. Display the larger number. 
 
PROGRAM: 
#!/bin/bash 
echo "Enter first number:" 
read a 
echo "Enter second number:" 
read b 
if [ $a -gt $b ] 
then 
  echo "Biggest number is $a" 
else 
  echo "Biggest number is $b" 
fi
