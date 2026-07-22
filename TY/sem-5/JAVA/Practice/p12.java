class Animal { 
 
    void eat() { 
        System.out.println("Eating"); 
    } 
} 
 
class p12 extends Animal { 
 
    void bark() { 
        System.out.println("Barking"); 
    } 
 
    public static void main(String args[]) { 
 
        p12 d=new p12(); 
 
        d.eat(); 
 
        d.bark(); 
 
    } 
}