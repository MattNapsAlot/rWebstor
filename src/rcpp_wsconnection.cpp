#include<Rcpp.h>
#include<wsconn.h>

using namespace Rcpp;
using namespace webstor;

RCPP_MODULE(WsConnection) {
  class_<WsConnection>("WsConnection")
  //.constructor(WsConfig)

  //.field("c_multipartUploadMinPartSizeMB", &WsConnection::c_multipartUploadMinPartSizeMB)
  //.field("c_multipartUploadMinPartSize", &WsConnection::c_multipartUploadMinPartSize)

  //.method("createBucket" &WsConnection::createBucket)
  //.method("delBucket" &WsConnection::delBucket)
  //.method("listAllBuckets" &WsConnection::listAllBuckets)
  //.method("put" &WsConnection::put)
  //.method("get" &WsConnection::get)
  //.method("listObjects" &WsConnection::listObjects)
  //.method("listAllObjects" &WsConnection::listAllObjects)
  //.method("del" &WsConnection::del)
  //.method("delAll" &WsConnection::delAll)
  //.method("initiateMultipartUpload" &WsConnection::initiateMultipartUpload)
  //.method("putPart" &WsConnection::putPart)
  //.method("completeMultipartUpload" &WsConnection::completeMultipartUpload)
  //.method("abortMultipartUpload" &WsConnection::abortMultipartUpload)
  //.method("abortAllMultipartUploads" &WsConnection::abortAllMultipartUploads)
  //.method("listMultipartUploads" &WsConnection::listMultipartUploads)
  //.method("listAllMultipartUploads" &WsConnection::listAllMultipartUploads)
  //.method("pendPut" &WsConnection::pendPut)
  //.method("completePut" &WsConnection::completePut)
  //.method("pendGet" &WsConnection::pendGet)
  //.method("completeGet" &WsConnection::completeGet)
  //.method("pendDel" &WsConnection::pendDel)
  //.method("completeDel" &WsConnection::completeDel)
  //.method("isAsyncPending" &WsConnection::isAsyncPending)
  //.method("isAsyncCompleted" &WsConnection::isAsyncCompleted)
  //.method("cancelAsync" &WsConnection::cancelAsync)
  //.method("waitAny" &WsConnection::waitAny)
  //.method("setTimeout" &WsConnection::setTimeout)
  //.method("setConnectTimeout" &WsConnection::setConnectTimeout)
  //.method("enableTracing" &WsConnection::enableTracing)
  ;

}



