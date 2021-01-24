# include <stdio.h>

int ar[100];
int start, end;

void option(){

    printf ("Press '1' to push value in Queue\n");
    printf ("Press '2' to pop a value from Queue\n");
    printf ("Press '3' to see the front value of the Queue\n");
    printf ("Press '4' to show all the elements of the Queue\n");
    printf ("Press '0' to Exit \n");

}

void push(int num){
    end ++;
    ar[end] = num;
    return ;
}

void pop(){
    start++;
}

int main(){

    int i, j, k; // iterative variables
    start = end = -1;
    int op, num;

    option();
    start++;
    while( 1 ){
        scanf("%d", &op);
        if( op == 1 ){
            printf ("Please enter the value you want to push in Queue : ");
            scanf ("%d", &num);
            push( num );
        }
        else if( op==2 ){
            printf ("Front value poped.");
            pop();
        }
        else if( op==3 ){
            printf ("Front value of the Queue is: ");
            if( start<=end ){
                printf ("%d", ar[start]);
            }
            else{
                printf ("Queue is empty");
            }
        }
        else if( op==4){
//                printf ("end : %d\n", end)
                if( end == -1 || end<start ){
                    printf ("Queue is empty");
                }
                else{
                    printf ("Elements of the Queue: ");
                    for( i=start ; i<=end ; i++ ){
                        printf ("%d ", ar[i]);
                    }
            }
        }
        else if(op==0) break;

        printf ("\n\n");
        option();
    }

    return 0;
}

