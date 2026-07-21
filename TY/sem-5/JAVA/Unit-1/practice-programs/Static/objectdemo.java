class student{
	int id;
	String name;
	void output(){
		System.out.println(id);
		System.out.println(name);
	}
}
class objectdemo{
	public static void main(String args[]){
		student s=new student();
		s.id=01;
		s.name="abc";
		s.output();
	}
}
/* Output:
		1
		abc
*/