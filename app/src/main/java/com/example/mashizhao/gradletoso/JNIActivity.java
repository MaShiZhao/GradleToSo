package com.example.mashizhao.gradletoso;

/**
 * Created by MaShiZhao on 2016/12/21.
 */
public class JNIActivity
{
    static {
        System.loadLibrary("NdkJniDemo");
    }

    public static native String StringFromJNI();
}
