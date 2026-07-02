import java.util.*;
class studentarray{
    public static void main(String args[]){
        int rno[]= {27,31,42};
        String name[]= {"joyeb","mehul","tushal"};
        String s_class[]= {"TY-C","TY-C","TY-C"};
        long mob[]= {9876543210L,9876543211L,9876543212L};
        String address[]= {"Ahmedabad","Surat","Vadodara"};
        String email[]={"joyebofficial@gmail.com","mehul@gmail.com","tushal@gmail.com"};

        for(int i=0;i<3;i++){
            System.out.println("Roll No: "+rno[i]);
            System.out.println("Name: "+name[i]);
            System.out.println("Class: "+s_class[i]);
            System.out.println("Mobile No: "+mob[i]);
            System.out.println("Address: "+address[i]);
            System.out.println("Email: "+email[i]);
            System.out.println();
        }
    }
}
/* output:
    Roll No: 27
    Name: joyeb
    Class: TY-C
    Mobile No: 9876543210
    Address: Ahmedabad
    Email: joyebofficial@gmail.com

    Roll No: 31
    Name: mehul
    Class: TY-C
    Mobile No: 9876543211
    Address: Surat
    Email: mehul@gmail.com

    Roll No: 42
    Name: tushal
    Class: TY-C
    Mobile No: 9876543212
    Address: Vadodara
    Email: tushal@gmail.com
*/