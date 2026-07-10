import java.util.*;
class p2{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int s;
        while(true){
            System.out.print("Enter Number For Switch Condition: ");
            s=sc.nextInt();
        
          switch(s){
                case 1:
                    System.out.println("Monday");
                    break;
                case 2:
                    System.out.println("Tuesday");
                    break;
                    
                case 3:
                    System.out.println("Wednesday");
                    break;
                case 4:
                    System.out.println("Thursday");
                    break;
                case 5:
                    System.out.println("Friday");
                    break;
                case 6:
                    System.out.println("Saturday");
                    break;
                case 7:
                    System.out.println("Sunday");
                    break;
                case 8:
                    System.exit(0);
                default:
                    System.out.println("Choose Valid Condition");
            }
        }
    }
}
/* output:
    Tuesday
*/