import java.util.Scanner;

public class AlgorithmLab1 {
    public static void main(String[] args){
        Scanner input=new Scanner (System.in);
        int size,key,flag = 0;
        System.out.println("How many numbers?: ");
        size=input.nextInt();
        int[] num= new int[size];
        System.out.println("Enter the numbers: ");
        for(int i=0;i<size;i++){
            num[i]=input.nextInt();
        }
        System.out.println("Search?: ");
        key=input.nextInt();
        for(int i=0;i<num.length;i++){
            if(key==num[i]){
                //System.out.println("Yes Found at position "+(i+1));
                flag++;
            }
        }
        int p[]=new int[flag];
        int j=0;
        for(int i=0;i<size;i++){
            if(key==num[i]){
                p[j]=i+1;
                j++;
            }
        }
        if(flag==0){         
            System.out.println("Not Found!");
        }
        else{
            System.out.print("Found at position ");
            for(int i=0;i<flag;i++){
                System.out.print(p[i]+"");
                if(i!=flag-1){
                    System.out.print(",");
                }else{
                    System.out.print(".");
                }
            }
        }
    }
}
