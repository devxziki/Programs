import java.util.*;
class p2{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int s;
        outer:
        while(true){
            System.out.println("No 1: Monday");
            System.out.println("No 2: Tuesday");
            System.out.println("No 3: Wednesday");
            System.out.println("No 4: Thursday");
            System.out.println("No 5: Friday");
            System.out.println("No 6: Saturday");
            System.out.println("No 7: Sunday");
            System.out.println("No 8: Exit The loop");

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
                    System.out.println("Exiting program");
                    break outer;
                default:
                    System.out.println("Choose Valid Condition");
            }
        }
        sc.close();
    }
}
/* output:
    No 1: Monday
No 2: Tuesday
No 3: Wednesday
No 4: Thursday
No 5: Friday
No 6: Saturday
No 7: Sunday
No 8: Exit The loop
Enter Number For Switch Condition: 1
Monday
No 1: Monday
No 2: Tuesday
No 3: Wednesday
No 4: Thursday
No 5: Friday
No 6: Saturday
No 7: Sunday
No 8: Exit The loop
Enter Number For Switch Condition: 2
Tuesday
No 1: Monday
No 2: Tuesday
No 3: Wednesday
No 4: Thursday
No 5: Friday
No 6: Saturday
No 7: Sunday
No 8: Exit The loop
Enter Number For Switch Condition: 3
Wednesday
No 1: Monday
No 2: Tuesday
No 3: Wednesday
No 4: Thursday
No 5: Friday
No 6: Saturday
No 7: Sunday
No 8: Exit The loop
Enter Number For Switch Condition: 4
Thursday
No 1: Monday
No 2: Tuesday
No 3: Wednesday
No 4: Thursday
No 5: Friday
No 6: Saturday
No 7: Sunday
No 8: Exit The loop
Enter Number For Switch Condition: 5
Friday
No 1: Monday
No 2: Tuesday
No 3: Wednesday
No 4: Thursday
No 5: Friday
No 6: Saturday
No 7: Sunday
No 8: Exit The loop
Enter Number For Switch Condition: 6
Saturday
No 1: Monday
No 2: Tuesday
No 3: Wednesday
No 4: Thursday
No 5: Friday
No 6: Saturday
No 7: Sunday
No 8: Exit The loop
Enter Number For Switch Condition: 7
Sunday
No 1: Monday
No 2: Tuesday
No 3: Wednesday
No 4: Thursday
No 5: Friday
No 6: Saturday
No 7: Sunday
No 8: Exit The loop
Enter Number For Switch Condition: 8
Exiting program
*/