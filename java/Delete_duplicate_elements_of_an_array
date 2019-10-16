public class Delete_duplicate_elements_of_an_array {
	
	public static void main(String[] args) {
		
		
		int[] array = new int[] {1,1,1,1,1,1,3};
		int n= array.length;
		System.out.println(n);
		int p=0;
		
		for (int i=0;i<n-1;i++) {
			for(int j=i+1;j<n;j++) {
				if(array[i]==array[j]) {
					p++;
					for(int k=j; k<n-1;k++) {
						array[k]=array[k+1];
					}
					
				}
			}
		}
		
		
		
		for(int i=0;i<n;i++) {
			System.out.println(array[i]);
		}
		System.out.println("p= "+p);
		
		
		
		
		
	}

}
