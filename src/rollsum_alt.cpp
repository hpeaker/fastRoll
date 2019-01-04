#include <Rcpp.h>

double init_rollsum_cpp(Rcpp::NumericVector x) {
  double init = 0;
  for(int i = 0; i < x.size(); i++) {
    init += x[i];
  }
  return init;
}

double update_rollsum_cpp(double x, double add, double remove) {
  return x + add - remove;
}

// [[Rcpp::export]]
Rcpp::NumericVector
rollsum2_cpp(Rcpp::NumericVector x, int k) {
  
  // Preallocate storage for output vector
  int n = x.size();
  Rcpp::NumericVector out(n - k + 1);
  
  // Calculate the sum for the first rolling window
  double init = init_rollsum_cpp(x[Rcpp::Range(0, k-1)]);
  
  // Update the sum based on added and removed value
  for(int i = 0; i < n - k; i++) {
    out[i + 1] = update_rollsum_cpp(out[i], x[i + k], x[i]);
  }
  
  // Return the sums in each window
  return out;
}
