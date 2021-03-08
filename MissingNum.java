/* MissingNum.java
 * 3/6/2021
 */

 import java.util.*;

public class MissingNum {
	public static void main(String []  args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		sc.nextLine();
		String d = sc.nextLine();
		if (n == 2) {
			if (d.substring(0).equals("1")) {
				System.out.println(2);
			} else {
				System.out.println(1);
			}
		}
		else if (!(d.substring((d.length() - ("" + n).length())).equals("" + n))) {
			System.out.println(n);
		}
		else {
			int j = 0;
			for (int i = 0; i < n; i++) {
				String c = "" + (i + 1);
				if (!(d.substring(j, j + c.length()).equals(c))) {
					System.out.println(c);
					break;
				}
				j += c.length();
			}
		}
	}
}