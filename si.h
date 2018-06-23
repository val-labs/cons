#ifndef SI
#define SI static inline
#define FUN SI long
#define IF(c,t,...) (((c)<1)?(t):(__VA_ARGS__))
#define A(...) __VA_ARGS__
#define V(...) long __VA_ARGS__;
#define DEFN(type, name, args, vars, ...) \
  type name args{ vars return(__VA_ARGS__); }
#define DEFUN(name, args, vars, ...) \
  long name args{ vars return(__VA_ARGS__); }
#endif//SI
