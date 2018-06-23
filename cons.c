#include "si.h"
#include "consp.h"
#define cons xcons
#define consp xconsp
#include "cons.h"
#include "cons_stdio.h"
long Seg[2*SEG_SZ], *SegPtr=Seg;
DEFN(int,main,(),
     ,p1(0)
     ,p1(1000000)
     ,p1("Hello, world!")
     ,p1(cons(11,22))
     ,p1(cons(11,EOL))
     ,p1(EOL)
     ,0)
