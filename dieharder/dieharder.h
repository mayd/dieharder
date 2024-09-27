/*
 *========================================================================
 * $Id: dieharder.h 529 2011-04-01 17:49:31Z rgbatduke $
 *
 * See copyright in copyright.h and the accompanying file COPYING
 *========================================================================
 */

#include "copyright.h"

/* To enable large file support */
#define _FILE_OFFSET_BITS 64

#include <dieharder/libdieharder.h>

#ifdef _MAIN_C
#define EXTERN
#else
#define EXTERN extern
#endif

/*
 * user_template sources are here, not in library
 */
#include "user_template.h"

EXTERN double rng_avg_time_nsec, rng_rands_per_second;
EXTERN int rng_double_rands_per_second;

#ifdef RDIEHARDER
 EXTERN Test **rdh_testptr;		/* kludge: need a global to report back to R */
 EXTERN Dtest *rdh_dtestptr;		/* kludge: need a global to report back to R */
#endif

 void list_rngs();
 void list_tests();
 void output_rnds();
 void Exit(int);
 void time_rng();
 void set_globals();
 void choose_rng();
 double execute_test(int);
 void run_all_tests();
 void run_test();
 void add_ui_rngs();
 void parsecl(int argc, char **argv);
 void output(Dtest *dtest,Test **test);
 void show_test_header(Dtest *dtest,Test **test);
 void show_test_header_debug(Dtest *dtest,Test **test);
 void test_header(Dtest *dtest);
 void show_test_results(Dtest *dtest,Test **test);
 void show_test_results_debut(Dtest *dtest,Test **test);
 void test_footer(Dtest *dtest, double pvalue, double *pvalues);

/*
 * List new rng types to be added in startup.c.  Use "empty" or
 * libdieharder rng sources as template, uncomment/clone the lines that
 * add your own type(s) in startup.c.  Consider sending "good" generators
 * that pass all or most tests or "classic" generators good or bad that
 * people might want to test back to me to include in libdieharder.
 */
 GSL_VAR const gsl_rng_type *gsl_rng_empty_random;


