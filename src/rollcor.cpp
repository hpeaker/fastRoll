#include <Rcpp.h>

// Function declaration with export tag 
// [[Rcpp::export]]
Rcpp::NumericVector
  rollcor2_cpp(Rcpp::NumericVector x, Rcpp::NumericVector y, int k) {
    
    int n = x.size();
    Rcpp::NumericVector out(n - k + 1);
    
    
    return out;
  }





