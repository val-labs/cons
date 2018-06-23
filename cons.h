#ifndef __CONS_H__
#define __CONS_H__
#define EOL ((long)"()")
FUN*setcons(long*x,long h,long t){x[0]=h;x[1]=t;return x;}
FUN car(long x){return consp((x&~3L))?((long*)x)[0]:EOL;}
FUN cdr(long x){return consp((x&~3L))?((long*)x)[1]:EOL;}
#endif//__CONS_H__
