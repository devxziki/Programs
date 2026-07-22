class p10 { 
    void add(int a,int b) { 
        System.out.println(a+b); 
    } 
    void add(int a,int b,int c) { 
        System.out.println(a+b+c); 
    } 
    public static void main(String args[]) { 
        p10 o=new p10(); 
        o.add(10,20); 
        o.add(10,20,30); 
    } 
}