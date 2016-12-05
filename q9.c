import java.util.*;
public class ring {
 
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        TreeSet<Integer> ts = new TreeSet<Integer>();
        System.out.println("Enter Number of Process");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> arr = new ArrayList<Integer>();
        for(int i=1;i<=n;i++)
        {
            int inp = sc.nextInt();
            ts.add(inp);
            arr.add(inp);
        }
        boolean c = true;
        System.out.println("Process Co-Ordinator is :" + ts.last());
        while(c)
        {
            System.out.println("1.Crash \n2.Recover \n3.Exit \n");
            int p = sc.nextInt();
            if(p == 3)
            {
                c = false;
                continue;
            }
            if(p == 1)
            {
                System.out.println("Enter element to remove");
                int r = sc.nextInt();
                if(ts.contains(r))
                {
                    ts.remove(r);
                    if(!ts.isEmpty())
                        System.out.println("Process Co-Ordinator is :" + ts.last());
                    else
                        System.out.println("No process present");
                }
                else
                {
                    System.out.println("The element might be already removed or unknown element");
                }
            }
            if(p == 2)
            {
                System.out.println("Enter Process to be recovered");
                int q = sc.nextInt();
                     
                if(!ts.contains(q) && arr.contains(q))
                {
                    ts.add(q);
                    System.out.println("Process Co-Ordinator is :" + ts.last());
                }
                else
                {
                    System.out.println("Process in use or invalid input");
                }
                 
            }
        }
    }
 
}

