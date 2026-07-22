import java.util.Scanner; 
 
class Vowel { 
 
    public static void main(String args[]) { 
 
        Scanner sc=new Scanner(System.in); 
 
        System.out.print("Enter String: "); 
 
        String s=sc.nextLine().toLowerCase(); 
 
        int v=0,c=0; 
 
        for(int i=0;i<s.length();i++) { 
 
            char ch=s.charAt(i); 
 
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') 
                v++; 
            else if(ch>='a'&&ch<='z') 
                c++; 
        } 
 
        System.out.println("Vowels="+v); 
        System.out.println("Consonants="+c);
        
        sc.close();
    } 
} 
