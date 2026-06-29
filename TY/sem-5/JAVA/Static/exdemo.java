class student{
	private int rno;
	public void setrno(int r){
		rno=r;
	/*	System.out.println(id);
		System.out.println(name);*/
	}
	
	public int getrno(){
		return rno;
	}
}
class exdemo{
	public static void main(String args[]){
		student s=new student();
		s.setrno(101);
		System.out.println(s.getrno());
	}
}