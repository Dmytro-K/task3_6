#ifndef TASK3_6_FUNCS_H
#define TASK3_6_FUNCS_H

#ifndef __cplusplus
typedef unsigned char bool;
#define true ((bool)1)
#define false ((bool)0)
#endif /* __cplusplus */

#ifndef NULL
#define NULL (void*)0
#endif /* NULL */

#ifndef _SIZE_T_DEFINED
#ifdef  _WIN64
typedef unsigned long long int    size_t;
#else
typedef unsigned int   size_t;
#endif
#define _SIZE_T_DEFINED
#endif

/**
 * @brief Sorts array of double numbers.
 * @param [in, out] arr Start of target array.
 * @param [in] count Array size in elements.
 */
void Sort(double *arr, size_t count);

#endif /* TASK3_6_FUNCS_H */