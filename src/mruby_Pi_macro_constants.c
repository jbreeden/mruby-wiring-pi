#include "mruby_Pi.h"

void
mruby_Pi_define_macro_constants(mrb_state* mrb) {
  /* WARNING
   * Code generator does it's best to determine the type of the macro
   * expansions, but mistakes will be made (as macros are just text,
   * and may contain other macros). So, you'll need to verify the
   * conversions used here are of the correct type.
   */

#ifdef __WIRING_PI_H__
  /* Ignoring macro with no expansion: __WIRING_PI_H__ */
#endif
#ifdef GPIO_CLOCK
  mrb_define_const(mrb, Pi_module(mrb), "GPIO_CLOCK", mrb_fixnum_value(GPIO_CLOCK));
#endif
#ifdef HIGH
  mrb_define_const(mrb, Pi_module(mrb), "HIGH", mrb_fixnum_value(HIGH));
#endif
#ifdef INPUT
  mrb_define_const(mrb, Pi_module(mrb), "INPUT", mrb_fixnum_value(INPUT));
#endif
#ifdef INT_EDGE_BOTH
  mrb_define_const(mrb, Pi_module(mrb), "INT_EDGE_BOTH", mrb_fixnum_value(INT_EDGE_BOTH));
#endif
#ifdef INT_EDGE_FALLING
  mrb_define_const(mrb, Pi_module(mrb), "INT_EDGE_FALLING", mrb_fixnum_value(INT_EDGE_FALLING));
#endif
#ifdef INT_EDGE_RISING
  mrb_define_const(mrb, Pi_module(mrb), "INT_EDGE_RISING", mrb_fixnum_value(INT_EDGE_RISING));
#endif
#ifdef INT_EDGE_SETUP
  mrb_define_const(mrb, Pi_module(mrb), "INT_EDGE_SETUP", mrb_fixnum_value(INT_EDGE_SETUP));
#endif
#ifdef LOW
  mrb_define_const(mrb, Pi_module(mrb), "LOW", mrb_fixnum_value(LOW));
#endif
#ifdef NUM_PINS
  mrb_define_const(mrb, Pi_module(mrb), "NUM_PINS", mrb_fixnum_value(NUM_PINS));
#endif
#ifdef OUTPUT
  mrb_define_const(mrb, Pi_module(mrb), "OUTPUT", mrb_fixnum_value(OUTPUT));
#endif
#ifdef PI_MAKER_EGOMAN
  mrb_define_const(mrb, Pi_module(mrb), "PI_MAKER_EGOMAN", mrb_fixnum_value(PI_MAKER_EGOMAN));
#endif
#ifdef PI_MAKER_MBEST
  mrb_define_const(mrb, Pi_module(mrb), "PI_MAKER_MBEST", mrb_fixnum_value(PI_MAKER_MBEST));
#endif
#ifdef PI_MAKER_QISDA
  mrb_define_const(mrb, Pi_module(mrb), "PI_MAKER_QISDA", mrb_fixnum_value(PI_MAKER_QISDA));
#endif
#ifdef PI_MAKER_SONY
  mrb_define_const(mrb, Pi_module(mrb), "PI_MAKER_SONY", mrb_fixnum_value(PI_MAKER_SONY));
#endif
#ifdef PI_MAKER_UNKNOWN
  mrb_define_const(mrb, Pi_module(mrb), "PI_MAKER_UNKNOWN", mrb_fixnum_value(PI_MAKER_UNKNOWN));
#endif
#ifdef PI_MODEL_2
  mrb_define_const(mrb, Pi_module(mrb), "PI_MODEL_2", mrb_fixnum_value(PI_MODEL_2));
#endif
#ifdef PI_MODEL_A
  mrb_define_const(mrb, Pi_module(mrb), "PI_MODEL_A", mrb_fixnum_value(PI_MODEL_A));
#endif
#ifdef PI_MODEL_AP
  mrb_define_const(mrb, Pi_module(mrb), "PI_MODEL_AP", mrb_fixnum_value(PI_MODEL_AP));
#endif
#ifdef PI_MODEL_B
  mrb_define_const(mrb, Pi_module(mrb), "PI_MODEL_B", mrb_fixnum_value(PI_MODEL_B));
#endif
#ifdef PI_MODEL_BP
  mrb_define_const(mrb, Pi_module(mrb), "PI_MODEL_BP", mrb_fixnum_value(PI_MODEL_BP));
#endif
#ifdef PI_MODEL_CM
  mrb_define_const(mrb, Pi_module(mrb), "PI_MODEL_CM", mrb_fixnum_value(PI_MODEL_CM));
#endif
#ifdef PI_MODEL_UNKNOWN
  mrb_define_const(mrb, Pi_module(mrb), "PI_MODEL_UNKNOWN", mrb_fixnum_value(PI_MODEL_UNKNOWN));
#endif
#ifdef PI_THREAD
  /* Ignoring function-like macro: PI_THREAD(X) */
#endif
#ifdef PI_VERSION_1
  mrb_define_const(mrb, Pi_module(mrb), "PI_VERSION_1", mrb_fixnum_value(PI_VERSION_1));
#endif
#ifdef PI_VERSION_1_1
  mrb_define_const(mrb, Pi_module(mrb), "PI_VERSION_1_1", mrb_fixnum_value(PI_VERSION_1_1));
#endif
#ifdef PI_VERSION_1_2
  mrb_define_const(mrb, Pi_module(mrb), "PI_VERSION_1_2", mrb_fixnum_value(PI_VERSION_1_2));
#endif
#ifdef PI_VERSION_2
  mrb_define_const(mrb, Pi_module(mrb), "PI_VERSION_2", mrb_fixnum_value(PI_VERSION_2));
#endif
#ifdef PI_VERSION_UNKNOWN
  mrb_define_const(mrb, Pi_module(mrb), "PI_VERSION_UNKNOWN", mrb_fixnum_value(PI_VERSION_UNKNOWN));
#endif
#ifdef PUD_DOWN
  mrb_define_const(mrb, Pi_module(mrb), "PUD_DOWN", mrb_fixnum_value(PUD_DOWN));
#endif
#ifdef PUD_OFF
  mrb_define_const(mrb, Pi_module(mrb), "PUD_OFF", mrb_fixnum_value(PUD_OFF));
#endif
#ifdef PUD_UP
  mrb_define_const(mrb, Pi_module(mrb), "PUD_UP", mrb_fixnum_value(PUD_UP));
#endif
#ifdef PWM_MODE_BAL
  mrb_define_const(mrb, Pi_module(mrb), "PWM_MODE_BAL", mrb_fixnum_value(PWM_MODE_BAL));
#endif
#ifdef PWM_MODE_MS
  mrb_define_const(mrb, Pi_module(mrb), "PWM_MODE_MS", mrb_fixnum_value(PWM_MODE_MS));
#endif
#ifdef PWM_OUTPUT
  mrb_define_const(mrb, Pi_module(mrb), "PWM_OUTPUT", mrb_fixnum_value(PWM_OUTPUT));
#endif
#ifdef PWM_TONE_OUTPUT
  mrb_define_const(mrb, Pi_module(mrb), "PWM_TONE_OUTPUT", mrb_fixnum_value(PWM_TONE_OUTPUT));
#endif
#ifdef SOFT_PWM_OUTPUT
  mrb_define_const(mrb, Pi_module(mrb), "SOFT_PWM_OUTPUT", mrb_fixnum_value(SOFT_PWM_OUTPUT));
#endif
#ifdef SOFT_TONE_OUTPUT
  mrb_define_const(mrb, Pi_module(mrb), "SOFT_TONE_OUTPUT", mrb_fixnum_value(SOFT_TONE_OUTPUT));
#endif
#ifdef WPI_ALMOST
  mrb_define_const(mrb, Pi_module(mrb), "WPI_ALMOST", mrb_fixnum_value(WPI_ALMOST));
#endif
#ifdef WPI_FATAL
  mrb_define_const(mrb, Pi_module(mrb), "WPI_FATAL", mrb_fixnum_value(WPI_FATAL));
#endif
#ifdef WPI_MODE_GPIO
  mrb_define_const(mrb, Pi_module(mrb), "WPI_MODE_GPIO", mrb_fixnum_value(WPI_MODE_GPIO));
#endif
#ifdef WPI_MODE_GPIO_SYS
  mrb_define_const(mrb, Pi_module(mrb), "WPI_MODE_GPIO_SYS", mrb_fixnum_value(WPI_MODE_GPIO_SYS));
#endif
#ifdef WPI_MODE_PHYS
  mrb_define_const(mrb, Pi_module(mrb), "WPI_MODE_PHYS", mrb_fixnum_value(WPI_MODE_PHYS));
#endif
#ifdef WPI_MODE_PIFACE
  mrb_define_const(mrb, Pi_module(mrb), "WPI_MODE_PIFACE", mrb_fixnum_value(WPI_MODE_PIFACE));
#endif
#ifdef WPI_MODE_PINS
  mrb_define_const(mrb, Pi_module(mrb), "WPI_MODE_PINS", mrb_fixnum_value(WPI_MODE_PINS));
#endif
#ifdef WPI_MODE_UNINITIALISED
  mrb_define_const(mrb, Pi_module(mrb), "WPI_MODE_UNINITIALISED", mrb_fixnum_value(WPI_MODE_UNINITIALISED));
#endif
}
