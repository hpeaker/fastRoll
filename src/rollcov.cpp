#include <Rcpp.h>
#include <fastRoll.h>
using namespace Rcpp;
using namespace fastRoll;

// [[Rcpp::export]]
Rcpp::NumericVector
rollcov_cpp(Rcpp::NumericVector x, Rcpp::NumericVector y, int k) {
  
  Rcpp::NumericVector Ex = rollmean_cpp(x, k);
  Rcpp::NumericVector Ey = rollmean_cpp(y, k);
  Rcpp::NumericVector Exy = rollmean_cpp(x * y, k);
  
  Rcpp::NumericVector out = Exy - Ex * Ey;
  
  return(out * k / (k - 1));
}

