/*
 * TODO: INCLUDES
 */

#include "mruby_Pi.h"

#ifdef __cplusplus
extern "C" {
#endif

#if BIND_analogRead_FUNCTION
#define analogRead_REQUIRED_ARGC 1
#define analogRead_OPTIONAL_ARGC 0
/* analogRead
 *
 * Parameters:
 * - pin: int
 * Return Type: int
 */
mrb_value
mrb_Pi_analogRead(mrb_state* mrb, mrb_value self) {
  mrb_value pin;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pin);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pin = mrb_fixnum(pin);

  /* Invocation */
  int result = analogRead(native_pin);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_analogWrite_FUNCTION
#define analogWrite_REQUIRED_ARGC 2
#define analogWrite_OPTIONAL_ARGC 0
/* analogWrite
 *
 * Parameters:
 * - pin: int
 * - value: int
 * Return Type: void
 */
mrb_value
mrb_Pi_analogWrite(mrb_state* mrb, mrb_value self) {
  mrb_value pin;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pin, &value);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pin = mrb_fixnum(pin);

  int native_value = mrb_fixnum(value);

  /* Invocation */
  analogWrite(native_pin, native_value);

  return mrb_nil_value();
}
#endif

#if BIND_delay_FUNCTION
#define delay_REQUIRED_ARGC 1
#define delay_OPTIONAL_ARGC 0
/* delay
 *
 * Parameters:
 * - howLong: unsigned int
 * Return Type: void
 */
mrb_value
mrb_Pi_delay(mrb_state* mrb, mrb_value self) {
  mrb_value howLong;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &howLong);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, howLong, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_howLong = mrb_fixnum(howLong);

  /* Invocation */
  delay(native_howLong);

  return mrb_nil_value();
}
#endif

#if BIND_delayMicroseconds_FUNCTION
#define delayMicroseconds_REQUIRED_ARGC 1
#define delayMicroseconds_OPTIONAL_ARGC 0
/* delayMicroseconds
 *
 * Parameters:
 * - howLong: unsigned int
 * Return Type: void
 */
mrb_value
mrb_Pi_delayMicroseconds(mrb_state* mrb, mrb_value self) {
  mrb_value howLong;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &howLong);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, howLong, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_howLong = mrb_fixnum(howLong);

  /* Invocation */
  delayMicroseconds(native_howLong);

  return mrb_nil_value();
}
#endif

#if BIND_digitalRead_FUNCTION
#define digitalRead_REQUIRED_ARGC 1
#define digitalRead_OPTIONAL_ARGC 0
/* digitalRead
 *
 * Parameters:
 * - pin: int
 * Return Type: int
 */
mrb_value
mrb_Pi_digitalRead(mrb_state* mrb, mrb_value self) {
  mrb_value pin;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pin);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pin = mrb_fixnum(pin);

  /* Invocation */
  int result = digitalRead(native_pin);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_digitalWrite_FUNCTION
#define digitalWrite_REQUIRED_ARGC 2
#define digitalWrite_OPTIONAL_ARGC 0
/* digitalWrite
 *
 * Parameters:
 * - pin: int
 * - value: int
 * Return Type: void
 */
mrb_value
mrb_Pi_digitalWrite(mrb_state* mrb, mrb_value self) {
  mrb_value pin;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pin, &value);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pin = mrb_fixnum(pin);

  int native_value = mrb_fixnum(value);

  /* Invocation */
  digitalWrite(native_pin, native_value);

  return mrb_nil_value();
}
#endif

#if BIND_digitalWriteByte_FUNCTION
#define digitalWriteByte_REQUIRED_ARGC 1
#define digitalWriteByte_OPTIONAL_ARGC 0
/* digitalWriteByte
 *
 * Parameters:
 * - value: int
 * Return Type: void
 */
mrb_value
mrb_Pi_digitalWriteByte(mrb_state* mrb, mrb_value self) {
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &value);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_value = mrb_fixnum(value);

  /* Invocation */
  digitalWriteByte(native_value);

  return mrb_nil_value();
}
#endif

#if BIND_getAlt_FUNCTION
#define getAlt_REQUIRED_ARGC 1
#define getAlt_OPTIONAL_ARGC 0
/* getAlt
 *
 * Parameters:
 * - pin: int
 * Return Type: int
 */
