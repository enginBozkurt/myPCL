/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_pointclouds_onirec_CaptureThreadManager */

#ifndef _Included_org_pointclouds_onirec_CaptureThreadManager
#define _Included_org_pointclouds_onirec_CaptureThreadManager
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_pointclouds_onirec_CaptureThreadManager
 * Method:    imageMapToBitmap
 * Signature: (JLandroid/graphics/Bitmap;)V
 */
JNIEXPORT void JNICALL Java_org_pointclouds_onirec_CaptureThreadManager_imageMapToBitmap
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_pointclouds_onirec_CaptureThreadManager
 * Method:    depthMapToBitmap
 * Signature: (JLandroid/graphics/Bitmap;I)V
 */
JNIEXPORT void JNICALL Java_org_pointclouds_onirec_CaptureThreadManager_depthMapToBitmap
  (JNIEnv *, jclass, jlong, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif