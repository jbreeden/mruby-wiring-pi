
#ifndef Pi_HEADER
#define Pi_HEADER

/*
 * RClass Macros
 * -------------
 *
 * Macros for retrieving the RClass*'s defined by this gem.
 */

#define Pi_module(mrb) mrb_module_get(mrb, "Pi")
#define WiringPiNodeStruct_class(mrb) mrb_class_get_under(mrb, Pi_module(mrb), "WiringPiNodeStruct")

/*
 * Class Bindings Options
 * ----------------------
 *
 * Use these macros to configure the generated bindings for classes & structs.
 *
 * Key:
 *
 * BIND_{type name}_TYPE                     : Should we bind the class at all?
 * BIND_{type name}_INITIALIZE               : If the class is bound, should we also bind initialize to malloc a new instance on `new`?
 * BIND_{type name}_{field name}_FIELD       : If the class is bound, should we also bind this field?
 * BIND_{type name}_{function name}_FUNCTION : If the class is bound, should we also bind this member function?
 *
 * Fields & method are disabled by default so that bindings may be added and
 * tested incrementally. The generated bindings are a good start, but they
 * will need to be verified and, sometimes, customized.
 */

#define BIND_WiringPiNodeStruct_TYPE TRUE
#define BIND_WiringPiNodeStruct_INITIALIZE FALSE
#define BIND_WiringPiNodeStruct_analogRead_FIELD FALSE
#define BIND_WiringPiNodeStruct_analogWrite_FIELD FALSE
#define BIND_WiringPiNodeStruct_data0_FIELD FALSE
#define BIND_WiringPiNodeStruct_data1_FIELD FALSE
#define BIND_WiringPiNodeStruct_data2_FIELD FALSE
#define BIND_WiringPiNodeStruct_data3_FIELD FALSE
#define BIND_WiringPiNodeStruct_digitalRead_FIELD FALSE
#define BIND_WiringPiNodeStruct_digitalWrite_FIELD FALSE
#define BIND_WiringPiNodeStruct_fd_FIELD FALSE
#define BIND_WiringPiNodeStruct_next_FIELD FALSE
#define BIND_WiringPiNodeStruct_pinBase_FIELD FALSE
#define BIND_WiringPiNodeStruct_pinMax_FIELD FALSE
#define BIND_WiringPiNodeStruct_pinMode_FIELD FALSE
#define BIND_WiringPiNodeStruct_pullUpDnControl_FIELD FALSE
#define BIND_WiringPiNodeStruct_pwmWrite_FIELD FALSE


/*
 * Global Function Options
 * -----------------------
 *
 * Set these macros to TRUE to enable bindings for these functions.
 * They are disabled initially so that bindings may be added and tested
 * incrementally. The generated bindings are a good start, but they
 * will need to be verified and, sometimes, customized.
 */

#define BIND_analogRead_FUNCTION FALSE
#define BIND_analogWrite_FUNCTION FALSE
#define BIND_delay_FUNCTION FALSE
#define BIND_delayMicroseconds_FUNCTION FALSE
#define BIND_digitalRead_FUNCTION FALSE
#define BIND_digitalWrite_FUNCTION FALSE
#define BIND_digitalWriteByte_FUNCTION FALSE
#define BIND_getAlt_FUNCTION FALSE
#define BIND_gpioClockSet_FUNCTION FALSE
#define BIND_micros_FUNCTION FALSE
#define BIND_millis_FUNCTION FALSE
#define BIND_physPinToGpio_FUNCTION FALSE
#define BIND_piBoardId_FUNCTION FALSE
#define BIND_piBoardRev_FUNCTION FALSE
#define BIND_piHiPri_FUNCTION FALSE
#define BIND_piLock_FUNCTION FALSE
#define BIND_pinMode_FUNCTION FALSE
#define BIND_pinModeAlt_FUNCTION FALSE
#define BIND_piThreadCreate_FUNCTION FALSE
#define BIND_piUnlock_FUNCTION FALSE
#define BIND_pullUpDnControl_FUNCTION FALSE
#define BIND_pwmSetClock_FUNCTION FALSE
#define BIND_pwmSetMode_FUNCTION FALSE
#define BIND_pwmSetRange_FUNCTION FALSE
#define BIND_pwmToneWrite_FUNCTION FALSE
#define BIND_pwmWrite_FUNCTION FALSE
#define BIND_setPadDrive_FUNCTION FALSE
#define BIND_waitForInterrupt_FUNCTION FALSE
#define BIND_wiringPiFailure_FUNCTION FALSE
#define BIND_wiringPiFindNode_FUNCTION FALSE
#define BIND_wiringPiISR_FUNCTION FALSE
#define BIND_wiringPiNewNode_FUNCTION FALSE
#define BIND_wiringPiSetup_FUNCTION FALSE
#define BIND_wiringPiSetupGpio_FUNCTION FALSE
#define BIND_wiringPiSetupPhys_FUNCTION FALSE
#define BIND_wiringPiSetupPiFace_FUNCTION FALSE
#define BIND_wiringPiSetupPiFaceForGpioProg_FUNCTION FALSE
#define BIND_wiringPiSetupSys_FUNCTION FALSE
#define BIND_wpiPinToGpio_FUNCTION FALSE

