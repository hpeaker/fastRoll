#include <Rcpp.h>

// Function declaration with export tag 
// [[Rcpp::export]]
Rcpp::NumericVector
rollsum3_cpp(Rcpp::NumericVector x, int k) {
  
  // Preallocate storage for output vector
  int n = x.size();
  Rcpp::NumericVector out(n - k + 1);
  
  // Calculate the sum for the first rolling window
  double init = 0;
  for(int i = 0; i < k; i++) {
    init += x[i];
  }
  out[0] = init;
  
  // Update the sum based on added and removed value
  for(int i = 0; i < n - k; i++) {
    out[i + 1] = out[i] + (x[i + k] - x[i]);
  }
  
  // Return the sums in each window
  return out;
}



// [[Rcpp::export]]
Rcpp::NumericVector
rollmean2_cpp(Rcpp::NumericVector x, int k) {
  return rollsum3_cpp(x, k) / k;
}

