/*
 * TODO: Update includes
 */
 #include "mruby_Pi.h"


#if BIND_WiringPiNodeStruct_TYPE
/*
 * Boxing implementation for struct wiringPiNodeStruct
 */

static void free_struct wiringPiNodeStruct(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    /* TODO: free is the default. Should be changed if a type-specific
     *       destructor is provided for this type.
     */
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
}

static const mrb_data_type wiringPiNodeStruct_data_type = {
   "struct wiringPiNodeStruct", free_wiringPiNodeStruct
};

mrb_value
mruby_box_wiringPiNodeStruct(mrb_state* mrb, struct wiringPiNodeStruct *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, WiringPiNodeStruct_class(mrb), &struct wiringPiNodeStruct_data_type, box));
}

mrb_value
mruby_giftwrap_wiringPiNodeStruct(mrb_state* mrb, struct wiringPiNodeStruct *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, WiringPiNodeStruct_class(mrb), &struct wiringPiNodeStruct_data_type, box));
}

void
mruby_set_wiringPiNodeStruct_data_ptr(mrb_value obj, struct wiringPiNodeStruct *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &struct wiringPiNodeStruct_data_type);
}

void
mruby_gift_wiringPiNodeStruct_data_ptr(mrb_value obj, struct wiringPiNodeStruct *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &struct wiringPiNodeStruct_data_type);
}

struct wiringPiNodeStruct *
mruby_unbox_wiringPiNodeStruct(mrb_value boxed) {
  return (struct wiringPiNodeStruct *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif

