import java.util.*;
class findlargenumber{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int no1,no2,no3;

        System.out.print("Enter No1: ");
        no1=sc.nextInt();

        System.out.print("Enter No2: ");
        no2=sc.nextInt();

        System.out.print("Enter No3: ");
        no3=sc.nextInt();

        if(no1>no2 && no1>no3){
            System.out.println("The greatest Number is: "+no1);
        }
        else if(no2>no1 && no2>no3){
            System.out.println("The greatest Number is: "+no2);
        }
        else{
            System.out.println("The greatest Number is: "+no3);
        }
        sc.close();
    }
}