/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_kodein_db_leveldb_jni_LevelDBJNI_WriteBatch */

#ifndef _Included_org_kodein_db_leveldb_jni_LevelDBJNI_WriteBatch
#define _Included_org_kodein_db_leveldb_jni_LevelDBJNI_WriteBatch
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBJNI_WriteBatch
 * Method:    n_Put_BB
 * Signature: (JLjava/nio/ByteBuffer;IILjava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBJNI_00024WriteBatch_n_1Put_1BB
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jobject, jint, jint);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBJNI_WriteBatch
 * Method:    n_Put_AB
 * Signature: (J[BIILjava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBJNI_00024WriteBatch_n_1Put_1AB
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jobject, jint, jint);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBJNI_WriteBatch
 * Method:    n_Put_BA
 * Signature: (JLjava/nio/ByteBuffer;II[BII)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBJNI_00024WriteBatch_n_1Put_1BA
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBJNI_WriteBatch
 * Method:    n_Put_AA
 * Signature: (J[BII[BII)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBJNI_00024WriteBatch_n_1Put_1AA
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBJNI_WriteBatch
 * Method:    n_Delete_B
 * Signature: (JLjava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBJNI_00024WriteBatch_n_1Delete_1B
  (JNIEnv *, jclass, jlong, jobject, jint, jint);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBJNI_WriteBatch
 * Method:    n_Delete_A
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBJNI_00024WriteBatch_n_1Delete_1A
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_kodein_db_leveldb_jni_LevelDBJNI_WriteBatch
 * Method:    n_Release
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_kodein_db_leveldb_jni_LevelDBJNI_00024WriteBatch_n_1Release
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
