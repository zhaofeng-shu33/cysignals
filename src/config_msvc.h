
/* Define to 1 to use an assembly implementation of cysetjmp(). */
#define CYSIGNALS_ASM_CYSETJMP 1

/* Define to 1 if your C++ compiler supports _Atomic. */
/* #undef CYSIGNALS_CXX_ATOMIC */

/* Define to 1 if your C compiler supports _Atomic. */
#define CYSIGNALS_C_ATOMIC 1

/* Define to 1 if your C++ compiler supports std::atomic. */
/* #undef CYSIGNALS_STD_ATOMIC */

/* Define to 1 to use sigsetjmp() in sig_on(), as opposed to setjmp(). */
/* #undef CYSIGNALS_USE_SIGSETJMP */

/* Enable debug output */
/* #undef ENABLE_DEBUG_CYSIGNALS */

/* Define to 1 if you have the `backtrace' function. */
/* #undef HAVE_BACKTRACE */

/* Define to 1 if your processor understands the "emms" instruction. */
#define HAVE_EMMS 0

/* Define to 1 if you have the <execinfo.h> header file. */
/* #undef HAVE_EXECINFO_H */

/* Define to 1 if you have the `fork' function. */
#define HAVE_FORK 0

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `kill' function. */
#define HAVE_KILL 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if PARI is fully supported. */
/* #undef HAVE_PARI */

/* Define to 1 if you have the `sigaltstack' function. */
#define HAVE_SIGALTSTACK 0

/* Define to 1 if you have the `sigprocmask' function. */
#define HAVE_SIGPROCMASK 0

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/prctl.h> header file. */
/* #undef HAVE_SYS_PRCTL_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 0

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 0

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 0

/* Define to 1 if you have the <windows.h> header file. */
#define HAVE_WINDOWS_H 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://github.com/sagemath/cysignals/issues"

/* Define to the full name of this package. */
#define PACKAGE_NAME "cysignals"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "cysignals 1.10.2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "cysignals"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.10.2"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

typedef _JBTYPE sigjmp_buf[34];
#define SIGHUP 1
#define SIGQUIT 2
#define SIGBUS 10
#define SIGALRM 15
