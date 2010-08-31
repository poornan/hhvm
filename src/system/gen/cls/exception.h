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

#ifndef __GENERATED_cls_exception_h__
#define __GENERATED_cls_exception_h__


namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/exception.php line 10 */
class c_exception : public ExtObjectData {
  BEGIN_CLASS_MAP(Exception)
  END_CLASS_MAP(Exception)
  DECLARE_CLASS_COMMON(exception, Exception)
  DECLARE_INVOKE_EX(exception, Exception, ObjectData)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(CStrRef s);
#define OMIT_JUMP_TABLE_CLASS_STATIC_GET_exception 1
#define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_exception 1
#define OMIT_JUMP_TABLE_CLASS_CONSTANT_exception 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual void o_getArray(Array &props) const;
#define OMIT_JUMP_TABLE_CLASS_SETARRAY_exception 1
#define OMIT_JUMP_TABLE_CLASS_realProp_exception 1
#define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_exception 1
#define OMIT_JUMP_TABLE_CLASS_get_exception 1
#define OMIT_JUMP_TABLE_CLASS_get_PRIVATE_exception 1
#define OMIT_JUMP_TABLE_CLASS_set_exception 1
#define OMIT_JUMP_TABLE_CLASS_set_PRIVATE_exception 1
#define OMIT_JUMP_TABLE_CLASS_lval_exception 1
#define OMIT_JUMP_TABLE_CLASS_lval_PRIVATE_exception 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  virtual Variant *o_realPropPublic(CStrRef s, int flags) const;
  virtual Variant o_getPublic(CStrRef s, bool error = true);
  virtual Variant o_setPublic(CStrRef s,
                              CVarRef v, bool forInit);
  virtual Variant &o_lvalPublic(CStrRef s);

  // DECLARE_COMMON_INVOKE
#define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_exception 1
  virtual Variant o_invoke(MethodIndex methodIndex, const char *s,CArrRef ps, int64 h,
                           bool f = true);
  virtual Variant o_invoke_few_args(MethodIndex methodIndex, const char *s, int64 h,
                                    int count,
                                    INVOKE_FEW_ARGS_DECL_ARGS);

  public:
  DECLARE_INVOKES_FROM_EVAL
  void init();
  public: Variant m_message;
  public: Variant m_code;
  public: Variant m_file;
  public: Variant m_line;
  public: Variant m_trace;
  public: void t___init__();
  public: void t___construct(Variant v_message = NAMSTR(s_sys_ss00000000, ""), Variant v_code = 0LL);
  public: c_exception *create(Variant v_message = NAMSTR(s_sys_ss00000000, ""), Variant v_code = 0LL);
  public: ObjectData *dynCreate(CArrRef params, bool init = true);
  public: void dynConstruct(CArrRef params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: Variant t_getmessage();
  public: Variant t_getcode();
  public: Variant t_getfile();
  public: Variant t_getline();
  public: Variant t_gettrace();
  public: String t_gettraceasstring();
  public: String t___tostring();
};
extern struct ObjectStaticCallbacks cw_exception;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_exception_h__
