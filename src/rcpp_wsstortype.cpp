#include<Rcpp.h>
#include<wsconn.h>

using namespace Rcpp;
using namespace webstor;

RCPP_MODULE(WsStorType){
  enum_<WsStorType, char*>("WsStorType")
  ;
}

