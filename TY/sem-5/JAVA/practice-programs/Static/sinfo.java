class student{
	int sid;
	int rno;
	String phn;
	String name;
	String address;
	String city;
	String div;
	String year;
	
	void output(){
		System.out.println("Student id is : "+sid);
		System.out.println("Student roll number is : "+rno);
		System.out.println("Student Phone number is : "+phn);
		System.out.println("Student Name is : "+name);
		System.out.println("Student Address is : "+address);
		System.out.println("Student City is : "+city);
		System.out.println("Student class is : "+div);
		System.out.println("Student year is : "+year);
	}
}

class sinfo{
	public static void main(String args[]){
		student s=new student();
		s.sid=124;
		s.rno=27;
		s.phn="0123456789";
		s.name="joyeb";
		s.address="paliyad road subham building";
		s.city="botad";
		s.div="class-c";
		s.year="TY-third year";
		s.output();
	}
}
/* Output:
		Student id is : 124
		Student roll number is : 27
		Student Phone number is : 0123456789
		Student Name is : joyeb
		Student Address is : paliyad road subham building
		Student City is : botad
		Student class is : class-c
		Student year is : TY-third year
*/