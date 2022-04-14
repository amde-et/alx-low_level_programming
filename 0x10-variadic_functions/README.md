# Variadic Functions #

In mathematics and in computer programming, a variadic function is a function of indefinite arity or the one which accepts a variable number of arguments.

To portably implement variadic functions in the C, the standard "stdarg.h" header file is used.

- stdarg.h Declares a type

- va_list, and defines four macros

When working with variable arguments, a function normally declares a variable of type va_list (ap in the example) that will be manipulated by the macros.

- "va_start" takes two arguments, a va_list object and a reference to the function's last parameter (the one before the ellipsis; the macro uses this to get its bearings). It initialises the va_list object for use by va_arg or va_copy. The compiler will normally issue a warning if the reference is incorrect (e.g. a reference to a different parameter than the last one, or a reference to a wholly different object), but will not prevent compilation from completing normally.

- "va_arg" takes two arguments, a va_list object (previously initialised) and a type descriptor. It expands to the next variable argument, and has the specified type. Successive invocations of va_arg allow processing each of the variable arguments in turn. Unspecified behavior occurs if the type is incorrect or there is no next variable argument.

- "va_end" takes one argument, a va_list object. It serves to clean up. If one wanted to, for instance, scan the variable arguments more than once, the programmer would re-initialise your va_list object by invoking va_end and then va_start again on it.

- "va_copy" takes two arguments, both of them va_list objects. It clones the second (which must have been initialised) into the first. Going back to the "scan the variable arguments more than once" example, this could be achieved by invoking va_start on a first va_list, then using va_copy to clone it into a second va_list.

After scanning the variable arguments a first time with va_arg and the first va_list (disposing of it with va_end), the programmer could scan the variable arguments a second time with va_arg and the second va_list. Don't forget to va_end the cloned va_list.