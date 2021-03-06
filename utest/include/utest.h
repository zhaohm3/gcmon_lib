/*!**************************************************************
 *@file utest.h
 *@brief    单元测试框架接口声明
 *@author   zhaohm3
 *@date 2014-9-5 15:50
 *@note
 * 
 ****************************************************************/

#ifndef _utest_h__
#define _utest_h__

#include "share/share.h"

typedef struct UItem UItem_t, *UItemP_t;
struct UItem
{
    Int32_t     sdwId;          //!< 单元测试函数ID号
    Bool32_t    bShow;          //!< 是否在选择菜单中显示描述
    void (*pfnRun)();           //!< 单元测试入口函数
    AnyP_t      pContext;       //!< 单元测试运行时上下文，可通过此参数传递额外的信息
    String_t    szDescribe;     //!< 描述信息，用于提供给用户选择
};

//! 对外提供的单元测试入口函数
GPublic void utest_run(UItem_t aItems[], Int32_t sdwLen);

#endif
