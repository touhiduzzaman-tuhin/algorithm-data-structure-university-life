#include <bits/stdc++.h>

using namespace std;

int MAXSIZE = 100;
char STACK[100];
int top = -1;

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}

int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

char peek() {
   return STACK[top];
}

char pop() {
   char data;

   if(!isempty()) {
      data = STACK[top];
      top = top - 1;
      return data;
   } else {
      printf("Could not retrieve data, STACK is empty.\n");
   }
}

char push(char data) {

   if(!isfull()) {
      top = top + 1;
      STACK[top] = data;
   } else {
      printf("Could not insert data, STACK is full.\n");
   }
}

int main() {
   char input[100];
   gets(input);
   int d1, d2, c;

   for(int i=0; i < strlen(input); i++){

        if(input[i] == '0' || input[i] == '1' || input[i] == '2' || input[i] == '3' || input[i] == '4' || input[i] == '5' || input[i] == '6' || input[i] == '7' || input[i] == '8' || input[i] == '9'){
            push(input[i]);
        }

        else{


            if(input[i] == '/'){
                d1 = input[i-2] - 48;
                d2 = input[i-1] - 48;
                c = d2 / d1;

                printf("%d %c %d = %d", d1, input[i], d2, c);

                push(c);
            }
            else if(input[i] == '*'){
                d1 = input[i-2] - 48;
                d2 = input[i-1] - 48;
                c = d1 * d2;

                printf("%d %c %d = %d", d1, input[i], d2, c);

                push(c);
            }
            else if(input[i] == '-'){
                d1 = input[i-2] - 48;
                d2 = input[i-1] - 48;
                c = d1 - d2;

                printf("%d %c %d = %d", d1, input[i], d2, c);

                push(c);
            }
            else if(input[i] == '+'){
                d1 = input[i-2] - 48;
                d2 = input[i-1] - 48;
                c = d1 + d2;

                printf("%d %c %d = %d", d1, input[i], d2, c);

                push(c);
            }
        }
   }


   return 0;
}