mrb_value
mrb_Pi_getAlt(mrb_state* mrb, mrb_value self) {
  mrb_value pin;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pin);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pin = mrb_fixnum(pin);

  /* Invocation */
  int result = getAlt(native_pin);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_gpioClockSet_FUNCTION
#define gpioClockSet_REQUIRED_ARGC 2
#define gpioClockSet_OPTIONAL_ARGC 0
/* gpioClockSet
 *
 * Parameters:
 * - pin: int
 * - freq: int
 * Return Type: void
 */
mrb_value
mrb_Pi_gpioClockSet(mrb_state* mrb, mrb_value self) {
  mrb_value pin;
  mrb_value freq;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pin, &freq);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, freq, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pin = mrb_fixnum(pin);

  int native_freq = mrb_fixnum(freq);

  /* Invocation */
  gpioClockSet(native_pin, native_freq);

  return mrb_nil_value();
}
#endif

#if BIND_micros_FUNCTION
#define micros_REQUIRED_ARGC 0
#define micros_OPTIONAL_ARGC 0
/* micros
 *
 * Parameters: None
 * Return Type: unsigned int
 */
mrb_value
mrb_Pi_micros(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  unsigned int result = micros();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_millis_FUNCTION
#define millis_REQUIRED_ARGC 0
#define millis_OPTIONAL_ARGC 0
/* millis
 *
 * Parameters: None
 * Return Type: unsigned int
 */
mrb_value
mrb_Pi_millis(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  unsigned int result = millis();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_physPinToGpio_FUNCTION
#define physPinToGpio_REQUIRED_ARGC 1
#define physPinToGpio_OPTIONAL_ARGC 0
/* physPinToGpio
 *
 * Parameters:
 * - physPin: int
 * Return Type: int
 */
mrb_value
mrb_Pi_physPinToGpio(mrb_state* mrb, mrb_value self) {
  mrb_value physPin;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &physPin);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, physPin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_physPin = mrb_fixnum(physPin);

  /* Invocation */
  int result = physPinToGpio(native_physPin);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_piBoardId_FUNCTION
#define piBoardId_REQUIRED_ARGC 5
#define piBoardId_OPTIONAL_ARGC 0
/* piBoardId
 *
 * Parameters:
 * - model: int *
 * - rev: int *
 * - mem: int *
 * - maker: int *
 * - overVolted: int *
 * Return Type: void
 */
mrb_value
mrb_Pi_piBoardId(mrb_state* mrb, mrb_value self) {
  mrb_value model;
  mrb_value rev;
  mrb_value mem;
  mrb_value maker;
  mrb_value overVolted;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &model, &rev, &mem, &maker, &overVolted);


  /* Type checking */
  TODO_type_check_int_PTR(model);
  TODO_type_check_int_PTR(rev);
  TODO_type_check_int_PTR(mem);
  TODO_type_check_int_PTR(maker);
  TODO_type_check_int_PTR(overVolted);


  /* Unbox parameters */
  int * native_model = TODO_mruby_unbox_int_PTR(model);

  int * native_rev = TODO_mruby_unbox_int_PTR(rev);

  int * native_mem = TODO_mruby_unbox_int_PTR(mem);

  int * native_maker = TODO_mruby_unbox_int_PTR(maker);

  int * native_overVolted = TODO_mruby_unbox_int_PTR(overVolted);

  /* Invocation */
  piBoardId(native_model, native_rev, native_mem, native_maker, native_overVolted);

  return mrb_nil_value();
}
#endif

#if BIND_piBoardRev_FUNCTION
#define piBoardRev_REQUIRED_ARGC 0
#define piBoardRev_OPTIONAL_ARGC 0
/* piBoardRev
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Pi_piBoardRev(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = piBoardRev();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_piHiPri_FUNCTION
#define piHiPri_REQUIRED_ARGC 1
#define piHiPri_OPTIONAL_ARGC 0
/* piHiPri
 *
 * Parameters:
 * - pri: const int
 * Return Type: int
 */
mrb_value
mrb_Pi_piHiPri(mrb_state* mrb, mrb_value self) {
  mrb_value pri;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pri);


  /* Type checking */
  TODO_type_check_int(pri);


  /* Unbox parameters */
  const int native_pri = TODO_mruby_unbox_int(pri);

  /* Invocation */
  int result = piHiPri(native_pri);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_piLock_FUNCTION
#define piLock_REQUIRED_ARGC 1
#define piLock_OPTIONAL_ARGC 0
/* piLock
 *
 * Parameters:
 * - key: int
 * Return Type: void
 */
mrb_value
mrb_Pi_piLock(mrb_state* mrb, mrb_value self) {
  mrb_value key;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &key);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, key, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_key = mrb_fixnum(key);

  /* Invocation */
  piLock(native_key);

  return mrb_nil_value();
}
#endif

