/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
  int num1, num2, result;

  if (validate_args(argc, argv) != 0)
    return 98;

  num1 = string_to_int(argv[1]);
  num2 = string_to_int(argv[2]);
	result = multiply(num1, num2);
  print_int(result);

  return 0;
}
int multiply(int a, int b)
{
  return a * b;
}
void print_int(int n)
{
  if (n == 0)
  {
    _putchar('0');
    return;
  }

  int digits[10];
  int i = 0;

  while (n > 0) {
    digits[i++] = n % 10;
    n /= 10;
  }
  while (i-- > 0) {
    _putchar(digits[i] + '0');
  }
  _putchar('\n');
}
int validate_args(int argc, char *argv[])
{
  if (argc != 3)
  {
    printf("Error\n");
    return 98;
  }
  if (!is_digit(argv[1]) || !is_digit(argv[2]))
  {
    printf("Error\n");
    return 98;
  }
  return 0;
}
int is_digit(char *str)
{
  int i;

  for (i = 0; str[i]; i++)
  {
    if (str[i] < '0' || str[i] > '9')
      return 0;
  }
  return 1;
}
int string_to_int(char *str)
{
  int num = 0;

  for (int i = 0; str[i]; i++)
  {
    num = num * 10 + (str[i] - '0');
  }
  return num;
}
