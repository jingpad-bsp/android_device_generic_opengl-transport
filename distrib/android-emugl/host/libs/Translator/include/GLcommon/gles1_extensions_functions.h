// Auto-generated with: android/scripts/gen-entries.py --mode=functions distrib/android-emugl/host/libs/Translator/GLcommon/gles1_extensions.entries --output=distrib/android-emugl/host/libs/Translator/include/GLcommon/gles1_extensions_functions.h
// DO NOT EDIT THIS FILE

#ifndef GLES1_EXTENSIONS_FUNCTIONS_H
#define GLES1_EXTENSIONS_FUNCTIONS_H

#define LIST_GLES1_EXTENSIONS_FUNCTIONS(X) \
  X(void, glCurrentPaletteMatrixARB, (GLint index)) \
  X(void, glMatrixIndexuivARB, (GLint size, GLuint * indices)) \
  X(void, glMatrixIndexPointerARB, (GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)) \
  X(void, glWeightPointerARB, (GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)) \
  X(void, glTexGenf, (GLenum coord, GLenum pname, GLfloat param)) \
  X(void, glTexGeni, (GLenum coord, GLenum pname, GLint param)) \
  X(void, glTexGenfv, (GLenum coord, GLenum pname, const GLfloat * params)) \
  X(void, glTexGeniv, (GLenum coord, GLenum pname, const GLint * params)) \
  X(void, glGetTexGenfv, (GLenum coord, GLenum pname, GLfloat * params)) \
  X(void, glGetTexGeniv, (GLenum coord, GLenum pname, GLint * params)) \


#endif  // GLES1_EXTENSIONS_FUNCTIONS_H
