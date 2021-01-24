
import java.util.Scanner;

public class BinarySearch {
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        int size,key;
        System.out.print("How many inputs?: ");
        size=input.nextInt();
        int a[]=new int[size];
        for(int i=0;i<size;i++){
            a[i]=input.nextInt();
        }
        System.out.print("Search?: ");
        key=input.nextInt();
        int flag=binarySearch(a,key,0,size-1);
        if (flag==-1)
            System.out.println("Sorry! Not Found!");
        else
            System.out.println("Found at "+(flag+1));
    }
    
    public static int binarySearch(int a[],int key,int begin,int end){
        if(begin>end)
            return -1;
        int mid=(begin+end)/2;
        if(key==a[mid])
            return mid;
        else if(key>a[mid])
            return binarySearch(a,key,mid+1,end);
        else
            return binarySearch(a,key,begin,mid-1);
    }
}
