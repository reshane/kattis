/* Kafkaesque.java
 * Shane Kenny
 * 3/3/2021
 */

 import java.util.*;

 public class Kafkaesque {
 	public static void main(String [] args) {
 		Scanner sc = new Scanner(System.in);
 		int s = sc.nextInt(), p = 100, t = 0;
 		for (int i = 0; i < s; i++) {
 			int c = sc.nextInt();
 			if (c < p) {
 				t++;
 			}
 			p = c;
 		}
 		System.out.println(t);
 	}
 }