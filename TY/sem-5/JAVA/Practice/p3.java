import java.util.Scanner; 
class p3{ 
    public static void main(String args[]) { 
    Scanner sc = new Scanner(System.in); 

    int a[] = new int[5]; 

    System.out.println("Enter Elements:"); 

        for(int i=0;i<5;i++){
            System.out.print("Enter Value:"+i);
            System.out.print(" ");
            a[i]=sc.nextInt(); 
        } 
         System.out.println("Array Elements:"); 
        for(int i=0;i<5;i++) {
            System.out.println(a[i]);
        }
        sc.close();
    } 
}
/*
    Output:
    Enter Value:0 10
    Enter Value:1 20
    Enter Value:2 30
    Enter Value:3 40
    Enter Value:4 50
    
    Array Elements:
    10
    20
    30
    40
    50
*/