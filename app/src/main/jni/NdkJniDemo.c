#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_example_mashizhao_gradletoso_JNIActivity_StringFromJNI(JNIEnv *env, jclass type) {

    // TODO


    return (*env)->NewStringUTF(env, "string from jni");
}