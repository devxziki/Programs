/*Program 1:- Write a program to perform addition, subtraction, multiplication, division, and modulo operations on two numbers using Arithmetic operators. */
import java.util.*;
class p1{
    public static void main(String args[]){

        Scanner sc=new Scanner(System.in);
        int a; 
        int b;
        System.out.println("Enter Number For calculations");
        System.out.print("Enter Value A: ");
        a=sc.nextInt();
        System.out.print("Enter Value B: ");
        b=sc.nextInt();
        System.out.println("");
        System.out.println("Calculations");
        System.out.println("");
        System.out.println("Addition: " + (a + b));
        System.out.println("Subtraction: " + (a - b));
        System.out.println("Multiplication: " + (a * b));
        System.out.println("Division: " + (a / b));
        System.out.println("Modulo: " + (a % b));   
    }
}
/* Static output:
Addition: 30
Subtraction: -10
Multiplication: 200
Division: 0
Modulo: 10

Dynamic Ouput:
Enter Number For calculations
Enter Value A: 10
Enter Value B: 20

Calculations

Addition: 30
Subtraction: -10
Multiplication: 200
Division: 0
Modulo: 10
*/