#if BIND_pinMode_FUNCTION
#define pinMode_REQUIRED_ARGC 2
#define pinMode_OPTIONAL_ARGC 0
/* pinMode
 *
 * Parameters:
 * - pin: int
 * - mode: int
 * Return Type: void
 */
mrb_value
mrb_Pi_pinMode(mrb_state* mrb, mrb_value self) {
  mrb_value pin;
  mrb_value mode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pin, &mode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, mode, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pin = mrb_fixnum(pin);

  int native_mode = mrb_fixnum(mode);

  /* Invocation */
  pinMode(native_pin, native_mode);

  return mrb_nil_value();
}
#endif

#if BIND_pinModeAlt_FUNCTION
#define pinModeAlt_REQUIRED_ARGC 2
#define pinModeAlt_OPTIONAL_ARGC 0
/* pinModeAlt
 *
 * Parameters:
 * - pin: int
 * - mode: int
 * Return Type: void
 */
mrb_value
mrb_Pi_pinModeAlt(mrb_state* mrb, mrb_value self) {
  mrb_value pin;
  mrb_value mode;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pin, &mode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, mode, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pin = mrb_fixnum(pin);

  int native_mode = mrb_fixnum(mode);

  /* Invocation */
  pinModeAlt(native_pin, native_mode);

  return mrb_nil_value();
}
#endif

#if BIND_piThreadCreate_FUNCTION
#define piThreadCreate_REQUIRED_ARGC 2
#define piThreadCreate_OPTIONAL_ARGC 0
/* piThreadCreate
 *
 * Parameters:
 * - fn: void *(*)(void *)
 * - arg2: void *
 * Return Type: int
 */
mrb_value
mrb_Pi_piThreadCreate(mrb_state* mrb, mrb_value self) {
  mrb_value fn;
  mrb_value arg2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &fn, &arg2);


  /* Type checking */
  TODO_type_check_void_PTR_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(fn);
  TODO_type_check_void_PTR(arg2);


  /* Unbox parameters */
  void *(*native_fn)(void *) = TODO_mruby_unbox_void_PTR_LPAREN_PTR_RPAREN_LPAREN_void_PTR_RPAREN(fn);

  void * native_arg2 = TODO_mruby_unbox_void_PTR(arg2);

  /* Invocation */
  int result = piThreadCreate(native_fn, native_arg2);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_piUnlock_FUNCTION
#define piUnlock_REQUIRED_ARGC 1
#define piUnlock_OPTIONAL_ARGC 0
/* piUnlock
 *
 * Parameters:
 * - key: int
 * Return Type: void
 */
mrb_value
mrb_Pi_piUnlock(mrb_state* mrb, mrb_value self) {
  mrb_value key;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &key);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, key, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_key = mrb_fixnum(key);

  /* Invocation */
  piUnlock(native_key);

  return mrb_nil_value();
}
#endif

#if BIND_pullUpDnControl_FUNCTION
#define pullUpDnControl_REQUIRED_ARGC 2
#define pullUpDnControl_OPTIONAL_ARGC 0
/* pullUpDnControl
 *
 * Parameters:
 * - pin: int
 * - pud: int
 * Return Type: void
 */
mrb_value
mrb_Pi_pullUpDnControl(mrb_state* mrb, mrb_value self) {
  mrb_value pin;
  mrb_value pud;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pin, &pud);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pud, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pin = mrb_fixnum(pin);

  int native_pud = mrb_fixnum(pud);

  /* Invocation */
  pullUpDnControl(native_pin, native_pud);

  return mrb_nil_value();
}
#endif

