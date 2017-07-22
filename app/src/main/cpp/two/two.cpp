#include <jni.h>
#include <string>


extern "C"
JNIEXPORT jstring JNICALL
Java_com_test_ndkmoreso_MainActivity_stringFromJNI11(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
