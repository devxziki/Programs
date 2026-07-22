import java.util.*;
class p1{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		int a,b,c;
		System.out.println("Enter 3 Numbers: ");
		System.out.print("Enter Number 1: ");
		a=sc.nextInt();
		System.out.print("Enter Number 2: ");
		b=sc.nextInt();
		System.out.print("Enter Number 3: ");
		c=sc.nextInt();
		
		if(a>b && a>c){
			System.out.println("Largest Number is "+a);
		}
		else if(b>c){
			System.out.println("Largest Number is "+b);
		}
		else{
			System.out.println("Largest Number is "+c);
		}
		sc.close(); 
	}
}
/* Output
	Enter 3 Numbers:
	Enter Number 1: 20
	Enter Number 2: 30
	Enter Number 3: 1
	Largest Number is 30
*/