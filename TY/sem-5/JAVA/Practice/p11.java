class A { 
    void show() { 
        System.out.println("Parent"); 
    } 
    } 
    class p11 extends A { 
        void show() { 
        System.out.println("Child"); 
    } 
    
        public static void main(String args[]) { 
    
            p11 obj=new p11(); 
    
            obj.show(); 
    
        } 
}