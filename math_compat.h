#ifndef __math_compat_h
#define __math_compat_h

/**
 * @file
 * @brief Do not use, json-c internal, may be changed or removed at any time.
 */

/* Define isnan, isinf, infinity and nan on Windows/MSVC */

#ifndef JSON_C_HAVE_DECL_ISNAN
# ifdef JSON_C_HAVE_DECL__ISNAN
#include <float.h>
#define isnan(x) _isnan(x)
# endif
#endif

#ifndef JSON_C_HAVE_DECL_ISINF
# ifdef JSON_C_HAVE_DECL__FINITE
#include <float.h>
#define isinf(x) (!_finite(x))
# endif
#endif

#ifndef JSON_C_HAVE_DECL_INFINITY
#include <float.h>
#define INFINITY (DBL_MAX + DBL_MAX)
#define JSON_C_HAVE_DECL_INFINITY
#endif

#ifndef JSON_C_HAVE_DECL_NAN
#define NAN (INFINITY - INFINITY)
#define JSON_C_HAVE_DECL_NAN
#endif

#endif
