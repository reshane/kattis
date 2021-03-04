/* FinalExamII.java
 * Shane Kenny
 * 3/3/2021
 */

 import java.util.*;

 public class FinalExamII {
 	public static void main(String [] args) {
 		Scanner sc = new Scanner(System.in);
 		int qs = sc.nextInt(), score = 0;
 		String p = sc.next();
 		for (int i = 0; i < qs - 1; i++) {
 			String c = sc.next();
 			if (c.equals(p)) {
 				score++;
 			}
 			p = c;
 		}
 		System.out.println(score);
 	}
 }