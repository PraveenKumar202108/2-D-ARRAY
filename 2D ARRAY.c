 #include<stdio.h>

int main(){
  int a, b, X, count=0;


  printf("Enter the number of Row and Column: \n");
  scanf("%d %d", &a, &b);


  int array[a][b];


  printf("Enter %d elements: \n", (a*b));
  for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
      scanf("%d", &array[i][j]);
    } }

  printf("Enter the element to get the position: \n");
  scanf("%d", &X);

  for(int i=0; i<a; i++){
    for(int j=0; j<b; j++){
      if(array[i][j] == X){

        printf("(%d, %d) \n", i, j);
        count++;
      }
    } }


  if(count==0)
    printf("Not found \n");

  return 0;
}
