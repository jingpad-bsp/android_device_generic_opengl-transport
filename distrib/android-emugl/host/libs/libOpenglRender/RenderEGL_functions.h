// Auto-generated with: android/scripts/gen-entries.py --mode=functions distrib/android-emugl/host/libs/libOpenglRender/render_egl.entries
// DO NOT EDIT THIS FILE

#ifndef RENDER_EGL_FUNCTIONS_H
#define RENDER_EGL_FUNCTIONS_H

#include <EGL/egl.h>
#define LIST_RENDER_EGL_FUNCTIONS(X) \
  X(EGLint, eglGetError, ()) \
  X(EGLDisplay, eglGetDisplay, (EGLNativeDisplayType dpy)) \
  X(EGLBoolean, eglInitialize, (EGLDisplay dpy, EGLint* major, EGLint* minor)) \
  X(char*, eglQueryString, (EGLDisplay dpy, EGLint id)) \
  X(EGLBoolean, eglGetConfigs, (EGLDisplay display, EGLConfig* configs, EGLint config_size, EGLint* num_config)) \
  X(EGLBoolean, eglChooseConfig, (EGLDisplay display, const EGLint* attribs, EGLConfig* configs, EGLint config_size, EGLint* num_config)) \
  X(EGLBoolean, eglGetConfigAttrib, (EGLDisplay display, EGLConfig config, EGLint attribute, EGLint* value)) \
  X(EGLSurface, eglCreateWindowSurface, (EGLDisplay display, EGLConfig config, EGLNativeWindowType native_window, const EGLint* attrib_list)) \
  X(EGLSurface, eglCreatePbufferSurface, (EGLDisplay display, EGLConfig config, const EGLint* attrib_list)) \
  X(EGLBoolean, eglDestroySurface, (EGLDisplay display, EGLSurface surface)) \
  X(EGLBoolean, eglBindAPI, (EGLenum api)) \
  X(EGLenum, eglQueryAPI, ()) \
  X(EGLBoolean, eglReleaseThread, ()) \
  X(EGLContext, eglCreateContext, (EGLDisplay display, EGLConfig config, EGLContext share_context, const EGLint* attrib_list)) \
  X(EGLBoolean, eglDestroyContext, (EGLDisplay display, EGLContext context)) \
  X(EGLBoolean, eglMakeCurrent, (EGLDisplay display, EGLSurface draw, EGLSurface read, EGLContext context)) \
  X(EGLContext, eglGetCurrentContext, ()) \
  X(EGLSurface, eglGetCurrentSurface, (EGLint readdraw)) \
  X(EGLBoolean, eglSwapBuffers, (EGLDisplay display, EGLSurface surface)) \
  X(void*, eglGetProcAddress, (const char* function_name)) \


#endif  // RENDER_EGL_FUNCTIONS_H
