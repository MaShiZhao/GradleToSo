# GradleToSo
so shared object
jni java native interface
ndk native developmentit

Android Studio 生成so文件的两种方法

1. gradle  插件可用 比较方便
http://www.jianshu.com/p/2690c9964110

2. 脚本执行 eclipse 可用 比较麻烦
http://www.jianshu.com/p/3494741f0ad1

此demo是方式1

1.配置local.properties gradle.properties app下的build.gradle

ndk.dir=/Users/MaShiZhao/Android/sdk/ndk-bundle
sdk.dir=/Users/MaShiZhao/Android/sdk

android.useDeprecatedNdk=true

defaultConfig {
        applicationId "com.example.mashizhao.gradleso"
        minSdkVersion 14
        targetSdkVersion 25
        versionCode 1
        versionName "1.0"

        ndk {
            moduleName "GradleSo"          //生成的so名字
            abiFilters "armeabi", "armeabi-v7a", "x86" //输出指定三种abi体系结构下的so库，可忽略
        }
    }
    
compile 'com.android.tools.build:gradle-experimental:0.7.0'

2. 创建java 
public class Jni
{
    static {
        System.loadLibrary("GradleSo");
    }

    public static native String stringFromJNI();

}
//不知道这两部如何精简
stringFromJNI报错 command+enter
注释掉build.gradle里面的 compile 'com.android.tools.build:gradle-experimental:0.7.0' 
仍然给报错在command+enter
3.在app/build/intermediates/ndk/debug/lib 下有so文件完成
3.在app/build/intermediates/ndk/debug/lib 下有so文件
