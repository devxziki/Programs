class Student { 
    int id=101; 
    String name="Rahul"; 
        void display() { 
            System.out.println(id); 
            System.out.println(name); 
        } 
        public static void main(String args[]) { 
        Student s=new Student(); 
        s.display(); 
    } 
}