/*
 * Header Files
 * ------------
 *
 * These are the header files that defined the
 * classes and functions for which bindings have
 * been generated. If any of these are not needed
 * they should be commented out.
 *
 * TODO: ONLY the filename is inserted here automatically.
 *       If the file is not directly on the include path,
 *       you will need to prepend the relative path.
 */

#include <stdlib.h>
#include "mruby.h"
#include "mruby/array.h"
#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "mruby/value.h"
#include "mruby/variable.h"
#include "wiringPi.h"

/*
 * Class initialization function declarations
 * ------------------------------------------
 *
 * These declarations are controlled by the macros in the
 * "Class Bindings Options" section above.
 */

#if BIND_WiringPiNodeStruct_TYPE
void mrb_Pi_WiringPiNodeStruct_init(mrb_state* mrb);
#endif

/*
 * Boxing declarations
 * -------------------
 *
 * These declarations are controlled by the macros in the
 * "Class Bindings Options" section above.
 */

/*
* Extra wrapper over native pointer to indicate who owns this memory.
* (Either mruby, and it should be garage collected, or C, and it shouldn't be)
* Considered using the LSB of the pointer itself, but I don't think I can
* be assured that all memory is word-aligned (especially when C libraries
* implement their own memory management techniques like memory pools)
*/
typedef struct mruby_to_native_ref_ {
  /* If true, indicates that the object should be freed when
   * mruby GC's the ruby object containing this pointer. This
   * is set to true when an object is boxed via the `giftwrap`
   * or `gift_{type}_ptr_set` functions.
   */
  unsigned char belongs_to_ruby;

  /* A pointer to the native object */
  void* obj;

  /* For the convenience of the binding writer,
   * the data pointer can be used to associate arbitrary
   * data with a reference to a C object. This could
   * be a function pointer to invoke instead of `free` on GC,
   * a pointer back to the RObject, or even cast to an integer type
   * and used as a bit field. You get the idea...
   */
  void* data;
} mruby_to_native_ref;

#if BIND_WiringPiNodeStruct_TYPE
mrb_value
mruby_box_wiringPiNodeStruct(mrb_state* mrb, struct wiringPiNodeStruct *unboxed);

mrb_value
mruby_giftwrap_wiringPiNodeStruct(mrb_state* mrb, struct wiringPiNodeStruct *unboxed);

void
mruby_set_wiringPiNodeStruct_data_ptr(mrb_value obj, struct wiringPiNodeStruct *unboxed);

void
mruby_gift_wiringPiNodeStruct_data_ptr(mrb_value obj, struct wiringPiNodeStruct *unboxed);

struct wiringPiNodeStruct *
mruby_unbox_wiringPiNodeStruct(mrb_value boxed);
#endif


/*
 * Macro definition function declaration
 * -------------------------------------
 */
void mruby_Pi_define_macro_constants(mrb_state* mrb);

#endif
