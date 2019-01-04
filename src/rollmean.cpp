#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::interfaces(r, cpp)]]

// Function declaration with export tag 
// [[Rcpp::export]]
NumericVector
rollmean_cpp(NumericVector x, int k) {
  
  // Preallocate storage for output vector
  int n = x.size();
  NumericVector out(n - k + 1);
  
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
  
  // Return the means in each window
  return(out/k);
}


// [[Rcpp::export]]
Rcpp::NumericVector
  rollsum_cpp(Rcpp::NumericVector x, int k) {
    
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








