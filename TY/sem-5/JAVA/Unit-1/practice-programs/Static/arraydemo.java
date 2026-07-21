import java.util.*;
class arraydemo{
    public static void main(String args[]){
        int mark[]= {10,20,30};
        String name[]= {"A","B","C"};
        System.out.println("Marks of students");
        for(int i=0;i<3;i++){
            System.out.println(mark[i]);
        }
        System.out.println("Names of students");
        for(int i=0;i<3;i++){
            System.out.println(name[i]);
        }
        System.out.println("Marks and Names of students");
        System.out.println("Marks of students");
        System.out.println(Arrays.toString(mark));
        System.out.println("Names of students");
        System.out.println(Arrays.toString(name));
    }
}
/* Output:
  Marks of students
    10
    20
    30
    Names of students
    A
    B
    C
    Marks and Names of students
    Marks of students
    [10, 20, 30]
    Names of students
    [A, B, C]
*/