#if BIND_pwmSetClock_FUNCTION
#define pwmSetClock_REQUIRED_ARGC 1
#define pwmSetClock_OPTIONAL_ARGC 0
/* pwmSetClock
 *
 * Parameters:
 * - divisor: int
 * Return Type: void
 */
mrb_value
mrb_Pi_pwmSetClock(mrb_state* mrb, mrb_value self) {
  mrb_value divisor;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &divisor);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, divisor, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_divisor = mrb_fixnum(divisor);

  /* Invocation */
  pwmSetClock(native_divisor);

  return mrb_nil_value();
}
#endif

#if BIND_pwmSetMode_FUNCTION
#define pwmSetMode_REQUIRED_ARGC 1
#define pwmSetMode_OPTIONAL_ARGC 0
/* pwmSetMode
 *
 * Parameters:
 * - mode: int
 * Return Type: void
 */
mrb_value
mrb_Pi_pwmSetMode(mrb_state* mrb, mrb_value self) {
  mrb_value mode;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &mode);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, mode, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_mode = mrb_fixnum(mode);

  /* Invocation */
  pwmSetMode(native_mode);

  return mrb_nil_value();
}
#endif

#if BIND_pwmSetRange_FUNCTION
#define pwmSetRange_REQUIRED_ARGC 1
#define pwmSetRange_OPTIONAL_ARGC 0
/* pwmSetRange
 *
 * Parameters:
 * - range: unsigned int
 * Return Type: void
 */
mrb_value
mrb_Pi_pwmSetRange(mrb_state* mrb, mrb_value self) {
  mrb_value range;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &range);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, range, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  unsigned int native_range = mrb_fixnum(range);

  /* Invocation */
  pwmSetRange(native_range);

  return mrb_nil_value();
}
#endif

#if BIND_pwmToneWrite_FUNCTION
#define pwmToneWrite_REQUIRED_ARGC 2
#define pwmToneWrite_OPTIONAL_ARGC 0
/* pwmToneWrite
 *
 * Parameters:
 * - pin: int
 * - freq: int
 * Return Type: void
 */
mrb_value
mrb_Pi_pwmToneWrite(mrb_state* mrb, mrb_value self) {
  mrb_value pin;
  mrb_value freq;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pin, &freq);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, freq, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pin = mrb_fixnum(pin);

  int native_freq = mrb_fixnum(freq);

  /* Invocation */
  pwmToneWrite(native_pin, native_freq);

  return mrb_nil_value();
}
#endif

#if BIND_pwmWrite_FUNCTION
#define pwmWrite_REQUIRED_ARGC 2
#define pwmWrite_OPTIONAL_ARGC 0
/* pwmWrite
 *
 * Parameters:
 * - pin: int
 * - value: int
 * Return Type: void
 */
mrb_value
mrb_Pi_pwmWrite(mrb_state* mrb, mrb_value self) {
  mrb_value pin;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pin, &value);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pin = mrb_fixnum(pin);

  int native_value = mrb_fixnum(value);

  /* Invocation */
  pwmWrite(native_pin, native_value);

  return mrb_nil_value();
}
#endif

#if BIND_setPadDrive_FUNCTION
#define setPadDrive_REQUIRED_ARGC 2
#define setPadDrive_OPTIONAL_ARGC 0
/* setPadDrive
 *
 * Parameters:
 * - group: int
 * - value: int
 * Return Type: void
 */
mrb_value
mrb_Pi_setPadDrive(mrb_state* mrb, mrb_value self) {
  mrb_value group;
  mrb_value value;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &group, &value);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, group, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, value, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_group = mrb_fixnum(group);

  int native_value = mrb_fixnum(value);

  /* Invocation */
  setPadDrive(native_group, native_value);

  return mrb_nil_value();
}
#endif

#if BIND_waitForInterrupt_FUNCTION
#define waitForInterrupt_REQUIRED_ARGC 2
#define waitForInterrupt_OPTIONAL_ARGC 0
/* waitForInterrupt
 *
 * Parameters:
 * - pin: int
 * - mS: int
 * Return Type: int
 */
