void myFunction(char name[], int reg) {
  printf("Name: %s. Reg: %d\n", name, reg);
}

int main() {
  myFunction("Me", 001);
  myFunction("You", 002);
  myFunction("They", 003);
  return 0;
}
