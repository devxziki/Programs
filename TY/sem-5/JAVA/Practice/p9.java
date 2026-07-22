class p9 { 
    p9() { 
        System.out.println("Default Constructor"); 
    } 
    p9(int a) { 
        System.out.println("Parameterized Constructor="+a); 
    } 
    public static void main(String args[]) { 
        p9 d1=new p9(); 
        p9 d2=new p9(100); 
    } 
}