mrb_value
mrb_Pi_waitForInterrupt(mrb_state* mrb, mrb_value self) {
  mrb_value pin;
  mrb_value mS;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pin, &mS);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, mS, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pin = mrb_fixnum(pin);

  int native_mS = mrb_fixnum(mS);

  /* Invocation */
  int result = waitForInterrupt(native_pin, native_mS);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wiringPiFailure_FUNCTION
#define wiringPiFailure_REQUIRED_ARGC 2
#define wiringPiFailure_OPTIONAL_ARGC 0
/* wiringPiFailure
 *
 * Parameters:
 * - fatal: int
 * - message: const char *
 * Return Type: int
 */
mrb_value
mrb_Pi_wiringPiFailure(mrb_state* mrb, mrb_value self) {
  mrb_value fatal;
  mrb_value message;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &fatal, &message);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, fatal, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, message, mrb->string_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "String expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_fatal = mrb_fixnum(fatal);

  const char * native_message = mrb_string_value_cstr(mrb, &message);

  /* Invocation */
  int result = wiringPiFailure(native_fatal, native_message);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wiringPiFindNode_FUNCTION
#define wiringPiFindNode_REQUIRED_ARGC 1
#define wiringPiFindNode_OPTIONAL_ARGC 0
/* wiringPiFindNode
 *
 * Parameters:
 * - pin: int
 * Return Type: struct wiringPiNodeStruct *
 */
mrb_value
mrb_Pi_wiringPiFindNode(mrb_state* mrb, mrb_value self) {
  mrb_value pin;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pin);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pin = mrb_fixnum(pin);

  /* Invocation */
  struct wiringPiNodeStruct * result = wiringPiFindNode(native_pin);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_wiringPiNodeStruct(mrb, result));

  return return_value;
}
#endif

#if BIND_wiringPiISR_FUNCTION
#define wiringPiISR_REQUIRED_ARGC 3
#define wiringPiISR_OPTIONAL_ARGC 0
/* wiringPiISR
 *
 * Parameters:
 * - pin: int
 * - mode: int
 * - function: void (*)(void)
 * Return Type: int
 */
mrb_value
mrb_Pi_wiringPiISR(mrb_state* mrb, mrb_value self) {
  mrb_value pin;
  mrb_value mode;
  mrb_value function;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &pin, &mode, &function);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, mode, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(function);


  /* Unbox parameters */
  int native_pin = mrb_fixnum(pin);

  int native_mode = mrb_fixnum(mode);

  void (*native_function)(void) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_RPAREN(function);

  /* Invocation */
  int result = wiringPiISR(native_pin, native_mode, native_function);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wiringPiNewNode_FUNCTION
#define wiringPiNewNode_REQUIRED_ARGC 2
#define wiringPiNewNode_OPTIONAL_ARGC 0
/* wiringPiNewNode
 *
 * Parameters:
 * - pinBase: int
 * - numPins: int
 * Return Type: struct wiringPiNodeStruct *
 */
mrb_value
mrb_Pi_wiringPiNewNode(mrb_state* mrb, mrb_value self) {
  mrb_value pinBase;
  mrb_value numPins;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pinBase, &numPins);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pinBase, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, numPins, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_pinBase = mrb_fixnum(pinBase);

  int native_numPins = mrb_fixnum(numPins);

  /* Invocation */
  struct wiringPiNodeStruct * result = wiringPiNewNode(native_pinBase, native_numPins);

  /* Box the return value */
  mrb_value return_value = (result == NULL ? mrb_nil_value() : mruby_box_wiringPiNodeStruct(mrb, result));

  return return_value;
}
#endif

