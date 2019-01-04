#include <Rcpp.h>
#include <fastRoll.h>

using namespace Rcpp;
using namespace fastRoll;

// [[Rcpp::export]]
NumericVector
  rollcor_cpp(NumericVector x, NumericVector y, int k) {
    
    NumericVector Ex = rollmean_cpp(x, k);
    NumericVector Ey = rollmean_cpp(y, k);
    NumericVector Exy = rollmean_cpp(x * y, k);
    NumericVector Exx = rollmean_cpp(x * x, k);
    NumericVector Eyy = rollmean_cpp(y * y, k);
    
    NumericVector out = (Exy - Ex * Ey) / (sqrt(Exx - Ex * Ex) * sqrt(Eyy - Ey * Ey));
    
    return out;
  }

