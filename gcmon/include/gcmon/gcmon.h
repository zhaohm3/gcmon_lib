/*!**************************************************************
 *@file gcmon.h
 *@brief    Java Virtual Machine Tool Interfaces
 *@author   zhaohm3
 *@date 2014-9-15 17:53
 *@note
 * 
 ****************************************************************/

#ifndef _gcmon_h__
#define _gcmon_h__

#include "rbtree/rbtree.h"
#include "sample/sample.h"

//! 用于处理java.lang.OutOfMemoryError异常
#define GOOM_HEAP_SPACE     0                           //!< Java heap space
#define GOOM_OVERHEAD_LIMIT 1                           //!< GC overhead limit exceeded
#define GOOM_NATIVE_THREAD  2                           //!< unable to create new native thread
#define GOOM_PERM_SPACE     3                           //!< PermGen space
#define GOOM_ARRAY_SIZE     4                           //!< Requested array size exceeds VM limit
#define GOOM_DIRECT_BUFF    5                           //!< Direct buffer memory
#define GOOM_MAP_FAILED     6                           //!< Map failed

GPublic RBTreeP_t gcmon_get_perf_tree();
GPublic SouterP_t gcmon_get_souter();
GPublic String_t gcmon_get_oom_desc(Int32_t sdwOOMType);

#endif