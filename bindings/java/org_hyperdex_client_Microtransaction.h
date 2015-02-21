/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_hyperdex_client_Microtransaction */

#ifndef _Included_org_hyperdex_client_Microtransaction
#define _Included_org_hyperdex_client_Microtransaction
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    _create
 * Signature: (Lorg/hyperdex/client/Client;Ljava/lang/String;)V
 */
JNIEXPORT HYPERDEX_API void JNICALL Java_org_hyperdex_client_Microtransaction__1create
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    uxact_put
 * Signature: (Lorg/hyperdex/client/Microtransaction;Ljava/util/Map;)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Microtransaction_uxact_1put
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    uxact_atomic_add
 * Signature: (Lorg/hyperdex/client/Microtransaction;Ljava/util/Map;)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Microtransaction_uxact_1atomic_1add
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    uxact_atomic_sub
 * Signature: (Lorg/hyperdex/client/Microtransaction;Ljava/util/Map;)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Microtransaction_uxact_1atomic_1sub
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    uxact_atomic_mul
 * Signature: (Lorg/hyperdex/client/Microtransaction;Ljava/util/Map;)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Microtransaction_uxact_1atomic_1mul
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    uxact_atomic_div
 * Signature: (Lorg/hyperdex/client/Microtransaction;Ljava/util/Map;)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Microtransaction_uxact_1atomic_1div
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    uxact_atomic_and
 * Signature: (Lorg/hyperdex/client/Microtransaction;Ljava/util/Map;)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Microtransaction_uxact_1atomic_1and
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    uxact_atomic_or
 * Signature: (Lorg/hyperdex/client/Microtransaction;Ljava/util/Map;)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Microtransaction_uxact_1atomic_1or
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    uxact_string_prepend
 * Signature: (Lorg/hyperdex/client/Microtransaction;Ljava/util/Map;)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Microtransaction_uxact_1string_1prepend
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    uxact_string_append
 * Signature: (Lorg/hyperdex/client/Microtransaction;Ljava/util/Map;)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Microtransaction_uxact_1string_1append
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    uxact_list_lpush
 * Signature: (Lorg/hyperdex/client/Microtransaction;Ljava/util/Map;)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Microtransaction_uxact_1list_1lpush
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    uxact_list_rpush
 * Signature: (Lorg/hyperdex/client/Microtransaction;Ljava/util/Map;)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Microtransaction_uxact_1list_1rpush
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    uxact_document_rename
 * Signature: (Lorg/hyperdex/client/Microtransaction;Ljava/util/Map;)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Microtransaction_uxact_1document_1rename
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     org_hyperdex_client_Microtransaction
 * Method:    uxact_document_unset
 * Signature: (Lorg/hyperdex/client/Microtransaction;Ljava/util/Map;)Lorg/hyperdex/client/Iterator;
 */
JNIEXPORT HYPERDEX_API jobject JNICALL Java_org_hyperdex_client_Microtransaction_uxact_1document_1unset
  (JNIEnv *, jobject, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