#if BIND_wiringPiSetup_FUNCTION
#define wiringPiSetup_REQUIRED_ARGC 0
#define wiringPiSetup_OPTIONAL_ARGC 0
/* wiringPiSetup
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Pi_wiringPiSetup(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = wiringPiSetup();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wiringPiSetupGpio_FUNCTION
#define wiringPiSetupGpio_REQUIRED_ARGC 0
#define wiringPiSetupGpio_OPTIONAL_ARGC 0
/* wiringPiSetupGpio
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Pi_wiringPiSetupGpio(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = wiringPiSetupGpio();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wiringPiSetupPhys_FUNCTION
#define wiringPiSetupPhys_REQUIRED_ARGC 0
#define wiringPiSetupPhys_OPTIONAL_ARGC 0
/* wiringPiSetupPhys
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Pi_wiringPiSetupPhys(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = wiringPiSetupPhys();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wiringPiSetupPiFace_FUNCTION
#define wiringPiSetupPiFace_REQUIRED_ARGC 0
#define wiringPiSetupPiFace_OPTIONAL_ARGC 0
/* wiringPiSetupPiFace
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Pi_wiringPiSetupPiFace(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = wiringPiSetupPiFace();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wiringPiSetupPiFaceForGpioProg_FUNCTION
#define wiringPiSetupPiFaceForGpioProg_REQUIRED_ARGC 0
#define wiringPiSetupPiFaceForGpioProg_OPTIONAL_ARGC 0
/* wiringPiSetupPiFaceForGpioProg
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Pi_wiringPiSetupPiFaceForGpioProg(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = wiringPiSetupPiFaceForGpioProg();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wiringPiSetupSys_FUNCTION
#define wiringPiSetupSys_REQUIRED_ARGC 0
#define wiringPiSetupSys_OPTIONAL_ARGC 0
/* wiringPiSetupSys
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Pi_wiringPiSetupSys(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int result = wiringPiSetupSys();

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif

#if BIND_wpiPinToGpio_FUNCTION
#define wpiPinToGpio_REQUIRED_ARGC 1
#define wpiPinToGpio_OPTIONAL_ARGC 0
/* wpiPinToGpio
 *
 * Parameters:
 * - wpiPin: int
 * Return Type: int
 */
mrb_value
mrb_Pi_wpiPinToGpio(mrb_state* mrb, mrb_value self) {
  mrb_value wpiPin;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &wpiPin);


  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, wpiPin, mrb->fixnum_class)) {
    mrb_raise(mrb, E_TYPE_ERROR, "Fixnum expected");
    return mrb_nil_value();
  }


  /* Unbox parameters */
  int native_wpiPin = mrb_fixnum(wpiPin);

  /* Invocation */
  int result = wpiPinToGpio(native_wpiPin);

  /* Box the return value */
  if (result > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value return_value = mrb_fixnum_value(result);

  return return_value;
}
#endif


