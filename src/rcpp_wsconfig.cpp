#include<Rcpp.h>
#include<wsconn.h>

using namespace Rcpp;
using namespace webstor;

RCPP_MODULE(WsConfig){
  class_<WsConfig>("WsConfig")
  .constructor()
  ;


}


