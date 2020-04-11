#ifndef INLINE_FUNCTION_H
#define INLINE_FUNCTION_H

namespace inline_function {

// ----------------------------
// Note : an inline function is
// define in the header file
// (*.h) not in the source file
// (*.cc)
// ----------------------------

inline int f1(const int & a) {
    return a + 1;
}

int f2(const int &);
}


#endif // INLINE_FUNCTION_H
