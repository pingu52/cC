import java.io.*;
import java.util.LinkedList;
import java.util.Queue;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int [] arr = new int[n];
        Queue<Integer> q = new LinkedList<>();
        
        for(int i=1;i<=n;i++){
            q.add(i);
        }

        while(true){
            if(n==1) break;
            q.remove();
            int a=q.poll();
            q.add(a);
            n--;
        }
        System.out.println(q.peek());
    }

}