/*
 * struct wiringPiNodeStruct
 * Defined in file wiringPi.h @ line 118
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_Pi.h"

#if BIND_WiringPiNodeStruct_TYPE

/*
 * Class Methods
 */

#if BIND_WiringPiNodeStruct_INITIALIZE
mrb_value
mrb_Pi_WiringPiNodeStruct_initialize(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct* native_object = (struct wiringPiNodeStruct*)malloc(sizeof(struct wiringPiNodeStruct));
  mruby_gift_struct wiringPiNodeStruct_data_ptr(self, native_object);
  return self;
}
#endif

mrb_value
mrb_Pi_WiringPiNodeStruct_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pi::WiringPiNodeStruct.disown only accepts objects of type Pi::WiringPiNodeStruct");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}

mrb_value
mrb_Pi_WiringPiNodeStruct_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pi::WiringPiNodeStruct.belongs_to_ruby only accepts objects of type Pi::WiringPiNodeStruct");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}

/*
 * Fields
 */

#if BIND_WiringPiNodeStruct_pinBase_FIELD
/* get_pinBase
 *
 * Return Type: int
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_pinBase(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  int native_field = native_self->pinBase;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_pinBase
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_pinBase(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->pinBase = native_field;

  return ruby_field;
}
#endif

#if BIND_WiringPiNodeStruct_pinMax_FIELD
/* get_pinMax
 *
 * Return Type: int
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_pinMax(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  int native_field = native_self->pinMax;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_pinMax
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_pinMax(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->pinMax = native_field;

  return ruby_field;
}
#endif

#if BIND_WiringPiNodeStruct_fd_FIELD
/* get_fd
 *
 * Return Type: int
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_fd(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  int native_field = native_self->fd;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_fd
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_fd(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  int native_field = mrb_fixnum(ruby_field);

  native_self->fd = native_field;

  return ruby_field;
}
#endif

#if BIND_WiringPiNodeStruct_data0_FIELD
/* get_data0
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_data0(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  unsigned int native_field = native_self->data0;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_data0
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_data0(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = mrb_fixnum(ruby_field);

  native_self->data0 = native_field;

  return ruby_field;
}
#endif

#if BIND_WiringPiNodeStruct_data1_FIELD
/* get_data1
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_data1(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  unsigned int native_field = native_self->data1;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_data1
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_data1(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = mrb_fixnum(ruby_field);

  native_self->data1 = native_field;

  return ruby_field;
}
#endif

#if BIND_WiringPiNodeStruct_data2_FIELD
/* get_data2
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_data2(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  unsigned int native_field = native_self->data2;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_data2
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_data2(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = mrb_fixnum(ruby_field);

  native_self->data2 = native_field;

  return ruby_field;
}
#endif

#if BIND_WiringPiNodeStruct_data3_FIELD
/* get_data3
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_data3(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  unsigned int native_field = native_self->data3;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);

  return ruby_field;
}

/* set_data3
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_data3(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }

  unsigned int native_field = mrb_fixnum(ruby_field);

  native_self->data3 = native_field;

  return ruby_field;
}
#endif

#if BIND_WiringPiNodeStruct_pinMode_FIELD
/* get_pinMode
 *
 * Return Type: void (*)(struct wiringPiNodeStruct *, int, int)
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_pinMode(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  void (*)(struct wiringPiNodeStruct *, int, int) native_field = native_self->pinMode;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_pinMode
 *
 * Parameters:
 * - value: void (*)(struct wiringPiNodeStruct *, int, int)
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_pinMode(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(ruby_field);

  void (*native_field)(struct wiringPiNodeStruct *, int, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(ruby_field);

  native_self->pinMode = native_field;

  return ruby_field;
}
#endif

#if BIND_WiringPiNodeStruct_pullUpDnControl_FIELD
/* get_pullUpDnControl
 *
 * Return Type: void (*)(struct wiringPiNodeStruct *, int, int)
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_pullUpDnControl(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  void (*)(struct wiringPiNodeStruct *, int, int) native_field = native_self->pullUpDnControl;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_pullUpDnControl
 *
 * Parameters:
 * - value: void (*)(struct wiringPiNodeStruct *, int, int)
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_pullUpDnControl(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(ruby_field);

  void (*native_field)(struct wiringPiNodeStruct *, int, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(ruby_field);

  native_self->pullUpDnControl = native_field;

  return ruby_field;
}
#endif

#if BIND_WiringPiNodeStruct_digitalRead_FIELD
/* get_digitalRead
 *
 * Return Type: int (*)(struct wiringPiNodeStruct *, int)
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_digitalRead(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  int (*)(struct wiringPiNodeStruct *, int) native_field = native_self->digitalRead;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_digitalRead
 *
 * Parameters:
 * - value: int (*)(struct wiringPiNodeStruct *, int)
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_digitalRead(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_int_RPAREN(ruby_field);

  int (*native_field)(struct wiringPiNodeStruct *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->digitalRead = native_field;

  return ruby_field;
}
#endif

#if BIND_WiringPiNodeStruct_digitalWrite_FIELD
/* get_digitalWrite
 *
 * Return Type: void (*)(struct wiringPiNodeStruct *, int, int)
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_digitalWrite(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  void (*)(struct wiringPiNodeStruct *, int, int) native_field = native_self->digitalWrite;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_digitalWrite
 *
 * Parameters:
 * - value: void (*)(struct wiringPiNodeStruct *, int, int)
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_digitalWrite(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(ruby_field);

  void (*native_field)(struct wiringPiNodeStruct *, int, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(ruby_field);

  native_self->digitalWrite = native_field;

  return ruby_field;
}
#endif

#if BIND_WiringPiNodeStruct_pwmWrite_FIELD
/* get_pwmWrite
 *
 * Return Type: void (*)(struct wiringPiNodeStruct *, int, int)
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_pwmWrite(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  void (*)(struct wiringPiNodeStruct *, int, int) native_field = native_self->pwmWrite;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_pwmWrite
 *
 * Parameters:
 * - value: void (*)(struct wiringPiNodeStruct *, int, int)
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_pwmWrite(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(ruby_field);

  void (*native_field)(struct wiringPiNodeStruct *, int, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(ruby_field);

  native_self->pwmWrite = native_field;

  return ruby_field;
}
#endif

#if BIND_WiringPiNodeStruct_analogRead_FIELD
/* get_analogRead
 *
 * Return Type: int (*)(struct wiringPiNodeStruct *, int)
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_analogRead(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  int (*)(struct wiringPiNodeStruct *, int) native_field = native_self->analogRead;

  mrb_value ruby_field = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_analogRead
 *
 * Parameters:
 * - value: int (*)(struct wiringPiNodeStruct *, int)
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_analogRead(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_int_RPAREN(ruby_field);

  int (*native_field)(struct wiringPiNodeStruct *, int) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_int_RPAREN(ruby_field);

  native_self->analogRead = native_field;

  return ruby_field;
}
#endif

#if BIND_WiringPiNodeStruct_analogWrite_FIELD
/* get_analogWrite
 *
 * Return Type: void (*)(struct wiringPiNodeStruct *, int, int)
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_analogWrite(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  void (*)(struct wiringPiNodeStruct *, int, int) native_field = native_self->analogWrite;

  mrb_value ruby_field = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(mrb, native_field);

  return ruby_field;
}

/* set_analogWrite
 *
 * Parameters:
 * - value: void (*)(struct wiringPiNodeStruct *, int, int)
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_analogWrite(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(ruby_field);

  void (*native_field)(struct wiringPiNodeStruct *, int, int) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_wiringPiNodeStruct_PTR_COMMA_intCOMMA_int_RPAREN(ruby_field);

  native_self->analogWrite = native_field;

  return ruby_field;
}
#endif

#if BIND_WiringPiNodeStruct_next_FIELD
/* get_next
 *
 * Return Type: struct wiringPiNodeStruct *
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_get_next(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);

  struct wiringPiNodeStruct * native_field = native_self->next;

  mrb_value ruby_field = (native_field == NULL ? mrb_nil_value() : mruby_box_wiringPiNodeStruct(mrb, native_field));

  return ruby_field;
}

/* set_next
 *
 * Parameters:
 * - value: struct wiringPiNodeStruct *
 */
