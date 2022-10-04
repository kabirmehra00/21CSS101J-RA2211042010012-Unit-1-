int main() {
  int i = 0;

  while (i < 21) {
    if (i == 0) {
      i++;
      continue;
    }
    printf("%d\n", i);
    i++;
  } 

  return 0;
}
