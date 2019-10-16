import java.util.Scanner;

public class bubble_sort {

	public static void main(String[] args) {
		
		System.out.println("array of how many numers?");
		int num=in();
		int array[];
		array = new int[num];
		System.out.println("put te elemts");
		for(int i=0;i<num;i++) {
			
			int elements= in();
			array[i]=elements;
		}
		for (int i=0;i<num;i++) {
			System.out.print(array[i]+" ");
		}
		int temp=0;
		
		
		for(int j=0;j<num-1;j++) {
			
			for(int k=0;k<num-1;k++) {
				
				if(array[k]>array[k+1]) {
					
					temp = array[k];
					array[k] = array[k+1];
					array[k+1]=temp;
				}
			}
		}
		System.out.println();
		for (int i=0;i<num;i++) {
			System.out.print(array[i]+" ");
		}
		

	}
	
		
	
	
	public static int in(){
		Scanner in = new Scanner(System.in);
		int num= in.nextInt();
		return num;
	}
	
	

}
