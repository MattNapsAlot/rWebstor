#include<Rcpp.h>
#include<wsconn.h>

using namespace Rcpp;
using namespace webstor;

RCPP_MODULE(WsConfig){
  class_<WsConfig>("WsConfig")
  .constructor()
  .field("accKey", &WsConfig::accKey)
  .field("secKey", &WsConfig::secKey)
  .field("sessionToken", &WsConfig::sessionToken)
  .field("host", &WsConfig::host)
  .field("port", &WsConfig::port)
  .field("isHttps", &WsConfig::isHttps)
//  .field("storType", &WsConfig::storType)
  .field("proxy", &WsConfig::proxy)
  .field("sslCertFile", &WsConfig::sslCertFile)
  ;
}


