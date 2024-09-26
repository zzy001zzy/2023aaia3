import java.util.*;
public class main{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		ArrayList<Integer> a=new ArrayList<>();
		while(true){
			int n=sc.nextInt();
			if(n==0) break;
			a.add(n);
		}
		int find=sc.nextInt();
		int ans=0;
		for(int i:a){
			if(i==find) ans++;
		}
		System.out.println(ans);
	}
}