#include <stdio.h>
long _pr(long x){
  if(consp(x)){
    long n =
      (printf( "(" ),   _pr(car(x)), x);
    while(consp(n = cdr(x)))
      (printf( " " ),   _pr(cdr(n)));
    if(n!=EOL)
      (printf(" . "),   _pr(n));
    return printf(")"), x;}
  return(x<0x100000)?printf("%ld", x)
    :printf("\"%s\"", (char*)x);}
#define pr(x) _pr((long)(x))
long _p1(long x){return pr(x),puts(""),x;}
#define p1(x) _p1((long)(x))
