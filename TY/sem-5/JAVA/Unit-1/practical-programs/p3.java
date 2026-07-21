/*program 3:- Write a program to declare an integer array (e.g., marks) and print all its elements using a for loop (dynamic)*/
import java.util.*;
class p3{
    public static void main(String args[]){

        Scanner sc=new Scanner(System.in);
        
        System.out.print("Enter the number of elements: ");
        int n=sc.nextInt();
        
        int marks[]=new int[n];
        
        for(int i=0; i<n; i++){
            System.out.println("Enter the elements[" + i + "] :");
            marks[i]=sc.nextInt();
        }
        System.out.println("Elements of the array are:");
        for(int i=0; i<marks.length; i++){
            System.out.print("marks[" + i + "] = " + marks[i]);
        }
        sc.close();
    }
}
/* Dynamic Output:
Enter the number of elements: 5
Enter the elements:
85
90
78
92
88
Elements of the array are:
marks[0] = 85
marks[1] = 90
marks[2] = 78
marks[3] = 92
marks[4] = 88
*/