mrb_value
mrb_Pi_WiringPiNodeStruct_set_next(mrb_state* mrb, mrb_value self) {
  struct wiringPiNodeStruct * native_self = mruby_unbox_struct wiringPiNodeStruct(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ruby_field, WiringPiNodeStruct_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "WiringPiNodeStruct expected");
    return mrb_nil_value();
  }

  struct wiringPiNodeStruct * native_field = (mrb_nil_p(ruby_field) ? NULL : mruby_unbox_wiringPiNodeStruct(ruby_field));

  native_self->next = native_field;

  return ruby_field;
}
#endif


void mrb_Pi_WiringPiNodeStruct_init(mrb_state* mrb) {
  RClass* WiringPiNodeStruct_class = mrb_define_class_under(mrb, Pi_module(mrb), "WiringPiNodeStruct", mrb->object_class);
  MRB_SET_INSTANCE_TT(WiringPiNodeStruct_class, MRB_TT_DATA);

#if BIND_WiringPiNodeStruct_INITIALIZE
  mrb_define_method(mrb, WiringPiNodeStruct_class, "initialize", mrb_Pi_WiringPiNodeStruct_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, WiringPiNodeStruct_class, "disown", mrb_Pi_WiringPiNodeStruct_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, WiringPiNodeStruct_class, "belongs_to_ruby?", mrb_Pi_WiringPiNodeStruct_belongs_to_ruby, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_WiringPiNodeStruct_pinBase_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "pinBase", mrb_Pi_WiringPiNodeStruct_get_pinBase, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "pinBase=", mrb_Pi_WiringPiNodeStruct_set_pinBase, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_WiringPiNodeStruct_pinMax_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "pinMax", mrb_Pi_WiringPiNodeStruct_get_pinMax, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "pinMax=", mrb_Pi_WiringPiNodeStruct_set_pinMax, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_WiringPiNodeStruct_fd_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "fd", mrb_Pi_WiringPiNodeStruct_get_fd, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "fd=", mrb_Pi_WiringPiNodeStruct_set_fd, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_WiringPiNodeStruct_data0_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "data0", mrb_Pi_WiringPiNodeStruct_get_data0, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "data0=", mrb_Pi_WiringPiNodeStruct_set_data0, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_WiringPiNodeStruct_data1_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "data1", mrb_Pi_WiringPiNodeStruct_get_data1, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "data1=", mrb_Pi_WiringPiNodeStruct_set_data1, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_WiringPiNodeStruct_data2_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "data2", mrb_Pi_WiringPiNodeStruct_get_data2, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "data2=", mrb_Pi_WiringPiNodeStruct_set_data2, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_WiringPiNodeStruct_data3_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "data3", mrb_Pi_WiringPiNodeStruct_get_data3, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "data3=", mrb_Pi_WiringPiNodeStruct_set_data3, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_WiringPiNodeStruct_pinMode_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "pinMode", mrb_Pi_WiringPiNodeStruct_get_pinMode, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "pinMode=", mrb_Pi_WiringPiNodeStruct_set_pinMode, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_WiringPiNodeStruct_pullUpDnControl_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "pullUpDnControl", mrb_Pi_WiringPiNodeStruct_get_pullUpDnControl, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "pullUpDnControl=", mrb_Pi_WiringPiNodeStruct_set_pullUpDnControl, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_WiringPiNodeStruct_digitalRead_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "digitalRead", mrb_Pi_WiringPiNodeStruct_get_digitalRead, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "digitalRead=", mrb_Pi_WiringPiNodeStruct_set_digitalRead, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_WiringPiNodeStruct_digitalWrite_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "digitalWrite", mrb_Pi_WiringPiNodeStruct_get_digitalWrite, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "digitalWrite=", mrb_Pi_WiringPiNodeStruct_set_digitalWrite, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_WiringPiNodeStruct_pwmWrite_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "pwmWrite", mrb_Pi_WiringPiNodeStruct_get_pwmWrite, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "pwmWrite=", mrb_Pi_WiringPiNodeStruct_set_pwmWrite, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_WiringPiNodeStruct_analogRead_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "analogRead", mrb_Pi_WiringPiNodeStruct_get_analogRead, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "analogRead=", mrb_Pi_WiringPiNodeStruct_set_analogRead, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_WiringPiNodeStruct_analogWrite_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "analogWrite", mrb_Pi_WiringPiNodeStruct_get_analogWrite, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "analogWrite=", mrb_Pi_WiringPiNodeStruct_set_analogWrite, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_WiringPiNodeStruct_next_FIELD
  mrb_define_method(mrb, WiringPiNodeStruct_class, "next", mrb_Pi_WiringPiNodeStruct_get_next, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, WiringPiNodeStruct_class, "next=", mrb_Pi_WiringPiNodeStruct_set_next, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
