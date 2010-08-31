/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_outofboundsexception_h__
#define __GENERATED_cls_outofboundsexception_h__

#include <cls/runtimeexception.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 225 */
class c_outofboundsexception : public c_runtimeexception {
  BEGIN_CLASS_MAP(OutOfBoundsException)
    PARENT_CLASS(Exception)
    PARENT_CLASS(RuntimeException)
  END_CLASS_MAP(OutOfBoundsException)
  DECLARE_CLASS_COMMON(outofboundsexception, OutOfBoundsException)
  DECLARE_INVOKE_EX(outofboundsexception, OutOfBoundsException, runtimeexception)

  // DECLARE_STATIC_PROP_OPS
  public:
#define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_STATIC_GET_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_CONSTANT_outofboundsexception 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
#define OMIT_JUMP_TABLE_CLASS_GETARRAY_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_SETARRAY_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_realProp_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_get_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_get_PRIVATE_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_set_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_set_PRIVATE_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_lval_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_lval_PRIVATE_outofboundsexception 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
#define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_get_PUBLIC_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_set_PUBLIC_outofboundsexception 1
#define OMIT_JUMP_TABLE_CLASS_lval_PUBLIC_outofboundsexception 1

  // DECLARE_COMMON_INVOKE
#define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_outofboundsexception 1
  virtual Variant o_invoke(MethodIndex methodIndex, const char *s,CArrRef ps, int64 h,
                           bool f = true);
  virtual Variant o_invoke_few_args(MethodIndex methodIndex, const char *s, int64 h,
                                    int count,
                                    INVOKE_FEW_ARGS_DECL_ARGS);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
};
extern struct ObjectStaticCallbacks cw_outofboundsexception;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_outofboundsexception_h__