void mrb_mruby_wiring_pi_gem_init(mrb_state* mrb) {
  RClass* Pi_module = mrb_define_module(mrb, "Pi");
  mruby_Pi_define_macro_constants(mrb);

  /*
   * Initialize class bindings
   */
#if BIND_WiringPiNodeStruct_TYPE
  mrb_Pi_WiringPiNodeStruct_init(mrb);
#endif

  /*
   * Global Functions
   */
#if BIND_analogRead_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "analogRead", mrb_Pi_analogRead, MRB_ARGS_ARG(analogRead_REQUIRED_ARGC, analogRead_OPTIONAL_ARGC));
#endif
#if BIND_analogWrite_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "analogWrite", mrb_Pi_analogWrite, MRB_ARGS_ARG(analogWrite_REQUIRED_ARGC, analogWrite_OPTIONAL_ARGC));
#endif
#if BIND_delay_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "delay", mrb_Pi_delay, MRB_ARGS_ARG(delay_REQUIRED_ARGC, delay_OPTIONAL_ARGC));
#endif
#if BIND_delayMicroseconds_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "delayMicroseconds", mrb_Pi_delayMicroseconds, MRB_ARGS_ARG(delayMicroseconds_REQUIRED_ARGC, delayMicroseconds_OPTIONAL_ARGC));
#endif
#if BIND_digitalRead_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "digitalRead", mrb_Pi_digitalRead, MRB_ARGS_ARG(digitalRead_REQUIRED_ARGC, digitalRead_OPTIONAL_ARGC));
#endif
#if BIND_digitalWrite_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "digitalWrite", mrb_Pi_digitalWrite, MRB_ARGS_ARG(digitalWrite_REQUIRED_ARGC, digitalWrite_OPTIONAL_ARGC));
#endif
#if BIND_digitalWriteByte_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "digitalWriteByte", mrb_Pi_digitalWriteByte, MRB_ARGS_ARG(digitalWriteByte_REQUIRED_ARGC, digitalWriteByte_OPTIONAL_ARGC));
#endif
#if BIND_getAlt_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "getAlt", mrb_Pi_getAlt, MRB_ARGS_ARG(getAlt_REQUIRED_ARGC, getAlt_OPTIONAL_ARGC));
#endif
#if BIND_gpioClockSet_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "gpioClockSet", mrb_Pi_gpioClockSet, MRB_ARGS_ARG(gpioClockSet_REQUIRED_ARGC, gpioClockSet_OPTIONAL_ARGC));
#endif
#if BIND_micros_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "micros", mrb_Pi_micros, MRB_ARGS_ARG(micros_REQUIRED_ARGC, micros_OPTIONAL_ARGC));
#endif
#if BIND_millis_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "millis", mrb_Pi_millis, MRB_ARGS_ARG(millis_REQUIRED_ARGC, millis_OPTIONAL_ARGC));
#endif
#if BIND_physPinToGpio_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "physPinToGpio", mrb_Pi_physPinToGpio, MRB_ARGS_ARG(physPinToGpio_REQUIRED_ARGC, physPinToGpio_OPTIONAL_ARGC));
#endif
#if BIND_piBoardId_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "piBoardId", mrb_Pi_piBoardId, MRB_ARGS_ARG(piBoardId_REQUIRED_ARGC, piBoardId_OPTIONAL_ARGC));
#endif
#if BIND_piBoardRev_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "piBoardRev", mrb_Pi_piBoardRev, MRB_ARGS_ARG(piBoardRev_REQUIRED_ARGC, piBoardRev_OPTIONAL_ARGC));
#endif
#if BIND_piHiPri_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "piHiPri", mrb_Pi_piHiPri, MRB_ARGS_ARG(piHiPri_REQUIRED_ARGC, piHiPri_OPTIONAL_ARGC));
#endif
#if BIND_piLock_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "piLock", mrb_Pi_piLock, MRB_ARGS_ARG(piLock_REQUIRED_ARGC, piLock_OPTIONAL_ARGC));
#endif
#if BIND_pinMode_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "pinMode", mrb_Pi_pinMode, MRB_ARGS_ARG(pinMode_REQUIRED_ARGC, pinMode_OPTIONAL_ARGC));
#endif
#if BIND_pinModeAlt_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "pinModeAlt", mrb_Pi_pinModeAlt, MRB_ARGS_ARG(pinModeAlt_REQUIRED_ARGC, pinModeAlt_OPTIONAL_ARGC));
#endif
#if BIND_piThreadCreate_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "piThreadCreate", mrb_Pi_piThreadCreate, MRB_ARGS_ARG(piThreadCreate_REQUIRED_ARGC, piThreadCreate_OPTIONAL_ARGC));
#endif
#if BIND_piUnlock_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "piUnlock", mrb_Pi_piUnlock, MRB_ARGS_ARG(piUnlock_REQUIRED_ARGC, piUnlock_OPTIONAL_ARGC));
#endif
#if BIND_pullUpDnControl_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "pullUpDnControl", mrb_Pi_pullUpDnControl, MRB_ARGS_ARG(pullUpDnControl_REQUIRED_ARGC, pullUpDnControl_OPTIONAL_ARGC));
#endif
#if BIND_pwmSetClock_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "pwmSetClock", mrb_Pi_pwmSetClock, MRB_ARGS_ARG(pwmSetClock_REQUIRED_ARGC, pwmSetClock_OPTIONAL_ARGC));
#endif
#if BIND_pwmSetMode_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "pwmSetMode", mrb_Pi_pwmSetMode, MRB_ARGS_ARG(pwmSetMode_REQUIRED_ARGC, pwmSetMode_OPTIONAL_ARGC));
#endif
#if BIND_pwmSetRange_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "pwmSetRange", mrb_Pi_pwmSetRange, MRB_ARGS_ARG(pwmSetRange_REQUIRED_ARGC, pwmSetRange_OPTIONAL_ARGC));
#endif
#if BIND_pwmToneWrite_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "pwmToneWrite", mrb_Pi_pwmToneWrite, MRB_ARGS_ARG(pwmToneWrite_REQUIRED_ARGC, pwmToneWrite_OPTIONAL_ARGC));
#endif
#if BIND_pwmWrite_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "pwmWrite", mrb_Pi_pwmWrite, MRB_ARGS_ARG(pwmWrite_REQUIRED_ARGC, pwmWrite_OPTIONAL_ARGC));
#endif
#if BIND_setPadDrive_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "setPadDrive", mrb_Pi_setPadDrive, MRB_ARGS_ARG(setPadDrive_REQUIRED_ARGC, setPadDrive_OPTIONAL_ARGC));
#endif
#if BIND_waitForInterrupt_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "waitForInterrupt", mrb_Pi_waitForInterrupt, MRB_ARGS_ARG(waitForInterrupt_REQUIRED_ARGC, waitForInterrupt_OPTIONAL_ARGC));
#endif
#if BIND_wiringPiFailure_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "wiringPiFailure", mrb_Pi_wiringPiFailure, MRB_ARGS_ARG(wiringPiFailure_REQUIRED_ARGC, wiringPiFailure_OPTIONAL_ARGC));
#endif
#if BIND_wiringPiFindNode_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "wiringPiFindNode", mrb_Pi_wiringPiFindNode, MRB_ARGS_ARG(wiringPiFindNode_REQUIRED_ARGC, wiringPiFindNode_OPTIONAL_ARGC));
#endif
#if BIND_wiringPiISR_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "wiringPiISR", mrb_Pi_wiringPiISR, MRB_ARGS_ARG(wiringPiISR_REQUIRED_ARGC, wiringPiISR_OPTIONAL_ARGC));
#endif
#if BIND_wiringPiNewNode_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "wiringPiNewNode", mrb_Pi_wiringPiNewNode, MRB_ARGS_ARG(wiringPiNewNode_REQUIRED_ARGC, wiringPiNewNode_OPTIONAL_ARGC));
#endif
#if BIND_wiringPiSetup_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "wiringPiSetup", mrb_Pi_wiringPiSetup, MRB_ARGS_ARG(wiringPiSetup_REQUIRED_ARGC, wiringPiSetup_OPTIONAL_ARGC));
#endif
#if BIND_wiringPiSetupGpio_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "wiringPiSetupGpio", mrb_Pi_wiringPiSetupGpio, MRB_ARGS_ARG(wiringPiSetupGpio_REQUIRED_ARGC, wiringPiSetupGpio_OPTIONAL_ARGC));
#endif
#if BIND_wiringPiSetupPhys_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "wiringPiSetupPhys", mrb_Pi_wiringPiSetupPhys, MRB_ARGS_ARG(wiringPiSetupPhys_REQUIRED_ARGC, wiringPiSetupPhys_OPTIONAL_ARGC));
#endif
#if BIND_wiringPiSetupPiFace_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "wiringPiSetupPiFace", mrb_Pi_wiringPiSetupPiFace, MRB_ARGS_ARG(wiringPiSetupPiFace_REQUIRED_ARGC, wiringPiSetupPiFace_OPTIONAL_ARGC));
#endif
#if BIND_wiringPiSetupPiFaceForGpioProg_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "wiringPiSetupPiFaceForGpioProg", mrb_Pi_wiringPiSetupPiFaceForGpioProg, MRB_ARGS_ARG(wiringPiSetupPiFaceForGpioProg_REQUIRED_ARGC, wiringPiSetupPiFaceForGpioProg_OPTIONAL_ARGC));
#endif
#if BIND_wiringPiSetupSys_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "wiringPiSetupSys", mrb_Pi_wiringPiSetupSys, MRB_ARGS_ARG(wiringPiSetupSys_REQUIRED_ARGC, wiringPiSetupSys_OPTIONAL_ARGC));
#endif
#if BIND_wpiPinToGpio_FUNCTION
  mrb_define_class_method(mrb, Pi_module, "wpiPinToGpio", mrb_Pi_wpiPinToGpio, MRB_ARGS_ARG(wpiPinToGpio_REQUIRED_ARGC, wpiPinToGpio_OPTIONAL_ARGC));
#endif

}

void mrb_mruby_wiring_pi_gem_final(mrb_state* mrb){

}

#ifdef __cplusplus
}
#endif
