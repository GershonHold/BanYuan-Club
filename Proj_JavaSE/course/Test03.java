//不规则数组

public class Test03 {
	public static void main(String[] args) {
		int [][] a = new int [6][];
		a[0] = new int [1];
		a[1] = new int [2];
		a[2] = new int [3];
		a[3] = new int [4];
		a[4] = new int [5];
		a[5] = new int [6];
		a[0][0] = 1;
		a[1][0] = 2;a[1][1]=3;
		a[2][0] = 4;a[2][1] = 5;a[2][2]=6;
		for (int i = 0; i < a.length; i++) {
			for (int j = 0; j < a[i].length; j++) {
				System.out.print(a[i][j] + " ");
			}
			System.out.println("\n");
			
		}
		
	}

}