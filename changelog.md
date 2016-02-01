Version: 4d06ca5ed1
-------------------

I've been upgrading all of my mrbgems to work with the current version of [mruby-bindings](https://github.com/jbreeden/mruby-bindings). As part of that
work, I came up with scripts to replace all manual type checking with the
corresponding format specifiers to the `mrb_get_args` call. Taking this
opportunity to clean up this gem. Not going all the way with regenerating
the code - since this gem is so small & already works - but I never want
to read `if (mrb_obj_is_kind_of(mrb, obj, mrb->fixnum_class))` again.

- Switched to C files
- Replaced all manual type checking with `mrb_get_args` format specifiers.

Once I get this on a Pi & make sure it still works I'll make an actual tag.

Version: 3c3dc179b7 (no tags yet)
---------------------------------

The original generated bindings, & the `Pin` class implementation.
