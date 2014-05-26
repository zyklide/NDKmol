/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jp_sfjp_webglmol_NDKmol_NdkView */

#ifndef _Included_jp_sfjp_webglmol_NDKmol_NdkView
#define _Included_jp_sfjp_webglmol_NDKmol_NdkView
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jp_sfjp_webglmol_NDKmol_NdkView
 * Method:    nativeGLInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_jp_sfjp_webglmol_NDKmol_NdkView_nativeGLInit
  (JNIEnv *, jclass);

/*
 * Class:     jp_sfjp_webglmol_NDKmol_NdkView
 * Method:    nativeGLResize
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_jp_sfjp_webglmol_NDKmol_NdkView_nativeGLResize
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     jp_sfjp_webglmol_NDKmol_NdkView
 * Method:    nativeGLRender
 * Signature: (FFFFFFFFFF)V
 */
JNIEXPORT void JNICALL Java_jp_sfjp_webglmol_NDKmol_NdkView_nativeGLRender
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     jp_sfjp_webglmol_NDKmol_NdkView
 * Method:    nativeLoadProtein
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_jp_sfjp_webglmol_NDKmol_NdkView_nativeLoadProtein
  (JNIEnv *, jclass, jstring);

/*
 * Class:     jp_sfjp_webglmol_NDKmol_NdkView
 * Method:    nativeLoadSDF
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_jp_sfjp_webglmol_NDKmol_NdkView_nativeLoadSDF
  (JNIEnv *, jclass, jstring);

/*
 * Class:     jp_sfjp_webglmol_NDKmol_NdkView
 * Method:    nativeLoadCCP4
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_jp_sfjp_webglmol_NDKmol_NdkView_nativeLoadCCP4
  (JNIEnv *, jclass, jstring);

/*
 * Class:     jp_sfjp_webglmol_NDKmol_NdkView
 * Method:    nativeUpdateMesh
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_jp_sfjp_webglmol_NDKmol_NdkView_nativeUpdateMap
  (JNIEnv *, jboolean);


/*
 * Class:     jp_sfjp_webglmol_NDKmol_NdkView
 * Method:    buildScene
 * Signature: (IIIIZZIZZZ)V
 */
JNIEXPORT void JNICALL Java_jp_sfjp_webglmol_NDKmol_NdkView_buildScene
  (JNIEnv *, jclass, jint, jint, jint, jint, jboolean, jboolean, jint, jboolean, jboolean, jboolean);

/*
 * Class:     jp_sfjp_webglmol_NDKmol_NdkView
 * Method:    nativeAdjustZoom
 * Signature: (I)[F
 */
JNIEXPORT jfloatArray JNICALL Java_jp_sfjp_webglmol_NDKmol_NdkView_nativeAdjustZoom
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
