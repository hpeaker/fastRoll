#include <Rcpp.h>

// Function declaration with export tag 
// [[Rcpp::export]]
Rcpp::NumericVector
c2_cpp(Rcpp::NumericVector x, Rcpp::NumericVector y) {
  for(int i = 0; i < y.size(); i++) {
    x.push_back(y[i]);
  }
  return x;
}

