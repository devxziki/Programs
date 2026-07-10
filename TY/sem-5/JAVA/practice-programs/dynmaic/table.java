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
/*
    Output:
    10*1=10
    10*2=20
    10*3=30
    10*4=40
    10*5=50
    10*6=60
    10*7=70
    10*8=80
    10*9=90
    10*10=100
    
*/