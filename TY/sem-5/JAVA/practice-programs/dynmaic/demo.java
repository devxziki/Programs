import java.util.*;
class demo{
    public static void main(String args[]){
        // scanner function used to take input from the user during runtime dynamically
        Scanner sc=new Scanner(System.in);
        Random r=new Random();
        
        int n=r.nextInt(100)+1;
        int g=0;

        while(g!=n){
            System.out.println("Enter Youre guess: ");
            g=sc.nextInt();

            if(g<n){
                System.out.println("guess Higher");
            }
            else if (g>n){
                System.out.println("guess Lower");
            }
            else{
                System.out.println("guess is right");
            }
        }
        sc.close();
    }
}