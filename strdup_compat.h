#ifndef __strdup_compat_h
#define __strdup_compat_h

/**
 * @file
 * @brief Do not use, json-c internal, may be changed or removed at any time.
 */

#if !defined(JSON_C_HAVE_STRDUP) && defined(_MSC_VER)
  /* MSC has the version as _strdup */
# define strdup _strdup
#elif !defined(JSON_C_HAVE_STRDUP)
# error You do not have strdup on your system.
#endif /* JSON_C_HAVE_STRDUP */

#endif
