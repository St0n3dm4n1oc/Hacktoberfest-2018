// Insertion sort ascending order

#include <stdio.h>

int main()
{
  int Value, array[1000], Counter, Cond_Acc/*conditional accountant*/, Helper;//Value Taker

  printf("Enter number of elements--->");
  scanf("%d", &Value);

  printf("Enter [%d] integers\n", Value);

  for (Counter = 0; Counter < Value; Counter++)
    scanf("%d", &array[Counter]);

  for (Counter = 1 ; Counter <= Value - 1; Counter++) {
    Cond_Acc = Counter;//assumes the value of the counter

    while ( Cond_Acc > 0 && array[Cond_Acc-1] > array[Cond_Acc]) {
      Helper            = array[Cond_Acc];
      array[Cond_Acc]   = array[Cond_Acc-1];
      array[Cond_Acc-1] = Helper; //takes the value of the conditional accountant

      Cond_Acc--;
    }
  }

  printf("\nThe values listed above were ordered as follows:\n");

  for (Counter = 0; Counter <= Value - 1; Counter++) {
    printf("%d\n", array[Counter]);
  }

  return 0;
}
