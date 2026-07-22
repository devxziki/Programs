class A { 
 
    void display() { 
        System.out.println("Parent"); 
    } 
} 
 
class B extends A { 
 
    void show() { 
        System.out.println("Child 1"); 
    } 
} 
 
class p14 extends A { 
 
    void print() { 
        System.out.println("Child 2"); 
    } 
 
    public static void main(String args[]) { 
 
        p14 obj=new p14(); 
 
        obj.display(); 
 
        obj.print(); 
 
    } 
}