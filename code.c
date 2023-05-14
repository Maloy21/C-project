#include <stdio.h>
#include <math.h>
int main() {
  char op;
  double num1, num2, res, angle;
  printf("Scientific Calculator\n\n");
  printf("0. Addition\n");
  printf("1. Subtraction\n");
  printf("2. Multiplication\n");
  printf("3. Division\n");
  printf("4. Square root\n");
  printf("5. Sine\n");
  printf("6. Cosine\n");
  printf("7. Tangent\n");
  printf("8. Logarithm (base 10)\n");
  printf("9. Natural Logarithm (base e)\n");
  printf("E. Exit\n\n");
  printf("Enter your option: ");
  scanf(" %c", &op);
  switch (op) {
    case '0':
      printf("Enter two numbers: ");
      scanf("%lf %lf", &num1, &num2);
      res = num1 + num2;
      printf("%lf + %lf = %lf\n", num1, num2, res);
      break;
    case '1':
      printf("Enter two numbers: ");
      scanf("%lf %lf", &num1, &num2);
      res = num1 - num2;
      printf("%lf - %lf = %lf\n", num1, num2, res);
      break;
    case '2':
      printf("Enter two numbers: ");
      scanf("%lf %lf", &num1, &num2);
      res = num1 * num2;
      printf("%lf * %lf = %lf\n", num1, num2, res);
      break;
    case '3':
      printf("Enter two numbers: ");
      scanf("%lf %lf", &num1, &num2);
      res = num1 / num2;
      printf("%lf / %lf = %lf\n", num1, num2, res);
      break;
    case '4':
      printf("Enter a number: ");
      scanf("%lf", &num1);
      res = sqrt(num1);
      printf("The square root of %lf is %lf\n", num1, res);
      break;
    case '5':
      printf("Enter a number: ");
      scanf("%lf", &num1);
      angle = num1 * M_PI / 180.0;
      res = sin(angle);
      printf("The sine of %lf degree is %lf\n", num1, res);
      break;
    case '6':
      printf("Enter a number: ");
      scanf("%lf", &num1);
      angle = num1 * M_PI / 180.0;
      res = cos(angle);
      printf("The cosine of %lf degree is %lf\n", num1, res);
      break;
    case '7':
      printf("Enter a number: ");
      scanf("%lf", &num1);
      angle = num1 * M_PI / 180.0;
      res = tan(angle);
      printf("The tangent of %lf degree is %lf\n", num1, res);
      break;
     case '8':
     printf("Enter a number: ");
      scanf("%lf", &num1);
      res = log10(num1);
      printf("Logarithm (base 10): %lf\n", res);
      break;
      case '9':
      printf("Enter a number: ");
      scanf("%lf", &num1);
      res = log(num1);
      printf("Natural Logarithm (base e): %lf\n", res);
      break;
      case 'E':
      return 0;
  }
  printf("Do you want to continue? (y/n) ");
  char c;
  scanf(" %c", &c);
  if (c == 'y') {
    main();
  }
  return 0;
}
