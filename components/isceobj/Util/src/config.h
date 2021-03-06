/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to dummy `main' function (if any) required to link to the Fortran
   libraries. */
/* #undef FC_DUMMY_MAIN */

/* Define if F77 and FC dummy `main' functions are identical. */
/* #undef FC_DUMMY_MAIN_EQ_F77 */

/* Define to a macro mangling the given C identifier (in lower and upper
   case), which must not contain underscores, for linking with Fortran. */
#define FC_FUNC(name,NAME) name ## _

/* As FC_FUNC, but for C identifiers containing underscores. */
#define FC_FUNC_(name,NAME) name ## __

/* Define to 1 if you have the `fftw3f' library (-lfftw3f). */
#define HAVE_LIBFFTW3F 1

/* Name of package */
#define PACKAGE "roi_pac"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://roipac.org/"

/* Define to the full name of this package. */
#define PACKAGE_NAME "ROI_Pac"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "ROI_Pac 3.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "roi_pac"

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.0"

/* Version number of package */
#define VERSION "3.0"
