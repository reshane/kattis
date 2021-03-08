/* RatingProblems.java
 * 3/6/2021
 */

 import java.util.*;

 public class RatingProblems {
 	public static void main(String [] args) {
 		Scanner sc = new Scanner(System.in);
 		int n = sc.nextInt(), k = sc.nextInt();
 		double score = 0;
 		for (int i = 0; i < k; i++) {
 			score += sc.nextInt();
 		}
 		double max = (score + ((n - k) * 3)) / n;
 		double min = (score + ((n - k) * -3)) / n;
 		System.out.println(min + " " + max);
 	}
 }