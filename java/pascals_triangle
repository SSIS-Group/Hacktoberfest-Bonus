import java.util.Scanner;

public class pascles_triangle {
	public static void main(String[] args) {
	
	System.out.print("Enter coloumn number: ");
	Scanner input = new Scanner(System.in);
	int n= input.nextInt();
	
	for(int i=0;i<n;i++) {
		for(int j =0;j<n+1-i;j++) {
			System.out.print(" ");
		}
		for(int j =0;j<=i;j++) {
			
			System.out.print(" "+ncr(i,j));
		}
		System.out.println();
	}
	
	
	
	}
	
	public static int ncr (int n,int r) {
		int nfac=1,rfac=1,zfac=1;
		for(int i=1;i<=n;i++) {
			nfac = nfac*i;
		}
		for(int i=1;i<=r;i++) {
			rfac = rfac*i;
		}
		int z =n-r;
		for(int i=1;i<=z;i++) {
			zfac = zfac*i;
		}
		
		int a=rfac*zfac;
		return nfac/a;
	}

}
