#include <Rcpp.h>

// Function declaration with export tag 
// [[Rcpp::export]]
Rcpp::NumericVector
rollmean_cpp(Rcpp::NumericVector x, int k) {
  
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
  
  // Return the means in each window
  return(out/k);
}

// [[Rcpp::export]]
Rcpp::NumericVector
  rollcor_cpp(Rcpp::NumericVector x, Rcpp::NumericVector y, int k) {
    
    Rcpp::NumericVector Ex = rollmean_cpp(x, k);
    Rcpp::NumericVector Ey = rollmean_cpp(y, k);
    Rcpp::NumericVector Exy = rollmean_cpp(x * y, k);
    Rcpp::NumericVector Exx = rollmean_cpp(x * x, k);
    Rcpp::NumericVector Eyy = rollmean_cpp(y * y, k);
    
    Rcpp::NumericVector out = (Exy - Ex * Ey) / (sqrt(Exx - Ex * Ex) * sqrt(Eyy - Ey * Ey));
    
    return out;
  }


// [[Rcpp::export]]
Rcpp::NumericVector
  rollcov_cpp(Rcpp::NumericVector x, Rcpp::NumericVector y, int k) {
    
    Rcpp::NumericVector Ex = rollmean_cpp(x, k);
    Rcpp::NumericVector Ey = rollmean_cpp(y, k);
    Rcpp::NumericVector Exy = rollmean_cpp(x * y, k);
    
    Rcpp::NumericVector out = Exy - Ex * Ey;
    
    return out;
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


// [[Rcpp::export]]
Rcpp::NumericVector
  rollvar_cpp(Rcpp::NumericVector x, int k) {
    
    int n = x.size();
    
    Rcpp::NumericVector Exx = rollsum_cpp(x * x, k);
    Rcpp::NumericVector Ex = rollsum_cpp(x, k);
    
    Rcpp::NumericVector out = (Exx - (Ex * Ex)/n)/(n - 1);
    
    return out;
  }


// [[Rcpp::export]]
Rcpp::NumericVector
  rollsd_cpp(Rcpp::NumericVector x, int k) {
    
    Rcpp::NumericVector out = sqrt(rollvar_cpp(x, k));
    
    return out;
  }






