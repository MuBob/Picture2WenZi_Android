#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_JniManager_getMethod(JNIEnv *env, jclass type) {
    std::string hello = "Hello from C++1";
    return env->NewStringUTF(hello.c_str());
}