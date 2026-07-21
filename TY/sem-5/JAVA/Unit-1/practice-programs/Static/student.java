class student{
	private int id;
	private String name;

	student(int id, String name){
		this.id = id;
		this.name = name;
	}

	void output(){
		System.out.println("Student ID: " + id);
		System.out.println("Student Name: " + name);
	}
}
/* Output:
		Student ID: 1
		Student Name: abc
*/