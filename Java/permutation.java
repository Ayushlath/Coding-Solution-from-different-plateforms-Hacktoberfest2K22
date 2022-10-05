import java.util.*;

public class permutation {

 //declaration private int variable
    private static int n;

    
/*----------------------------------printing the results------------------------------------------------- */
    private static void printResult(int result[]){
        Set<Integer> set = new HashSet<>();
        int num[] = new int[result.length];
        for(int i=1;i<=n;i++){
            num[i-1] = result[i-1];
        }
        for(int i: num){
            set.add(i);
        }
        if(set.size()==n){
            String s = "[ ";
            for(int p : num){
                s += p+" ";
            }
            System.out.println(s+" ]");
        }
    }

    
/*----------------------------------permute method------------------------------------------------- */
    private static void permute(int result[], int idx){
        if(idx==result.length){
            printResult(result);
            return;
        }
        for(int i=1;i<=n;i++){
            result[idx] = i;
            permute(result,idx+1);
        }
    }

/*----------------------------------main------------------------------------------------- */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("please ente the value: ");
        n = sc.nextInt();
        int result[] = new int[n];
        permute(result, 0);
    }

}