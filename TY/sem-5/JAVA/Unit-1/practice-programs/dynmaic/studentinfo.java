import java.util.*;
class studentinfo{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);

        int sid;
        double mark;
        String name;
        String city;
        String email;
        String dob;

        System.out.print("Enter Student ID No: ");
        sid=sc.nextInt();

        sc.nextLine(); // buffer value 

        System.out.print("Enter Student Name: ");
        name=sc.nextLine();
        System.out.print("Enter Student Mark : ");
        mark=sc.nextDouble();

        sc.nextLine(); // buffer value

        System.out.print("Enter Student city : ");
        city=sc.nextLine();

        System.out.print("Enter Student Email : ");
        email=sc.nextLine();

        System.out.print("Enter Student Date Of Birth : ");
        dob=sc.nextLine();
        System.out.println("");

        System.out.println("Student Details : ");
        System.out.println("");
        System.out.println("Student id is : "+sid);
        System.out.println("Student Name is : "+name);
        System.out.println("Student Mark is : "+mark);
        System.out.println("Student City is : "+city);
        System.out.println("Student Email id  is : "+email);
        System.out.println("Student DOB is : "+dob);

        sc.close();
    }
}
/*
    Output:
    Enter Student ID No: 10
    Enter Student Name: joyeb
    Enter Student Mark : 89
    Enter Student city : botad
    Enter Student Email : joyeb@gmail.com
    Enter Student Date Of Birth : 29-01-2006

    Student Details : 

    Student id is : 10
    Student Name is : joyeb
    Student Mark is : 89.0
    Student City is : botad
    Student Email id  is : joyeb@gmail.com
    Student DOB is : 29-01-2006
*/