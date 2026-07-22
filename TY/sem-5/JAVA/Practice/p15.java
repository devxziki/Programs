interface Demo { 
    void show(); 
} 
class p15 implements Demo { 
    public void show() { 
        System.out.println("Interface Method"); 
    } 
    public static void main(String args[]) { 
        p15 t=new p15(); 
        t.show(); 
    } 
}