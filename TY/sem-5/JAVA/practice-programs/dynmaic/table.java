import java.util.*;
class table{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int no1;

        System.out.print("Enter to Print TABLE: ");
        no1=sc.nextInt();

        for(int i=1;i<=no1;i++){
            System.out.println((no1)+"*"+(i)+"="+(no1*i));
        }
        sc.close();
    }
}