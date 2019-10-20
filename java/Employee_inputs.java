import java.util.Scanner;

public class Employee 
{
private String name; 
private int id;


public String getName() {
     return name;
   	}

public int getIdNum() {
      return id;
         }

public void setName(String newName) {
            name = newName;
         }

        public void setIdNum( int newId) {
     	  id = newId;
        }

    public static void main(String[] args) {  
    Scanner sc = new Scanner(System.in); 
	
	Employee employees[]; 
	
	System.out.println("How many employees you want to enter:");
    
	int num = sc.nextInt(); 
	
	employees = new  Employee[num];
	
	for(int i=0;i<num;i++)
	{
		employees[i]=new Employee();
		System.out.println(i+" Hi, please Enter your name ");
		String temp = sc.next();
		employees[i].setName(temp);
		
		System.out.println("You entered "+employees[i].getName());	

		System.out.println("Enter Your ID ");
		
		employees[i].setIdNum(sc.nextInt());
		
		System.out.println("You entered "+employees[i].getIdNum());


    }
	}		
}


*/