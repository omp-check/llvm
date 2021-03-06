// RUN: %clang_cc1 -verify -fopenmp -ast-print %s | FileCheck %s
// expected-no-diagnostics

void foo() {}

int main (int argc, char **argv) {
  int b = argc, c, d, e, f, g;
  static int a;
// CHECK: static int a;
#pragma omp taskgroup
{
  a=2;
}
// CHECK-NEXT: #pragma omp taskgroup
// CHECK-NEXT: {
// CHECK-NEXT: a = 2;
// CHECK-NEXT: }
  return (0);
}
