#include <Rcpp.h>

// Function declaration with export tag 
// [[Rcpp::export]]
Rcpp::NumericVector
rollmax_cpp(Rcpp::NumericVector x, int k) {
  
  // Preallocate storage for output vector
  int n = x.size();
  Rcpp::NumericVector out(n - k + 1);
  
  // Calculate the max for the first rolling window
  out[0] = *std::max_element(x.begin(), x.begin() + k);
  
  // Update the max based on added and removed value
  for(int i = 0; i < n - k; i++) {
    double current = out[i];
    double add = x[i + k];
    double remove = x[i];
    if(current >= add && current > remove) {
      out[i + 1] = out[i];
    } else if(current < add) {
      out[i + 1] = add;
    } else {
      out[i + 1] = *std::max_element(x.begin() + i + 1, x.begin() + i + 1 + k);
    }
  }
  
  // Return the max in each window
  return(out);
}



