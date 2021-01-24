
package mergesort;

import java.util.Scanner;

/**
 *
 * @author Administrator
 */
public class MergeSort {

   
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("How many elements in your array?");
        int size = input.nextInt();
        int inputArray[] = new int[size];
        for (int i = 0; i < inputArray.length; i++) {
            inputArray[i]=input.nextInt();
        }
        mergeSort(inputArray,0,size-1);
        for (int i = 0; i < inputArray.length; i++) {
            System.out.print(inputArray[i]+" ");
        }
       
    }
    public static void mergeSort(int a[], int begin, int end){
       if(begin<end){
        int mid = (begin+end)/2;
        mergeSort(a,begin,mid);
        mergeSort(a,mid+1,end);
        merge(a,begin,mid,end);
       }
    }
    
    public static void merge(int a[], int begin, int mid, int end){
        int size1 = mid-begin+1;
        int size2 = end-mid;
        int left[] = new int[size1+1];
        int right[] = new int[size2+1];
        for (int i = 0; i <size1; i++){
            left[i]=a[begin+i];
        }
        for (int i = 0; i < size2; i++){
            right[i]=a[mid+1+i];
        }
        left[size1]=Integer.MAX_VALUE;
        right[size2]=Integer.MAX_VALUE;
        int i=0,j=0;
        for (int k = begin; k <= end; k++) {
            if(left[i]<=right[j]){
                a[k]=left[i];
                i++;
            }else{
                a[k]=right[j];
                j++;
            }
        }
    }
    
}
