//clone constructor
public class Student {
int id;
String name;
Student(String s, int a )
{
	name=s;
	id=a;
}
void Display()
{
	System.out.println("Student Name : "+name+"\t ID Number :  "+id);
}
Student(Student cl)
{
	name=cl.name;
	id=cl.id;
}
public static void main(String args[])
{
  Student s1=new Student("ABHISHEK",800);
  Student s2= new Student(s1);
  s1.Display();
  s2.Display();
}
}

