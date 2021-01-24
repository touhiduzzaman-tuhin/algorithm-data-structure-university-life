public class Permutation {
    public static void main(String[] args){
        int first, second, third, count=0;
        for(first=0;first<=9;first++){
            for(second=0;second<=9;second++){
                for(third=0;third<=9;third++){
                    System.out.println(first +"-"+second+"-"+third);
                    count++;
                }
            }
        }
        System.out.println("Total="+count);
    }
}
