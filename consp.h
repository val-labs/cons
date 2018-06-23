FUN mconsp(long x){return 0;}
#define mcons(h,t) setcons(malloc(2*sizeof(long)),h,t)
#ifndef SEG_SZ
#define SEG_SZ 102400
#endif
extern long Seg[2*SEG_SZ], *SegPtr;
FUN xconsp(long x){return(x>=(long)Seg&&x<(long)SegPtr);}
FUN xcons(long h,long t){return(*SegPtr++=h),(*SegPtr++=t),(long)(SegPtr-2);}
