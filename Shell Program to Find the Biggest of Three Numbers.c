AIM:  
To write a shell program to find the biggest of three given numbers.  
 
ALGORITHM: 
1. Read three numbers from the user. 
2. Compare the numbers using conditional statements. 
3. Display the largest number. 
 
PROGRAM: 
#!/bin/bash 
echo "Enter three numbers:" 
read a 
read b 
read c 
 
if [ $a -gt $b ] && [ $a -gt $c ] 
then 
  echo "Biggest number is $a" 
elif [ $b -gt $c ] 
then 
  echo "Biggest number is $b" 
else 
  echo "Biggest number is $c" 
fi 
