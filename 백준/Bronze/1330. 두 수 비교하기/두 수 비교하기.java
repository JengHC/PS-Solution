import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
        int a;
        int b;
		String c;
        
        a=scan.nextInt();
        b=scan.nextInt();
        
		if(a>b) {
			c=">";
			System.out.print(c);
		}
		else if(a<b) {
			c="<";
			System.out.print(c);
		}
		else if(a==b){
			c="==";
			System.out.print(c);
		}
	}
}
