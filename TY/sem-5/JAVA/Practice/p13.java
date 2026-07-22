class A { 
 
    void display() { 
        System.out.println("Class A"); 
    } 
} 
 
class B extends A { 
 
    void show() { 
        System.out.println("Class B"); 
    } 
} 
 
class p13 extends B { 
 
    public static void main(String args[]) { 
 
        p13 obj=new p13(); 
 
        obj.display(); 
 
        obj.show(); 
 
    } 
} 