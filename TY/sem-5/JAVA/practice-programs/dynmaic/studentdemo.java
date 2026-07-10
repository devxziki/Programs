import java.util.*;
class studentdemo{
    public static void main(String args[]){
        int rno;
        String name;
        double mark;
        // scanner function used to take input from the user during runtime dynamically
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter Student Roll No: ");
        rno=sc.nextInt();
        // used to buffer the value to take the other values from the user 
        sc.nextLine(); // buffer cleaer
        // if this is not used it will not take the String value from the user it will directly exit the program
        System.out.print("Enter Student Name: ");
        name=sc.nextLine();

        System.out.print("Enter Student Mark: ");
        mark=sc.nextDouble();


        System.out.println("Student Details: ");
        System.out.println("Student Roll no Is : "+rno); 
        System.out.println("Student Name Is : "+name); 
        System.out.println("Student Mark Is : "+mark);   
        
        sc.close();
    }
}
/*
    Output:
    Enter Student Roll No: 27
    Enter Student Name: joyeb
    Enter Student Mark: 99
    Student Details: 
    Student Roll no Is : 27
    Student Name Is : joyeb
    Student Mark Is : 99.0
*/