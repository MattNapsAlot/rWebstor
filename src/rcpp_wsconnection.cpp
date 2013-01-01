#include<Rcpp.h>
#include<wsconn.h>

using namespace Rcpp;
using namespace webstor;

RCPP_MODULE(WsConnection) {
  class_<WsConnection>("WsConnection")
  ;

}



